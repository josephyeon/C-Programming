//
//  CommaOperator.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

/**
 - note: 콤마 연산자 - "구분"
 - 둘 이상의 변수 동시 선언
 - 둘 이상의 문장을 한 행에 삽입
 - 또한, 둘 이상의 인자를 함수로 전달할 때도 인자를 구분하도록 사용
 */
int main(void) {

    int num1 = 1, num2 = 2;
    printf("Hello"), printf(" World!\n");

    num1++, num2++;
    printf("num1: %d\n", num1), printf("num2: %d\n", num2), printf("\n");

    return 0;
}
