int solution(vector<int> arr) 
{
    // sort(arr.begin(),arr.end());
    int temp=INT_MIN;
    int ans=0;
    
    for(auto i:arr)
    {
        temp=max(temp+1,i);
        ans+=temp-i;   
    }
    
    return ans;       
}
