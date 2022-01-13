vector<int> solution(vector<int> a) 
{
    vector<int>arr;
    arr=a;
    
    sort(arr.begin(),arr.end());
    int index=0;
    
    while(arr[index]==-1)
    index++;
    
    for(int i=0;i<a.size();i++)
    if(a[i]!=-1)
    a[i]=arr[index++];
    
    return a;    
}
