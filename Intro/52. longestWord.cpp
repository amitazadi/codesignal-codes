string solution(string text) {
    string ans="";
    string temp="";
    
    for(int i=0;i<=text.length();i++)
    {      
        if(isalpha(text[i]))
        temp+=text[i];
          
        else 
        {
            if(temp.length()>ans.length())
            ans=temp;
            temp="";
        }
    }
    
    return ans;
}
