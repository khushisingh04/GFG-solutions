//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            
            String input_line[] = br.readLine().trim().split("\\s+");
            int[][] matrix = new int[n][n];
            for(int i=0; i<n; i++) {
                for (int j = 0; j < n; ++j) {
                    matrix[i][j] = Integer.parseInt(input_line[i * n + j]); 
                }
            }
            Solution obj = new Solution();
            int[] ans = obj.antiDiagonalPattern(matrix);
            for(int i = 0; i < ans.length; i++)
                System.out.print(ans[i] + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    public int[] antiDiagonalPattern(int[][] matrix)
    {
        // Code here
        int n=matrix.length;
        int ans[]=new int[n*n];
        int index=0;
        for(int i=0;i<n;i++){
            int j=0,k=i;
            while(j>=0 && k>=0 && j<n && k<n){
                ans[index++]=matrix[j][k];
                j++;
                k--;
            }
        }
        for(int i=1;i<n;i++){
            int j=i,k=n-1;
            while(j>=0 && k>=0 && j<n && k<n){
                ans[index++]=matrix[j][k];
                j++;
                k--;
            }
        }
        return ans;

    }}