vector<int> solution(vector<int> a) 
{
    int ans=0,ans1=0;
    
    for(int i=0;i<a.size();i++)
    {
        if(i%2==0)
        ans+=a[i];
        else 
        ans1+=a[i];
    }
    
    return {ans,ans1};
    
}
