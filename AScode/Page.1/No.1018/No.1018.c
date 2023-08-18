#include <stdio.h>

int main(int argc, char** argv) {
	int price; scanf("%d", &price);
	printf("%d\n", price / 500);
	printf("%d\n", price % 500 / 100);
	printf("%d", price % 100 / 10);
return 0; }
