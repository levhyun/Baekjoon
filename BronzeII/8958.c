#include <stdio.h>
#include <string.h>

int main(){
    int t, n=1, res=0;
    char c[80];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%s", &c);
        for (int j = 0; j < strlen(c); j++){
            if(c[j]=='O'){
                res+=n;
                n++;
            }else if(c[j]=='X'){
                n=1;
            }
        }
        printf("%d\n", res);
        res=0;
        n=1;
    }
}