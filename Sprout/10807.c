//개수 세기
//url:https://www.acmicpc.net/problem/10807

#include <stdio.h>

int main() {
	int n, cnt=0;;
    scanf("%d", &n);
    int list[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    int v;
    scanf("%d", &v);
    for(int i = 0; i<n; i++){
        if(v==list[i]){
            cnt++;
        }
    }
    printf("%d", cnt);
}