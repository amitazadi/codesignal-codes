// code 1
int solution(vector<int> st) 
{
    sort(st.begin(),st.end());
    
    int ans=0;
    
    for(int i=0;i<st.size()-1;i++)
    if(st[i+1]-st[i]!=1)
    ans+=st[i+1]-st[i]-1;
    
    return ans;
}

// code 2
