char* countAndSay(int n) {
    char pre_result[4500] = {0};
    char* result = (char*)malloc(4500);
    
    pre_result[0] = '1';
    result[0] = '1';
    for (int i = 1; i < n; i++) {
        int index = 0;
        char current = pre_result[0];
        char count = '1';

        for (int j = 1; j < strlen(pre_result); j++) {
            if (current == pre_result[j]) {
                count++;
            }
            else {
                result[index] = count;
                index++;
                result[index] = current;
                index++;
                current = pre_result[j];
                count = '1';
            }
        }
        result[index] = count;
        index++;
        result[index] = current;
        

        for (int k = 0; k < strlen(result); k++)
            pre_result[k] = result[k];
    }

    return result;
}
