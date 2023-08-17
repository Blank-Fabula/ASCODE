#include <stdio.h>

#define MIN 60
#define HOUR (MIN * 60)
#define DAY (HOUR * 24)

int main(int argc, char** argv) {
	int T; scanf("%d", &T);
	while (T--) {
		unsigned int second; scanf("%u", &second);
		printf("%u day : ", second / DAY);
		printf("%u hour : ", second % DAY / HOUR);
		printf("%u min : ", second % HOUR / MIN);
		printf("%u sec", second % MIN);
		printf("\n");
	}
return 0; }
