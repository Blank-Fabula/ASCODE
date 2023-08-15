#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TC; scanf("%d", &TC);
    while (TC--) {
        int T, C; scanf("%d %d", &T, &C);
        int* alpha = (int*)malloc(C * sizeof(int));
        for (int i = 0; i < C; i++) { scanf("%d", &alpha[i]); }
        for (int i = 1; i <= T; i++) {
            for (int j = 0; j < C; j++) {
                if (i % alpha[j] == 0) { printf("%c", j + 'A'); }
            }
        } printf("\n");
    }
return 0; }
