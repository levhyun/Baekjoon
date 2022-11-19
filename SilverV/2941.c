#include <stdio.h>
#include <string.h>

int main(){
    char s[100],cnt=0;
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        switch (s[i+1])
        {
        case '=':
            if(s[i]=='c'||s[i]=='s'||s[i]=='z'||s[i]=='z'&&s[i-1]=='d'){
                cnt++;
            }
            break;
        case '-':
            if(s[i]=='c'||s[i]=='d'){
                cnt++;
            }
            break;
        case 'j':
            if(s[i]=='l'||s[i]=='n'){
                cnt++;
            }
            break;
        }
    }
    printf("%d", cnt);
}