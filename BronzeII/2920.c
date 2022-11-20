#include <stdio.h>

int main(){
    int n[8],cnt=1, cnt2=8, sum=0, sum2=0;
    for(int i = 0; i < 8; i++){
        scanf("%d", &n[i]);
        if(n[i]==cnt){
            sum++;
        }
        if(n[i]==cnt2){
            sum2++;
        }
        cnt++;
        cnt2--;
    }
    if(sum==8){
        printf("ascending");
    }else if(sum2==8){
        printf("descending");
    }else{
        printf("mixed");
    }
}