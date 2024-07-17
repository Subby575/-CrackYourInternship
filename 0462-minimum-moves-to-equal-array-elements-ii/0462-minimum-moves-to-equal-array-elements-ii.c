int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int minMoves2(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int diff, med, move = 0;
    if (numsSize % 2 == 0) {
        med = (((numsSize / 2) + 1) + (numsSize / 2)) / 2;
    } else {
        med = (numsSize + 1) / 2;
    }
    for (int i = 0; i < numsSize; i++) {
        diff = nums[med - 1] - nums[i];
        if (diff < 0) {
            move -= diff;
        } else {
            move += diff;
        }
    }
    return move;
}