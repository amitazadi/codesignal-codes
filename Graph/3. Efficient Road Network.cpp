//Once upon a time, in a kingdom far, far away, there lived a King Byteasar III. As a smart and educated ruler, he did everything in his (unlimited) power to make every single system within his kingdom efficient. The king went down in history as a great road builder: during his reign a great number of roads were built, and the road system he created was the most efficient during those dark times.

// When you started learning about Byteasar's III deeds in your history classes, a creeping doubt crawled into the back of your mind: what if the famous king wasn't so great after all? According to the most recent studies, there were n cities in Byteasar's kingdom, connected by two-way roads. You managed to get information about these roads from the university library, so now you can write a function that will determine whether the road system in Byteasar's kingdom was efficient or not.

// A road system is considered efficient if it is possible to travel from any city to any other city by traversing at most 2 roads.

// Code is a variation of Floyd-warshall algorithm

void dfs(int u,vector<bool>&vis,vector<vector<int>>&g)
{
    vis[u]=true;
    
    for (int i = 0; i < g[u].size(); i++)
    if(!vis[i] and g[u][i]!=-1)
    dfs(i,vis,g); 
}


bool solution(int n, vector<vector<int>> roads) 
{
    vector<vector<int>>g(n,vector<int>(n,-1));    
    vector<bool>vis(n+1,false);
    
    for(int i=0;i<roads.size();i++)
    {
        int xx=roads[i][0];
        int yy=roads[i][1];
        
        g[xx][yy]=1;  
        g[yy][xx]=1;                   
    }

    dfs(0,vis,g);
    
    for(int i=0;i<n;i++)
    if(!vis[i])
    return false;
    
    for(int k = 0 ; k < n ; k++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(g[i][k] != -1 && g[k][j] != -1)
                {
                    if(g[i][j] == -1)
                    g[i][j] = g[i][k] + g[k][j];
                    else
                    g[i][j] = min(g[i][j] , g[i][k] + g[k][j]);
                }
            }
        }
	}
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(g[i][j]>2 )
        return false;
    }
    
    return true;
}

