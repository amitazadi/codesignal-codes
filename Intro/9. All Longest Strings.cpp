vector<string> solution(vector<string> arr) 
{
    vector<string>res;
    int temp=0;
    
    for(auto s:arr)
    if(s.length()>temp)
    temp=s.length();
    
    for(auto s:arr)
    if(s.length()==temp)
    res.push_back(s);
    
    return res;
}
