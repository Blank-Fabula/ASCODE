#include<stdio.h>

#define DAY (HOUR * 24)
#define HOUR (MINUTE * 60)
#define MINUTE 60

int main(int argc, char *argv[]) {
	int sc, d, h, m;

	scanf("%d", &sc);

	for (d = 0; sc - DAY >= 0; d++) { sc -= DAY; }
	for (h = 0; sc - HOUR >= 0; h++) { sc -= HOUR; }
	for (m = 0; sc - MINUTE >= 0; m++) { sc -= MINUTE; }
  
	printf("%d %d %d %d", d, h, m, sc);

	return 0;
}
