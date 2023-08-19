#include <stdio.h>
#include <string.h>

char data[1023];
char key[511];
int main(int argc, char** argv) {
    int TC; scanf("%d", &TC);
    while (TC--) {
        scanf("%s %s", data, key);
        for (int i = 0; i + strlen(key) <= strlen(data); i++) { key[strlen(key)] = key[i]; }
        for (int i = 0; i < strlen(data); i++) { printf("%c", data[i] ^ key[i]); }
        printf("\n");
    }
return 0; }
