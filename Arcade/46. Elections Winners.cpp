int solution(vector<int> votes, int k) 
{
    int mx=*max_element(votes.begin(),votes.end());
    
    if(k==0)
    {
        int cnt=count(votes.begin(),votes.end(),mx);
        if(cnt==1)
        return 1;
        
        return 0;
    }
    
    int ans=0;
    for(auto i:votes)
    if(i+k>mx)
    ans++;
    
    return ans;
}
