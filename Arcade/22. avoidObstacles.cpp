int solution(vector<int> arr) {

    bool flag=false;
    
    for(int i=2;;i++)
    {
        flag=false;
        
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]%i==0)
            {
                flag=true;
                break;
            }
        }
        
        if(!flag)
        return i;
    }
}