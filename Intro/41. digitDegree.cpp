int solution(int n) 
{
    int ans=0;
    string temp=to_string(n);
    
    while(temp.length()>1)
    {
        
        int sum=0;
        
        for(int i=0;i<temp.length();i++)
        sum+=(temp[i]-'0');
        
        temp=to_string(sum);
        ans++;
    }    
    
    return ans;
}
