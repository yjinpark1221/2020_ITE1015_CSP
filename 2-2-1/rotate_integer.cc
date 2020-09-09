#include <stdio.h>
void rotateLeft(int* pa, int* pb, int* pc) {
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}
void rotateRight(int* pa, int* pb, int* pc) {
    int temp = *pa;
    *pa = *pc;
    *pc = *pb;
    *pb = temp;
}
void printNum(int a, int b, int c) {
    printf("%d:%d:%d\n", a, b, c);
}
int main(void) {
    int a = 10, b = 20, c = 30;
    printNum(a, b, c);
    while(1) {
        int command;
        scanf("%d", &command);
        if (command==1) {
            rotateLeft(&a, &b, &c);
            printNum(a, b, c);
        }
        else if(command==2) {
            rotateRight(&a, &b, &c);
            printNum(a, b, c);
        }
        else if (command==3) break;
        else {
            printf("Error: Wrong input\n");
            break;
        }
    }
    return 0;
}
