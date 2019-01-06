#include<stdio.h>

typedef struct {
    int num;
} OBJ_TYPE;

void receiveByValue(int v) { // this will make a copy, it will create a copy in another memory address
    v += 5;
}

void receiveByReference(int *r) { //this not copy, it will point to original memory address
    *r += 5;
}

void receiveStructByValue(OBJ_TYPE obj) {
    obj.num = 5;
}

int main() {
    int v = 0;
    receiveByValue(v);
    printf("It will print 'zero': %i \n", v);

    int r = 0;
    receiveByReference(&r);
    printf("It will print 'five': %i \n", r);

    OBJ_TYPE obj;
    obj.num = 0;

    receiveStructByValue(obj);
    printf("It will print 'zero': %i \n", obj.num);

    return 0;
}