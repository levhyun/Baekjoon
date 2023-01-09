#include <iostream>
#include <cstdio>

long long arr[1000001];

int main() {
        long long min, max;
        int cnt = 0;

        scanf("%lld %lld", &min, &max);
        
        for (long long i = 2; i*i < max+1; i++) {
                long long n = min/(i * i);

                if (min % (i * i)) {
                    n++;
                }

                while (n*i*i < max+1) {	
                        arr[n*i*i - min] = 1;
                        n++;
                }
        }

        for (int i = 0; i < max-min+1; i++) {
                if (arr[i] == 0) {
                    cnt++;
                }
        }

        printf("%d", cnt);
}