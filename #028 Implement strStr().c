int strStr(char* haystack, char* needle) {
    
    int len_needle = strlen(needle);
    int index;
    int count_Haystack = 1;
    int output = 0;
    if(len_needle == 0)
        return 0;

    while (*haystack) {
        index = 0;
        while (index < len_needle) {

            if (needle[index] == haystack[index]) {
                index++; 
            }
            else {
                output = count_Haystack;
                break;
            }

        }
        if (output != count_Haystack)
            return output;
        
        *haystack++;
        count_Haystack++;
    }
    return -1;
}
