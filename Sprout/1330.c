//두 수 비교하기
//url:https://www.acmicpc.net/problem/1330

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf(">");
    }else if(a<b){
        printf("<");
    }else if(a==b){
        printf("==");
    }
    return 0;
}