//대소문자 바꾸기
//url:https://www.acmicpc.net/problem/2744

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	scanf("%s", str);
	for (int i=0; i<strlen(str); i++) 
	{
		if (str[i] >= 97 && str[i] <= 122){//97~122 a~z
			str[i] -= 32;
		}else if (str[i] >= 65 && str[i] <= 90){//65~90 A~Z
			str[i] += 32;
		}
	}
	printf("%s", str);
}