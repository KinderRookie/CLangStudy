#include <stdio.h>

int main(void) {
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr); // dptr은 ptr의 주소를 참고 하고 있음. *dptr은 dptr의 내용을 반환. 따라서 같은 결과
    printf("%9g %9g \n", num, **dptr); // **dptr = *(*dptr) = *ptr = num
    ptr2 = *dptr; // ptr2 = ptr
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);

    return 0;

}