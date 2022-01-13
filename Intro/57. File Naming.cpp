vector<string> solution(vector<string> names) {
    set<string>st;
    vector<string>ans;
    
    for(auto i:names)
    {
        string temp=i;
        int t=0;
        
        while(st.find(temp)!=st.end())
        temp=i+"("+to_string(++t)+")";
        
        st.insert(temp);
        ans.push_back(temp);   
    }
    
    return ans;
}