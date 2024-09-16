#include <stdio.h>

void failedSwap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}

void goodSwap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("%d, %d\n", *ptr1, *ptr2);
    failedSwap(ptr1, ptr2); // this is just same as call by value(=pointer)
    // params of failedSwap are just copied to a and b.
    printf("%d, %d\n\n", *ptr1, *ptr2);

    goodSwap(&ptr1, &ptr2);
    printf("%d, %d\n", *ptr1, *ptr2);


}


/*
 * 정리! 포인터는 왜 필요할까요?
 * A. 자료구조를 공부하다 보면 필요성을 알 수 있습니다.
 * 데이터를 효율적으로 저장하고 찾는데 포인터(주소)를 사용합니다.
 * 혹은,
 * 함수 내에서 함수 외부에 선언된 변수에 접근하는 방법을 제시해 줍니다.
 */