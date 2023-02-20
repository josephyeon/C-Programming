//
//  ScanfExercise.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

/** scanf함수 활용*/
int main(void) {

    int a, b, num1, num2, num3, x, p, q;

    printf("문제1\n");
    printf("정수 두 개를 입력: ");
    scanf("%d %d", &a, &b);
    printf("덧샘: %d + %d = %d\n", a, b, a+b);
    printf("뺄샘: %d + %d = %d\n", a, b, a-b);

    printf("\n문제2\n");
    printf("정수 세 개를 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%dx%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);

    printf("\n문제3\n");
    printf("정수 하나 입력: ");
    scanf("%d", &x);
    printf("%d의 제곱: %d\n", x, x*x);

    printf("\n문제4\n");
    printf("정수 두 개를 입력: ");
    scanf("%d %d", &p, &q);
    printf("%d을 %d로 나눴을 때 - 몫: %d, 나머지: %d\n", p, q, p/q, p%q);

    printf("\n문제5\n");
    printf("앞에서 입력한 num1, num2, num3: %d, %d, %d\n", num1, num2, num3);
    printf("(num1 - num2) x (num2 +. num3) x (num3 % num1) = %d\n", (num1-num2)*(num2+num3)*(num3%num1));
}
