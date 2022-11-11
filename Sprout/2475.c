//검증수
//url:https://www.acmicpc.net/problem/2475

#include <stdio.h>

int f(int n){
    return n*n;
}

int main(){
    int num[5], sum=0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        sum+=f(num[i]);
    }
    printf("%d", sum%10);
}