//
//  SimpleAddFour.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

/** scanf - 입력 함수
 - `scanf("A", &B)`: 키보드로 입력된 A타입의 값을 변수 B에 저장
 */
int main(void) {

    int result;
    int num1, num2, num3;

    printf("세 개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 + num2 + num3;
    printf("%d + %d + %d = %d\n", num1, num2, num3, result);

    return 0;
}
