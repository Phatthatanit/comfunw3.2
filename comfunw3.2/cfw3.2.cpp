#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int h;
void tri() {
	int i, j, t;
	for (i = 1; i <= h; i++) {
		t = h - i;
		for (j = 1; j <= t; j++) { printf(" "); }
		for (j = 1; j <= h - t; j++) { printf("%d", j); }
		for (j = h - t - 1; j >= 1; j--) { printf("%d", j); }
		printf("\n");
	}
}
int main() {
	int input[3];
	printf("Input 3 numbers : ");
	scanf("%d %d %d", &input[0], &input[1], &input[2]);
	h = input[0] + input[1] + input[2];
	printf("High = %d\n", h);
	if (h <= 0) {
		printf("Error");
	}
	else {
		tri();
	}
	return 0;
}