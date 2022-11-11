//이상한 기호
//url:https://www.acmicpc.net/problem/15964

#include <stdio.h>

long long  minus(long long  a, long long  b){
    return a-b;
}

long long  plus(long long  a, long long  b){
    return a+b;
}

long long  f(long long  a, long long  b){
    return plus(a,b)*minus(a,b);
}

int main(){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld",f(a, b));
}