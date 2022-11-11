//과제 안 내신 분..?
//url:https://www.acmicpc.net/problem/5597

#include <stdio.h>

int main(){
    int n,list[31], min[2]={31,31};
    for(int i = 1; i <= 28; i++){
        scanf("%d",&n);
        list[n]=n;
    }
    for(int i = 1; i <= 30; i++){
        if(list[i]!=i){
            if(min[0]>i){
                min[0]=i;
            }else if(min[1]>i){
                min[1]=i;
            }
        }
    }
    printf("%d\n%d",min[0],min[1]);
}