//별 찍기 - 1
//url:https://www.acmicpc.net/problem/2438

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}