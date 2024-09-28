//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<int> arr(N,0);
      for(int i=0;i<N;i++){
          if(Edge[i]!=-1){
              arr[Edge[i]]+=i;
          }
      }
      int ans = 0,temp=0;
      for(int i=0;i<N;i++)
      {
          if(temp<=arr[i]){
              ans=i;
              temp=arr[i];
          }
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends