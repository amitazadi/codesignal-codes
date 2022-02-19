// Once upon a time, in a kingdom far, far away, there lived a King Byteasar I. As a kind and wise ruler, 
// he did everything in his (unlimited) power to make life for his subjects comfortable and pleasant. One cold 
// evening a messenger arrived at the king's castle with the latest news: all kings in the Kingdoms Union had started 
// enforcing traffic laws! In order to not lose his membership in the Union, King Byteasar decided he must do the same 
// within his kingdom. But what would the citizens think of it?

// The king decided to start introducing the changes with something more or less simple: change all the roads in the 
// kingdom from two-directional to one-directional (one-way). He personally prepared the roadRegister of the new roads, 
// and now he needs to make sure that the road system is convenient and there will be no traffic jams, i.e. each city has 
// the same number of incoming and outgoing roads. As the Hand of the King, you're the one who he has decreed must check his 
// calculations.



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


