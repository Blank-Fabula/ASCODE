#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TC; scanf("%d", &TC);
    while (TC--) {
        int N; scanf("%d", &N);
        for (int i = 0; i < N; i++) { int cnt = N - N / 2 - 1;
            for (int j = 0; j < N; j++) { printf("%d", 1 + ( i > N / 2
                ? (j < abs(i - N + 1) ? cnt--
                    : (j >= N - abs(i - N + 1) ? ++cnt : cnt))
                : (j < i ? cnt--
                    : (j >= N - i ? ++cnt : cnt))));
            } printf("\n");
        }
    }
return 0;}
