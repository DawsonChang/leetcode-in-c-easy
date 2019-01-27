typedef struct {
    int *p;
    int top;
    int minNum;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack* S = (MinStack*)malloc(sizeof(MinStack));
    S -> p = (int*)malloc(sizeof(int)*maxSize);
    S -> top = -1;
    S -> minNum = INT_MAX;
    return S;
}

void minStackPush(MinStack* obj, int x) {
    ++(obj -> top);
    obj -> p[obj -> top] = x;
    if (x < obj -> minNum)
        obj -> minNum = x;
}

void minStackPop(MinStack* obj) {
    obj -> p[obj -> top] = INT_MAX;
    --(obj -> top);
    int tempMin = INT_MAX;
    for (int i = 0; i <= obj -> top; i++) {
        if (obj -> p[i] < tempMin)
            tempMin = obj -> p[i];
    }
    obj -> minNum = tempMin;
}

int minStackTop(MinStack* obj) {
    return obj -> p[obj -> top];
}

int minStackGetMin(MinStack* obj) {
    return obj -> minNum;
}

void minStackFree(MinStack* obj) {
    free(obj -> p);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */
