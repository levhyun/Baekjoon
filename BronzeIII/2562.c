#include <stdio.h>

int main(){
    int arr[9], num[9]={0}, temp;
    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        num[i]=arr[i];
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 8-i; j++){
            if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
        }
    }
    for (int i = 0; i < 9; i++){
		if(arr[8]==num[i]){
            printf("%d\n%d",arr[8],i+1);
            return 0;
        }
    }
}