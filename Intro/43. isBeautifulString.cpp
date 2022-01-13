bool solution(string s) 
{
    vector<int>hash(26,0);
    
    for(auto i:s)
    hash[i-'a']++;

    for(int i=0;i<25;i++)
    if(hash[i+1]>hash[i])
    return false;
    
    return true;    
}
