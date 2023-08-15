#include <stdio.h>

int main(int argc, char** argv) {
    int TC; scanf("%d", &TC);
    while (TC--) {
        int T; scanf("%d", &T);
        int A, B, C; scanf("%d %d %d", &A, &B, &C);
        for (int i = 1; i <= T; i++) {
            if (i % A == 0) { printf("A"); }
            if (i % B == 0) { printf("B"); }
            if (i % C == 0) { printf("C"); }
        } printf("\n");
    }
return 0; }
