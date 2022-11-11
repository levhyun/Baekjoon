//사칙연산
//url:https://www.acmicpc.net/problem/10869

#include <stdio.h>

int main(){
    int A,B;
    scanf("%d %d", &A, &B);
    printf("%d\n%d\n%d\n%d\n%d",A+B, A-B, A*B, A/B, A%B);
}