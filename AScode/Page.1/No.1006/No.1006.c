#include <stdio.h>
 
int main(int argc, char** argv) {
    int T; scanf("%d\n", &T);
    while (T--) {
        int alphaCnt[26] = { 0 };
        for (; ;) {
            char alpha = getchar();
            if (alpha == '\n' || alpha == EOF) { break; }
            alphaCnt[alpha - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (alphaCnt[i]) { printf("%c:%d\n", i + 'a', alphaCnt[i]); }
        } printf("\n");
    }
return 0; }
