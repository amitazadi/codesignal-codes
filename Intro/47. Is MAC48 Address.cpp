bool solution(string s) 
{
    int hyphen=0;
    
    for(auto i:s)
    if(i=='-')
    hyphen++;
    
    if(hyphen!=5)
    return false;
    
    string temp="";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-')
        {
            if(temp.length()!=2)    return false;
            temp="";
        }
        else
        {
            if(s[i]>='A' && s[i]<='F')  temp+=s[i];
            else if(s[i]>='0' && s[i]<='9') temp+=s[i];
            else return false;
        }
    }
    
    if(temp.length()!=2)    return false;
    
    return true;
}
