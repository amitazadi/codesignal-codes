bool solution(int n) 
{
    string s="";
    
    while(n!=0)
    {
        s+=char(n%10);
        n/=10;
    }
    
    int ans1=0,ans2=0;
    int l=0,h=s.length()-1;
    
    while(l<h)
    {
        ans1+=int(s[l++]);
        ans2+=int(s[h--]);
    }
    
    if(ans1==ans2)
    return true;
    
    return false;
}
