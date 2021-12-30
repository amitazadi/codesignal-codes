string solution(string s) 
{
    string ans="";
    int cnt=1;
    
    for(int i=1;i<=s.length();i++)
    {
        if(s[i-1]==s[i])
        cnt++;
        
        else
        {
            if(cnt>1)
            ans+=to_string(cnt)+s[i-1];
            else 
            ans+=s[i-1];
            cnt=1;
        }
    } 
    
    return ans;
}
