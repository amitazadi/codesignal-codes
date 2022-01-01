bool solution(string s) {
    
    int low=0,high=s.length()-1;
    
    while(low<=high)
    {
        if(s[low]!=s[high])
        return false;
        
        low++;
        high--;
    }
    
    return true;
}
