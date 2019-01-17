/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex+1;
    int *result = (int*)malloc((rowIndex+1) * sizeof(int));
    int **pascal = (int**)malloc((rowIndex+1) * sizeof(int*));
    
    for(int i = 0; i <= rowIndex; i++) {
        pascal[i] = (int *)malloc((i+1) * sizeof(int));
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++)
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
    }
    
    result = *(pascal + rowIndex);
    return result;
}




