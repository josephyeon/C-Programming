//
//  OperatorSix.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

int main(void) {

    /** 관계 연산자 - 참: 1, 거짓: 0 */

    int num1 = 10, num2 = 11;
    int result1, result2, result3, result4;

    result1 = (num1 == num2);
    result2 = (num1 <= num2);
    result3 = (num1 > num2);
    result4 = (++num1 == num2); // 전위 증가 활용

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);

    return 0;
}
