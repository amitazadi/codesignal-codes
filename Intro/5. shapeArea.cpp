// code 1
int solution(int n) 
{
    
    if(n==1)
    return 1;
    
    int ans=1;
    int index=4;
    
    for(int i=2;i<=n;i++)
    {
        ans+=index;
        index+=4;
    }    
    
    return ans;
}

// code 2
int solution(int n) {
    return 1 + 2 * n * (n-1);
}
