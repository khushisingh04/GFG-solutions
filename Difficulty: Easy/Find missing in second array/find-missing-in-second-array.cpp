//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    unordered_set <int>s;
	    vector<int> ans;
	    //set me b arr ke ele insert
	    for(int i=0;i<m;i++){
	        s.insert(b[i]);
	    }
	    //a!= set
	    for(int i=0;i<n;i++){
	        if(s.find(a[i])==s.end()){
	            ans.push_back(a[i]);
	        }
	    }
	    return ans;
	} 
};	
	


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends