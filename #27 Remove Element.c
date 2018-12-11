void swap(int *nums, int j, int swap_index) {
    int temp = nums[j];
    nums[j] = nums[swap_index];
    nums[swap_index] = temp;
}

int removeElement(int* nums, int numsSize, int val) {
    int swap_index = 0;
    int i = 0;
    int count = 0;
    while (i < numsSize) {
        if(nums[i] == val) {
            swap_index = i;
            for(int j = i; j < numsSize; j++ ) {
                if (nums[j] != val) {
                    swap(nums, j, swap_index);
                    count++;
                    break;
                }
            }
        }
        else {
            count++;
        }
        i++;
    }
    return count;
}
