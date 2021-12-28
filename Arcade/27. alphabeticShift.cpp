// ans1
string solution(string s) 
{
    string ans="";
    
    for(auto i:s)
    {
        if(i=='z')
        ans+='a';
        else
        ans+=(++i);
    }
    
    return ans;
}

// optimisation for memory
string solution(string s) 
{    
    for(auto &i:s)
    {
        if(i=='z')
        i='a';
        else
        ++i;
    }
    
    return s;
}
