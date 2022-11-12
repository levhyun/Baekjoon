//킹, 퀸, 룩, 비숍, 나이트, 폰
//url:https://www.acmicpc.net/problem/3003

#include <stdio.h>

int main(){
    int n,a[6] = {1,1,2,2,2,8};
    for(int i = 0; i< 6; i++){
        scanf("%d",&n);
        a[i]-=n;
    }
    for(int i = 0; i< 6; i++){
        printf("%d ", a[i]);
    }
}