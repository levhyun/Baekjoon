#include<stdio.h>

int main(void){
    int cnt;
    int l, r;
    scanf("%d %d", &l, &r);
    while(r){
        if(l%10==r%10){
            if(l%10==8){
                cnt++;
            }
        }else{
            cnt=0;
        }
        l/=10;
        r/=10;
    }
    printf("%d", cnt);
}