#include <stdio.h>

int main(void) {
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr = arr;

    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    printf("%d %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
    printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
    return 0;
}

// arr[i] == *(arr + i)
