int solution(int n, int firstNumber) 
{
    int size=n/2;
    
    if(firstNumber==size)
    return 0;
    else if(firstNumber<size)
    return firstNumber+size;
    else
    return firstNumber-size;   

}


//2nd code
int solution(int n, int firstNumber) 
{
    return (firstNumber+n/2)%n;
}