#include <stdio.h>

int main(int argc, char** argv) {
	int x, y, z; scanf("%d %d %d", &x, &y, &z);
	printf("%d", (x + y) % z);
return 0; }
