int majorityElement(int* nums, int numsSize) {
    int majoritySize = numsSize / 2 + 1;
    int majority;
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        majority = nums[i];
        for (int j = i; j < numsSize; j++) {
            if (nums[j] == majority) {
                count++;
            }
            if (count >= majoritySize) {
                return majority;
            }
        }
        count = 0; 
    }
    return majority;
}
