#include <stdio.h>

int main(void)
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    if(num<0)
    printf("입력 값이 0보다 작습니다\n ");

    if(num==0)
    printf("입력 값이 0입니다\n ");

    if(num>0)
    printf("입력 값이 0보다 큽니다\n ");

    return 0;
}