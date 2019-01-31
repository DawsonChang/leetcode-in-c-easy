void rotate(int* nums, int numsSize, int k) {
    int temp;
    int count = 0;
    while (count < k) {
        temp = nums[numsSize-1];
        for (int i = numsSize-2; i >= 0; i--) {
            nums[i+1] = nums[i];
        }
        nums[0] = temp;
        count++;
    }
    
}
