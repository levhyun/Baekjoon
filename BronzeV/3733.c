//Shares
//url:https://www.acmicpc.net/problem/3733

#include <stdio.h>

int main(){
    int n, s;
    while (scanf("%d %d", &n, &s) != EOF){
        printf("%d\n", s/(n+1));
    }
}