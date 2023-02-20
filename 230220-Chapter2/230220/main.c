//
//  main.c
//  230220
//
//  Created by 정현준 on 2023/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // p039 - 개행 (이스케이프 시퀀스 \n)
    printf("홍길동\n홍 길 동\n홍  길  동\n");
    printf("홍길동\n서울특별시 동작구\n010-1234-5678\n");

    // p041 - 주석
    /*

     블록 단위 주석
     // 단일 행 단위 주석처리

     */

    printf("\n");

    // p043 - 서식문자
    printf("Hello Everybody!\n");
    printf("%d\n", 10);
    printf("%d, %d\n", 10, 50);

    printf("\n");

    // p045 - 서식문자
    printf("My Age - %d.\n", 29);
    printf("%d is my point.\n", 7500);
    printf("Good \nmorning \neverybody!\n");

    printf("\n");

    // p046 - 문제 02-2
    printf("제 이름은 홍길동입니다\n");
    printf("제 나이는 %d살이고요.\n제가 사는 곳의 번지수는 %d-%d입니다.\n", 20, 123, 456);
    printf("%d X %d = %d\n", 4, 5, 20);
    printf("%d X %d = %d\n", 7, 9, 63);

    return 0;
}
