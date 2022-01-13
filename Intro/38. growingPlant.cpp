// first code
int solution(int upSpeed, int downSpeed, int desiredHeight) 
{
    
    int ans=0;
    int sum=0;
    
    while(1)
    {
        sum+=upSpeed;
        ans++;
    
        if(sum>=desiredHeight)
        return ans;
        
        sum-=downSpeed;
    }
    
    return ans;
}

// second code
int solution(int upSpeed, int downSpeed, int desiredHeight) {

    if(upSpeed >= desiredHeight)
    return 1;

    if((desiredHeight-downSpeed) %(upSpeed-downSpeed))
    return (desiredHeight-downSpeed) /(upSpeed-downSpeed) +1;

    return (desiredHeight-downSpeed) /(upSpeed-downSpeed);
}
