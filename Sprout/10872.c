//팩토리얼
//url:https://www.acmicpc.net/problem/10872

#include <stdio.h>

int main(){
    int n, sum=1;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        sum*=i;
    }
    printf("%d", sum);
}