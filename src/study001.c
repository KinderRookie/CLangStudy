// 전역변수와 지역변수, 지역 변수 + static keyword

#include <stdio.h>

void simple_func(void) {
    static int a = 0;
    int b = 0;

    a++;b++;
    printf("static_local: %d, local: %d\n", a, b);
}

int main(void) {

    for (int i = 0; i < 3; i++) {
        simple_func();
    }
    return 0;
}