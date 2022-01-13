// first code
bool solution(vector<vector<bool>> g) 
{
    vector<int>incoming(g.size(),0);    
    vector<int>outgoing(g.size(),0);
    
    for(int i=0;i<g.size();i++)
    for(int j=0;j<g[0].size();j++)
    if(g[i][j])    
    outgoing[i]++;
    
    for(int i=0;i<g.size();i++)
    for(int j=0;j<g[0].size();j++)
    if(g[i][j])    
    incoming[j]++;
    
    for(int i=0;i<incoming.size();i++)
    if(incoming[i]!=outgoing[i])
    return false;    
    
    return true;
}

// second code
bool solution(vector<vector<bool>> g) 
{
    vector<int>hash(g.size(),0);    
    
    for(int i=0;i<g.size();i++)
    for(int j=0;j<g[0].size();j++)
    if(g[i][j])    
    hash[i]++,hash[j]--;
    
    for(int i=0;i<hash.size();i++)
    if(hash[i]!=0)
    return false;    
    
    return true;
}
