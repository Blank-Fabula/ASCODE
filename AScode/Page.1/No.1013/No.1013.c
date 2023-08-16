#include <stdio.h>

int main(int argc, char** argv) {
    int T; scanf("%d", &T);
    while (T--) {
        char id[9]; scanf("%s", id);
        printf("%c%c\n", id[2], id[3]);
    }
return 0; }
