bool solution(string s) {
    
    int dot=0,n=s.length();
            
    for(int i=0;i<n;i++)
    if(s[i]=='.')
    dot++;
    
    if(dot!=3)
    return 0;
    
    unordered_set<string>st;
    
    for(int i=0;i<256;i++)
    st.insert(to_string(i));
    
    string temp="";
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            if(st.find(temp)==st.end())
            return 0;
            temp="";
        }
        else
        temp+=s[i];
    }
    
    if(st.find(temp)==st.end())
    return 0;
            
    return 1;

}
