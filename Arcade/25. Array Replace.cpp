vector<int> solution(vector<int> arr, int elemToReplace, int substitutionElem) 
{
    replace(arr.begin(),arr.end(),elemToReplace,substitutionElem);
    
    return arr;
}