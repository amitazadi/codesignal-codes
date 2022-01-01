bool solution(string s) 
{
    map<char,int>mp;
    
    for(auto i:s)
    mp[i]++;
    
    int odd=0;
    for(auto i:mp)
    if(i.second%2!=0)
    odd++;
    
    if(odd>1)
    return false;
    
    return true;       
}
