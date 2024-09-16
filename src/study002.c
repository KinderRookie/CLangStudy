// scanf 를 이용한 문자열 입력

#include <stdio.h>

int main(void) {
    char str[50];
    int idx = 0;

    printf("문자열 입력: ");
    scanf("%s", str); // scanf("%d", &num); 와 다름에 주의
    printf("문자열 출력: %s\n", str);

    printf("문자 단위 출력: ");
    while (str[idx] != '\0') {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");

    return 0;
}

// 공백을 기준으로 데이터가 구분되기 때문에 공백을 포함한 문자열을 입력받을 수 없다.