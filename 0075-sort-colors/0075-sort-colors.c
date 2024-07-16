void heapify(int arr[], int n, int i) 
{ 
    int temp, maximum, left_index, right_index; 
  
    // currently assuming i postion to 
    // be holding the largest value 
    maximum = i; 
  
    // right child index 
    right_index = 2 * i + 2; 
  
    // left child index 
    left_index = 2 * i + 1; 
  
    // if left index value is grater than the current index 
    // value 
    if (left_index < n && arr[left_index] > arr[maximum]) 
        maximum = left_index; 
  
    // if right index value is grater than the current index 
    // value 
    if (right_index < n && arr[right_index] > arr[maximum]) 
        maximum = right_index; 
  
    // checking if we needed swaping the elements or not 
    if (maximum != i) { 
        temp = arr[i]; 
        arr[i] = arr[maximum]; 
        arr[maximum] = temp; 
        heapify(arr, n, maximum); 
    } 
} 
  
// HeapSorting function 
void heapsort(int arr[], int n) 
{ 
    int i, temp; 
  
    // performing heapify on the non leaf nodes so n/2 - 1 
    // to 0 are the non leaf nodes 
    for (i = n / 2 - 1; i >= 0; i--) { 
        heapify(arr, n, i); 
    } 
    // the current array is changed to max heap 
  
    for (i = n - 1; i > 0; i--) { 
        temp = arr[0]; 
        arr[0] = arr[i]; 
        arr[i] = temp; 
        heapify(arr, i, 0); 
    } 
}
void sortColors(int* nums, int numsSize) {
    heapsort(nums,numsSize);
}