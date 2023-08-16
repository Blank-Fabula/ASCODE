#include <stdio.h>

#define min 60
#define hour (min * 60)
#define day (hour * 24)
int main(int argc, char** argv) {
	int T; scanf("%d", &T);
	while (T--) {
		unsigned int second; scanf("%u", &second);
		printf("%u day : ", second / day);
		printf("%u hour : ", second % day / hour);
		printf("%u min : ", second % hour / min);
		printf("%u sec", second % min);
		printf("\n");
	}
return 0; }
