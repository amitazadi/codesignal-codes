bool isCheck(int x,int y)
{
    if(x>=0 && x<8 && y>=0 && y<8)
    return true;
    
    return false;
}


int solution(string cell)
{
    int x=cell[0]-'a';
    int y=(cell[1]-'0')-1;
    
    int ans=0;
    
    if(isCheck(x-2,y+1))
    ans++;
    
    if(isCheck(x-2,y-1))
    ans++;
    
    if(isCheck(x-1,y+2))
    ans++;
    
    if(isCheck(x-1,y-2))
    ans++;
    
    if(isCheck(x+2,y+1))
    ans++;
    
    if(isCheck(x+2,y-1))
    ans++;
    
    if(isCheck(x+1,y+2))
    ans++;
    
    if(isCheck(x+1,y-2))
    ans++;
       
    return ans;    
}
