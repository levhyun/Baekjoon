#include <stdio.h>

int main(){
    int n, num, min=1000000, max=-1000000;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(min>num){
            min=num;
        }
        if(max<num){
            max=num;
        }
    }
    printf("%d %d", min, max);
}