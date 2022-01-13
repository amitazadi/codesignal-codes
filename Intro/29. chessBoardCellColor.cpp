 bool solution(string c1, string c2) 
{
    int a=c1[0]-'A';
    int b=int(c1[1]);
    
    int c=c2[0]-'A';
    int d=int(c2[1]);
 
    int ans=a+b;
    int ans1=c+d;
    
    if((ans%2==0 && ans1%2==0 ) || (ans%2!=0 && ans1%2!=0))
    return true;
    else
    return false;
}
