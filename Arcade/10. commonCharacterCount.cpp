int solution(string s1, string s2) 
{
    int ans=0;
    vector<int>hash1(26,0);
    vector<int>hash2(26,0);
    
    for(auto i:s1)
    hash1[i-'a']++;
    
    for(auto i:s2)
    hash2[i-'a']++;
    
    for(int i=0;i<26;i++)
    if(hash1[i]>0 && hash2[i]>0 )
    ans+=min(hash1[i],hash2[i]);
    
    return ans;
}
