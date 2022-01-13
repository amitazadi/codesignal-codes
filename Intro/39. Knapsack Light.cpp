int solution(int value1, int weight1, int value2, int weight2, int maxW) {
    
    if(maxW<weight1 && maxW<weight2)
    return 0;
   
    else if(weight2+weight1<=maxW)
    return value1+value2;
    
    else if((value1/weight1)>(value2/weight2) && weight1<=maxW)
    return value1;
    
    else
    return value2;   

}
