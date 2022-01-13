int solution(string s) {
    
    int sum=0;
    string temp="";
    
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        temp+=s[i];
        
        else
        {
            if(temp.length()>0)
            sum+=stoi(temp);
            temp="";
        }
    }

    return sum;
}
