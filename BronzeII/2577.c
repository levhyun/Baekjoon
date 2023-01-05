#include <stdio.h>

int arr[10];

int main(){
	int a, b, c;
	int res;
	scanf("%d %d %d",&a,&b,&c);
	res = a*b*c;
	for(int i = res; i > 0; i /= 10){
		arr[i%10]++;
  }
	for(int i = 0; i < 10; i++){
		printf("%d\n",arr[i]);
  }
}