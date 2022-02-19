// Once upon a time, in a kingdom far, far away, there lived a King Byteasar I. As a kind and wise 
// ruler, he did everything in his (unlimited) power to make life for his subjects comfortable and 
// pleasant. One cold evening a messenger arrived at the king's castle with the latest news: all kings 
// in the Kingdoms Union had started enforcing traffic laws! In order to not lose his membership in the 
// Union, King Byteasar decided he must do the same within his kingdom. But what would the citizens think 
// of it?

// The king decided to start introducing the changes with something more or less simple: change all the 
// roads in the kingdom from two-directional to one-directional (one-way). He personally prepared the 
// roadRegister of the new roads, and now he needs to make sure that the road system is convenient and there 
// will be no traffic jams, i.e. each city has the same number of incoming and outgoing roads. As the Hand 
// of the King, you're the one who he has decreed must check his calculations.



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
