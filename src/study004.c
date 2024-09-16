#include <stdio.h>

int main(void) {
    int arr1[3] = {1, 2, 3};
    double arr2[3] = {1.1, 2.2, 3.3};

    printf("%d, %g\n", *arr1, *arr2);

    *arr1 += 100;
    *arr2 += 120.5;

    printf("%d, %g\n", *arr1, *arr2);
    return 0;

    // 배열의 이름은 포인터 역할을 한다. arr1은 arr1[0]의 주소(즉, 시작 주소)를 가리킨다.
}