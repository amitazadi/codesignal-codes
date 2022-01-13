int solution(int deposit, int rate, int threshold) 
{
    int ans=0;
    double temp=deposit;
    
    while(temp<threshold)
    {
        temp+=(temp*rate)/100.0;
        ans++;
    }
    
    return ans;
}
