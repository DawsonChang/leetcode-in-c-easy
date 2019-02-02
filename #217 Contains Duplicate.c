bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize == 1)
        return false;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            int k = nums[i] ^ nums[j];
            if (k == 0) {
                return true;
            }
        }
    }
    return false;
}
