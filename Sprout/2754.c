//학점계산
//url:https://www.acmicpc.net/problem/2754

#include <stdio.h>

int main()
{
	char c[2];
    scanf("%s", &c);
    switch (c[0]){
        case 'A':
            if(c[1]=='+'){
                printf("4.3");
                break;
            }else if(c[1]=='0'){
                printf("4.0");
                break;
            }else if(c[1]=='-'){
                printf("3.7");
                break;
            }
        case 'B':
            if(c[1]=='+'){
                printf("3.3");
                break;
            }else if(c[1]=='0'){
                printf("3.0");
                break;
            }else if(c[1]=='-'){
                printf("2.7");
                break;
            }
        case 'C':
            if(c[1]=='+'){
                printf("2.3");
                break;
            }else if(c[1]=='0'){
                printf("2.0");
                break;
            }else if(c[1]=='-'){
                printf("1.7");
                break;
            }
        case 'D':
            if(c[1]=='+'){
                printf("1.3");
                break;
            }else if(c[1]=='0'){
                printf("1.0");
                break;
            }else if(c[1]=='-'){
                printf("0.7");
                break;
            }
        case 'F': printf("0.0"); break;
    }
}