#include <stdio.h>
int arr[1000001];
int main() {
	int n = 0;
	int max = -1000000;
	int min = 1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("%d %d\n", min, max);
	return 0;
}