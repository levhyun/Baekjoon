#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int condition(const void* a, const void* b){
    if (strlen((const char*)a) > strlen((const char*)b)) return 1;
	else if (strlen((const char*)a) < strlen((const char*)b)) return -1;
	else return strcmp((char*)a, (char*)b);
}

int main(){
    int n;
    char arr[20000][51] = {0,};

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), condition);

    for(int i = 0; i < n; i++){
        if(strcmp(arr[i], arr[i+1]) != 0 ){
            printf("%s\n", arr[i]);
        }
    }
}