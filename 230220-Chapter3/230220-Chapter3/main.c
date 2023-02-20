//
//  main.c
//  230220-Chapter3
//
//  Created by 정현준 on 2023/02/20.
//  Chapter 3 - 변수와 연산자

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /* 변수의 선언 및 초기화 */
    // 바디 앞부분에 변수 선언문이 오도록 작성
    int num1, num2; // 변수 num1, num2 선언
    int num3 = 30, num4 = 40; // 변수 num3, num4 초기화

    printf("num1: %d, num2: %d\n", num1, num2); // 변수를 선언만 하고 초기화하지 않으면 아무 값이나 저장됨 (쓰레기 값)
    printf("num3: %d, num4: %d\n", num3, num4);

    printf("\n");

    num1 = 3, num2 = 4;
    printf("덧셈 결과: %d\n", num1+num2);
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d과 %d의 합은 %d입니다.\n", num1, num2, num1+num2);

    printf("\n");

    /* 증가, 감소 연산자
     num++/-- : 선 연산 후 증가/감소
     ++/--num : 선 증가/감소 후 연산
    */
    printf("num1: %d\n", num1);
    printf("num1++: %d\n", num1++);
    printf("num1: %d\n", num1);

    printf("\n");

    printf("num2: %d\n", num2);
    printf("++num2: %d\n", ++num2);
    printf("num2: %d\n", num2);

    /** 증가/감소 연산자 활용 */
    printf("\n");
    

    return 0;
}
