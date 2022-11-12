//카드 게임
//url:https://www.acmicpc.net/problem/5522

#include <stdio.h>

int main(){
    long long int sum=0, n;
    for(int i=0; i<5; i++){
        scanf("%lld", &n);
        sum+=n;
    }
    printf("%lld", sum);
}