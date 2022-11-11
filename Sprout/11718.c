//그대로 출력하기
//url:https://www.acmicpc.net/problem/11718

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char c[n][1000];
    for(int i = 0; i < n; i++){
        scanf("%s", &c[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%c%c\n", c[i][0], c[i][strlen(c[i])-1]);
    }
}