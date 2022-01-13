//code 1
bool solution(vector<int> arr) 
{
    int count = 0;
    int n=arr.size();
  
    // Store the index of the element
    // that needs to be removed
    int index = -1;
  
    // Traverse the range [1, N - 1]
    for (int i = 1; i < n; i++) {
  
        // If arr[i-1] is greater than
        // or equal to arr[i]
        if (arr[i - 1] >= arr[i]) {
  
            // Increment the count by 1
            count++;
  
            // Update index
            index = i;
        }
    }
  
    // If count is greater than one
    if (count > 1)
        return false;
  
    // If no element is removed
    if (count == 0)
        return true;
  
    // If only the last or the
    // first element is removed
    if (index == n - 1 || index == 1)
        return true;
  
    // If a[index] is removed
    if (arr[index - 1] < arr[index + 1])
        return true;
  
    // If a[index - 1] is removed
    if (index - 2 >= 0 && arr[index - 2] < arr[index])
        return true;
        
      // if there is no element to compare
      if(index < 0)
          return true;
  
    return false;
}

//code 2
bool solution(vector<int> sequence) 
{
    int prev = INT_MIN, preprev = INT_MIN;
    int count = 0;
    for (const auto& n : sequence) 
    {
        if (n <= prev) 
	{
            count++;
            if (n > preprev)
            prev = n;
        } 
	else 
	{
            preprev = prev;
            prev = n;
        }
    }

    return count <= 1;
}

