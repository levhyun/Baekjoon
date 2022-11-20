#include <stdio.h>
#include <string.h>

int main(){
    char s[100],cnt=0;
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i]=='c'){
            if(s[i+1]=='='||s[i+1]=='-'){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(s[i]=='d'){
            if(s[i+1]=='-'){
                cnt++;
                i++;
            }else if(s[i+1]=='z'&&s[i+2]=='='){
                cnt++;
                i+=2;
            }else{
                cnt++;
            }
        }else if(s[i]=='l'&&s[i+1]=='j'||s[i]=='n'&&s[i+1]=='j'||s[i]=='s'&&s[i+1]=='='||s[i]=='z'&&s[i+1]=='='){
            cnt++;
            i++;
        }else{
            cnt++;
        }
    }
    printf("%d", cnt);
}