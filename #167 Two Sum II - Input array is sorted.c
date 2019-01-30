/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* result = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
    int bre = 0;
    for (int i = 0; i < numbersSize; i++) {
        for (int j = i + 1;j < numbersSize; j++) {
            if (numbers[i] + numbers[j] == target) {
                result[0] = i+1;
                result[1] = j+1;
                bre = 1;
                break;
            }
            if (bre == 1)
                break;
        }
    }
    return result;
    
}
