vector<int> solution(vector<int> arr, int k) 
{
    vector<int>ans;
    
    for(int i=0;i<arr.size();i++)
    if((i+1)%k!=0)
    ans.push_back(arr[i]);
    
    return ans;
}
