//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       int dp[n+1];
       int mod=1e9+7;
       // base case
       dp[0]=1;
       dp[1]=1;
       dp[2]=1;
       for(int i=3;i<=n;i++){
           //recursive code
           dp[i]=(dp[i-2]+dp[i-3])% mod;
           
       }
       return dp[n] % mod;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends