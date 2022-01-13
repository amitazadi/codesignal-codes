bool check(string s1,string s2)
{
    int cnt=0;
    
    for(int i=0;i<s1.length();i++)
    if(s1[i]!=s2[i])
    cnt++;
    
    return cnt==1;
}

bool checkstring(vector<string>s)
{
    bool flag;
    
    for(int i=0;i<s.size()-1;i++)
    if(!check(s[i],s[i+1]))
    return false;
    
    return true;
}

bool solution(vector<string> s) 
{
    sort(s.begin(),s.end());
    
    while(next_permutation(s.begin(),s.end()))
    if(checkstring(s))
    return true;

    return false;
}
