int Solution::minDistance(string A, string B) {
    
    int m=A.length();
    int n=B.length();
    int  dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            {
                dp[i][j]=j;
            }
            else if(j==0)
            {
                dp[i][j]=i;
            }
            else
            {
                dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1);
                int  cost=0;
                if(A[i-1]!=B[j-1])
                cost++;
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+cost);
            }
        }
    }
    return dp[m][n];
    
}
