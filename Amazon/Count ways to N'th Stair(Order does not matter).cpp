#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    
    long long countWays(int m){
    
        long long int dp[m+1];
        
        for(int i=0;i<=m;i++)
            dp[i]=0;
        dp[0]=1;
        for(int i=1;i<=m;i++)
            dp[i]+=dp[i-1];
            
        for(int i=2;i<=m;i++)
            dp[i]+=dp[i-2];
            
        return dp[m];
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends