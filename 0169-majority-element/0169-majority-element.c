int majorityElement(int* nums, int numsSize) {
    
    //iniciate variables
    int count = 0;
    int candidate = 0;

    //let's chcek every position
    for(int i = 0; i < numsSize; i++){
        if(count == 0){
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }
    return candidate;
}