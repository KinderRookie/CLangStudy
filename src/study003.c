#include <stdio.h>

int main(void) {

    int num = 10;


    // int *ptr1 = 0;
    // int *ptr1 = NULL; // NULL은 0을 의미한다.

    int *ptr1 = &num;
    int *ptr2 = ptr1; // 주소가 같으닌까 같은 변수를 가리키게 된다.

    (*ptr1)++;
    (*ptr2)++;

    printf("%d \n", num);
    return 0;

  }