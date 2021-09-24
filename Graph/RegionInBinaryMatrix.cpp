int  dfs(vector<vector<int>> &grid,int i,int j,int m,int n)
{
    if(i<0||i==m||j<0||j==n||grid[i][j]==0)
    return 0;
    
    grid[i][j]=0;
    return 1+dfs(grid,i+1,j,m,n)+dfs(grid,i+1,j+1,m,n)+dfs(grid,i+1,j-1,m,n)+dfs(grid,i-1,j,m,n)+dfs(grid,i-1,j+1,m,n)+dfs(grid,i-1,j-1,m,n)+dfs(grid,i,j+1,m,n)+dfs(grid,i,j-1,m,n);
}
int Solution::solve(vector<vector<int> > &A) {
    int m=A.size();
    int n=A[0].size();
    int _max=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j])
            {
                _max=max(_max,dfs(A,i,j,m,n));
            }
        }
    }
    return _max;
    
}
