int solution(vector<int> arr, int k) 
{
    int ans=INT_MIN;
    int sum=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(i<k)
        {
            sum+=arr[i];
            ans=max(ans,sum);
        }
        else
        {
            sum-=arr[i-k];
            sum+=arr[i];
            ans=max(ans,sum);        
        }
    }
    
    return ans;
}
