#include <stdio.h>
#include <string.h>

int main() {
  char str[1000001];
  int cnt;
  gets(str);
  if (strlen(str) == 1 && str[0] == ' ') {
    cnt = 0;
  } else {
    cnt = 1;
  }
  for (int i = 1; i < strlen(str) - 1; i++) {
    if (str[i] == ' ') {
      cnt++;
    }
  }
  printf("%d", cnt);
}
