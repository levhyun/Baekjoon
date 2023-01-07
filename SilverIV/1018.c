#include <stdio.h>

int main() {
	char board[50][50];
	int n, m, min = 2501, normal = 0, paint = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%s", &board[i]);
    }
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			normal = 0;
			paint = 0;
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					if ((a + b) % 2 == 0) {
						if (board[a][b] == 'B'){
							paint++;
                        }
						else{
							normal++;
                        }
					}
					else {
						if (board[a][b] == 'B'){
							normal++;
                        }
						else{
							paint++;
                        }
					}
				}
			}
            min = min < normal ? min : normal;
            min = min < paint ? min : paint;
		}
	}
	printf("%d\n", min);
}