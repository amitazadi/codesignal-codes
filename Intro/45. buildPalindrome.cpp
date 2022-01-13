bool checkpallindrome(string s)
{
    int low=0,high=s.length()-1;
    
    while(low<=high)
    {
        if(s[low]!=s[high])
        return false;
        
        low++;
        high--;
    }
    
    return true;
}


string solution(string st) 
{
    if(checkpallindrome(st))
    return st;
    
    for(int i=0;i<st.length();i++)
    {
        string temp=st.substr(0,i+1);
        reverse(temp.begin(),temp.end());
        temp=st+temp;
        
        if(checkpallindrome(temp))
        return temp;
    }
}
