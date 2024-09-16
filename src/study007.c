// 포인터 배열

#include <stdio.h>

int main(void) {
    char * str[3] = {
        "Simple",
        "String",
        "Array"
    };

    for(int i=0;i<3;i++) {
        printf("%s\n", *(str+i));
    }

    return 0;
}