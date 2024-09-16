#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.4;
    int *ptr1 = &a;
    double *ptr2 = &b;

    printf("%p %p\n", ptr1, ptr2);
    printf("%p %p\n", ptr1 + 1, ptr2 + 1); // int의 경우 주소가 4씩 증가, double의 경우 주소가 8씩 증가
    printf("%p %p\n", ptr1 + 2, ptr2 + 2);
    return 0;
}