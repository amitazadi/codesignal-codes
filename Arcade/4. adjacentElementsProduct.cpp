int solution(vector<int> a) 
{
    int ans=INT_MIN;
    
    for(int i=0;i<a.size()-1;i++)
    {
        int temp=a[i]*a[i+1];
        ans=max(ans,temp);
    }
    
    return ans;    
}
