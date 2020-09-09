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
    while(1) {
        char ch;
        printNum(a, b, c);
        scanf(" %c", &ch);
        if (ch=='1') {
            rotateLeft(&a, &b, &c);
            continue;
        }
        else if(ch=='2') {
            rotateRight(&a, &b, &c);
            continue;
        }
        else if (ch=='3') break;
        else {
            printf("Error: Wrong input\n");
            break;
        }
    }
    return 0;
}
