#include <stdio.h>

int main() {
  int n, v, max = 0, sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &v);
    sum += v;
    if (v > max) {
      max = v;
    }
  }
  printf("%f\n", 100.0 * sum / n / max);
}