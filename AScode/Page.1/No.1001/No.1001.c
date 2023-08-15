#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MY_CHAR_MAX 1025
char message[MY_CHAR_MAX];

int main(int argc, char** argv) {
    int T; scanf("%d", &T);
    while (T--) {
        char upperMessage[MY_CHAR_MAX] = { NULL };
        scanf("%s", message);
        int messageLen = strlen(message), charCount = 0, lenCount = 0;
        for (int i = 0; i < messageLen; i++) { upperMessage[i] = toupper(message[i]); }
        for (int i = 0; i <= messageLen; i++) {
            if (strncmp(&upperMessage[i], "CHAR", 4) == 0) { charCount++; }
        }
        int removeCharLen = strlen(message);
        if (charCount >= 2) {
            for (int i = 0; i <= messageLen; i++) {
                if (strncmp(&upperMessage[i], "CHAR", 4) == 0) {
                    for (int j = 0; j < 4; j++) { message[i + j] = '0'; }
                }
            }
            for (int i = 0; i < strlen(message); i++) {
                if (message[i] != '0') {
                    lenCount = 1;
                    printf("%c", message[i]);
                }
            }
            if (lenCount == 0) { printf("I Hate CharChar!"); }
            printf("\n");
        }
        else { puts(message); }
    }
return 0; }
