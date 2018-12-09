int romanToInt(char* s) {
    
    char prev = '0';
    int *temp;
    int result = 0;
    while(*s) {
        
        if (*s == 'I') {
            result += 1;
        }
        else if (*s == 'V') {
            if (prev == 'I') {
                result += 3;
            }
            else {
                result += 5;
            }
        }
        else if (*s == 'X') {
            if (prev == 'I') {
                result += 8;
            }
            else {
                result += 10;
            }
            
        }
        else if (*s == 'L') {
            if (prev == 'X') {
                result += 30;
            }
            else {
                result += 50;
            }
        }
        else if (*s == 'C') {
            if (prev == 'X') {
                result += 80;
            }
            else {
                result += 100;
            }
        }
         else if (*s == 'D') {
            if (prev == 'C') {
                result += 300;
            }
            else {
                result += 500;
            }
        }
        else if (*s == 'M') {
            if (prev == 'C') {
                result += 800;
            }
            else {
                result += 1000;
            }
        }
        *s++;
        prev = *(s-1);
        
    }
    
    return result;
}
