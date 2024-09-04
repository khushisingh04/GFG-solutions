//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
      bool isPrime(int x){
          if(x==2 || x==3) return true;
          for(int i=2;i<=sqrt(x);i++){
              if(x%i==0) return false;
          }
          return true;
      }
  
    vector<int> leastPrimeFactor(int n) {
        vector<int> prime;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                prime.push_back(i);
            }
        }
        
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        
        for(int i=2;i<=n;i++){
            for(int j=0;j<prime.size();j++){
                if(i%prime[j]==0){
                    ans.push_back(prime[j]);
                    break;
                }
            }
        }
        return ans;
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
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends