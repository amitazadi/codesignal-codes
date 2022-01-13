bool solution(vector<int> a, vector<int> b) 
{
    set<int>xx;
    set<int>yy;
    int cnt=0;
    
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            xx.insert(a[i]);
            yy.insert(b[i]);
            cnt++;
        }       
    }
    
    if((cnt==2 && xx==yy) || cnt==0)
    return true;
    
    return false;  
}
