// 1st approach

vector<vector<int>> solution(int n, vector<vector<int>> roads) {
    
    vector<vector<int>>g(n,vector<int>(n,0));
    
    for(int i=0;i<roads.size();i++)
    {
        int x=roads[i][0];
        int y=roads[i][1];
        
        g[x][y]=1;
        g[y][x]=1;
    }
    
    vector<vector<int>>ans;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && g[i][j]==0)
            {
                ans.push_back({i,j});
                g[j][i]=1;
            }
        }
    }
    
    return ans;    
}


