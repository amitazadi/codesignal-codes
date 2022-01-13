// first code
string solution(string s) 
{
    int index=0;
    
    for(int i=0;i<s.length();i++)
    if(s[i]=='@')
    index=i;
    
    return s.substr(index+1);     
}

// second code
string solution(string s) 
{    
    return s.substr(s.rfind('@')+1);     
}