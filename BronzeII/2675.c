#include <stdio.h>
#include <string.h>

int main(){
    int t, n;
    char r[20];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %s", &n, &r);
        for(int j = 0; j < strlen(r); j++){
            for(int k = 1; k <= n; k++){
                printf("%c", r[j]);
            }
        }
        printf("\n");
    }
}