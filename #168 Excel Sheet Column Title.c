char* convertToTitle(int n) {
    char* temp = malloc(sizeof(char)*100);
    char* result = malloc(sizeof(char)*100);
    int a = n;
    int carry = 0;
    char tail;
    int index = 0;
    
    while(a > 26) {
        if (a % 26 != 0) {
            tail = (a % 26) - 1 + 'A';
            carry = 0;
        }
        else {
            tail = 'Z';
            carry = 1;
        }
        temp[index] = tail;
        index++;
        a = a / 26;
        a = a - carry;
    }

    if (a % 26 != 0) {
        tail = (a % 26) - 1 + 'A';
    }
    else {
        tail = 'Z';
    }
    temp[index] = tail;
    int count = 0;
    for (int i = index; i >= 0; i--) {
        result[count] = temp[i];
        count++;
    }
    return result;
}
