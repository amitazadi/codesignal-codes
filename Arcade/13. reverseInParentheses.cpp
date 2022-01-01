string solution(string s) 
{
    stack<int>st;
    string res="";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        st.push(i);
        
        else if(s[i]==')')
        {
            reverse(s.begin()+st.top()+1,s.begin()+i);
            st.pop();
        }      
    }
    
    for(int i=0;i<s.length();i++)
    if(s[i]!='(' && s[i]!=')')
    res+=s[i];
        
    return res;
}
