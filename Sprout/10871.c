//X보다 작은 수
//url:https://www.acmicpc.net/problem/10871

#include <stdio.h>

int main() {
	int n, x;
    scanf("%d %d", &n, &x);
    int list[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    for(int i = 0; i<n; i++){
        if(x>list[i]){
            printf("%d ", list[i]);
        }
    }
}