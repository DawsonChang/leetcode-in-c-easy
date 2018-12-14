char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    char *temp;
    if (lenB > lenA)
    {
        temp = a;
        a = b;
        b = temp;
    }

    lenA = strlen(a);
    lenB = strlen(b);
    int* buffer = malloc(sizeof(int*) * (lenA+1));
    int carry = 0;
    int j = 0;
    char* result = malloc(sizeof(char*) * (lenA+1));
    
    for (int i = lenB-1; i >= 0; i--)
    {
        if (((a[i+lenA-lenB]-'0') + (b[i]-'0') + carry) == 2)
        {
            buffer[j] = 0;
            carry = 1;
        }
        else if (((a[i+lenA-lenB]-'0') + (b[i]-'0') + carry) == 3)
        {
            buffer[j] = 1;
            carry = 1;
        }
        else
        {
            buffer[j] = (a[i+lenA-lenB]-'0') + (b[i]-'0') + carry;
            carry = 0;
        }
        j++;
    }
    int k;

    k = lenA - lenB - 1;
    while(k >= 0)
    {
        if ((a[k]-'0') + carry == 2)
        {
            buffer[j] = 0;
            carry = 1;
        }
        else
        {
            buffer[j] = (a[k]-'0') + carry;
            carry = 0;
        }

        j++;
        k--;
    }
    k = 0;

    if (carry == 1)
    {
        result[0] = carry+'0';
        k++;
        while (k <= lenA)
        {
            result[k] = buffer[lenA-k] + '0';
            k++;
        }
    }
    else
    {
        while (k < lenA)
        {
            result[k] = buffer[lenA-1-k] + '0';
            k++;
        }
    }
    
    printf("%d", buffer[0]);
    printf("%d", buffer[1]);
    //printf("%d", buffer[0]);
    
    return result;
    
}
