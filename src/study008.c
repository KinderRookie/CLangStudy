// const 키워드의 사용

#include <stdio.h>

void func1(void) {
    int num = 10;
    const int *ptr = &num;

    num++;
    *ptr = 20; // error: assignment of read-only location '*ptr'
    // ptr로 직접 값을 변경하는 것은 제한되나, 참조하고 있는 num은 const가 아니기 때문에
    // num의 값은 변경이 가능하다.

}

void func2(void) {
    int num1 = 10;
    int num2 = 20;
    int *const ptr = &num1;

    ptr = &num2; // error: assignment of read-only variable 'ptr'
    *ptr = 20;

    // ptr은 상수이기 때문에 ptr이 가리키는 변수를 변경할 수 없다.
    // 하지만 ptr이 가리키는 변수의 값을 변경하는 것은 가능하다.

}

int main(void) {

    func1();
    func2();

    return 0;
}