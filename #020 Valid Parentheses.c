bool isValid(char* s) {
    int len = strlen(s);
    char *buffer = malloc(sizeof(char*)*len);
    int i = 0;
    while(*s) {
        if(*s == '(' || *s == '[' || *s == '{') {
            buffer[i] = s[0];
            *s++;
            i++;
        }

        else if (*s == ')') {
            if (buffer[i-1] == '(') {
                buffer[i-1] = 0;
                *s++;
                i--;
            }
            else {
                free(buffer);
                return false;
            }

        }
        else if (*s == ']') {
            if (buffer[i-1] == '[') {
                buffer[i-1] = 0;
                *s++;
                i--;
            }
            else {
                free(buffer);
                return false;
            }
        }
        else if (*s == '}') {
            if (buffer[i-1] == '{') {
                buffer[i-1] = 0;
                *s++;
                i--;
            }
            else {
                free(buffer);
                return false;
            }
        }
        else {
            *s++;
        }

    }
    if(*buffer == NULL) {
        free(buffer);
        return true;
    }
    else {
        free(buffer);
        return false;
    }
    
}
