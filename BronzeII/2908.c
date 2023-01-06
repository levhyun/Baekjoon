#include <stdio.h>
#include <string.h>

int rev(int n) {
  char s[4];
  int l;
  int result = 0;
  sprintf(s, "%d", n);
  l = strlen(s);
  for (int i = l - 1; i >= 0; i--) {
    result *= 10;
    result += s[i] - '0';
  }
  return result;
}

int main() {
  int a, b, max = 0, a2 = 0, b2 = 0;
  scanf("%d %d", &a, &b);
  if (a == b) {
    printf("%d", rev(a));
  } 
  else {
    a2 = a;
    b2 = b;
    while (a > 0 && b > 0) {
      if (a % 10 > b % 10) {
        max = a2;
        break;
      } else if (a % 10 < b % 10) {
        max = b2;
        break;
      }
      a /= 10;
      b /= 10;
    }
    printf("%d", rev(max));
  }
}