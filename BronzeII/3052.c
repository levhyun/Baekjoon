#include <stdio.h>

int main() {
  int v, res=0, arr[10];
  
  for(int i = 0; i < 10; i++){
    scanf("%d", &v);
    arr[i] = v%42;
  }

  for(int i = 0; i < 10; i++){
    int cnt = 0; 
    for(int j = i+1; j < 10; j++){
      if(arr[i] == arr[j]){
        cnt++;
      }
    }
    if(cnt == 0){
      res++;
    }
  }

  printf("%d", res);
}