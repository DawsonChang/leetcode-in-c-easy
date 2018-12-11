int removeDuplicates(int* nums, int numsSize) {
    int i = 1;
    int swap_index = 1;
    if (numsSize == 0)
        return 0;
    int count = 1;
    while (i < numsSize) {
        if (nums[i-1] != nums[i]) {
            nums[swap_index] = nums[i];
            count++;
            swap_index++;
        }
        i++;
    }
    return count;
}
