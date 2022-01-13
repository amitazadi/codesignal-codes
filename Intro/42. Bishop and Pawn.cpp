#include <bits/pthreadtypes-arch.h>
bool solution(string bishop, string pawn) 
{
    int a=abs((bishop[0]-'a')-(pawn[0]-'a'));
    int b=abs((bishop[1]-'0')-(pawn[1]-'0'));
    
    return a==b;
}