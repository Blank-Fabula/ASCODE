#include <stdio.h>

int main(int argc, char** argv) {
    int T; scanf("%d\n", &T);
    while (T--) {
        char alpha; scanf(" %c", &alpha);
        if (alpha <= 'Z') { alpha += 32;
        } else { alpha -= 32; }
        printf("%c\n", alpha);
    }
return 0; }
