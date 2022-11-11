//사파리월드
//url:https://www.acmicpc.net/problem/2420

#include <stdio.h>

int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", n>=m ? n-m : m-n);
}