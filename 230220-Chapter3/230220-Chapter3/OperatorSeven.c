//
//  OperatorSeven.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

int main(void) {
    /** 논리 연산자 */
    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3;

    result1 = (num1 == 10 && num2 == 12);
    result2 = (num1 <= 10 || num2 > 12);
    result3 = (!num1); // C언어는 0이 아닌 모든 값을 true로 인식함. => false로 전환시킴

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
}
