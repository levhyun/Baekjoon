//A+B - 5
//url:https://www.acmicpc.net/problem/10952

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=9; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
}