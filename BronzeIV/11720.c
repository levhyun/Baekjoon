#include <stdio.h>

int main(){
    int n, res=0;
    scanf("%d", &n);
    char c[n];
    scanf("%s", &c);
    for(int i = 0; i < n; i++){
        res+=c[i]-'0';
    }
    printf("%d", res);
}
