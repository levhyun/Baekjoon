//사분면 고르기
//url:https://www.acmicpc.net/problem/14681

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    if(x>0){
        if(y>0){
            printf("1");
        }else if(y<0){
            printf("4");
        }
    }else if(x<0){
        if(y>0){
            printf("2");
        }else if(y<0){
            printf("3");
        }
    }
    return 0;
}