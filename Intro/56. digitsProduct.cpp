int solution(int product) {
    
    for(int i=1;i<=4000;i++)
    {
        string temp=to_string(i);
        int num=1;
        for(int j=0;j<temp.length();j++)
        num*=temp[j]-'0';
        
        if(num==product)
        return i;
    }
     
    return -1;    
}
