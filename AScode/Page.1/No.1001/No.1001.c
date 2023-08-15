#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MY_CHAR_MAX 1025
char Message[MY_CHAR_MAX];

int main(int argc, char** argv) {
    int T; scanf("%d", &T);
    while (T--) {
        char UpperMessage[MY_CHAR_MAX] = { NULL };
        scanf("%s", Message);
        int MessageLen = strlen(Message), CharCount = 0, LenCount = 0;
        for (int i = 0; i < MessageLen; i++) { UpperMessage[i] = toupper(Message[i]); }
        for (int i = 0; i <= MessageLen; i++) {
            if (strncmp(&UpperMessage[i], "CHAR", 4) == 0) { CharCount++; }
        }
        int RemoveCharLen = strlen(Message);
        if (CharCount >= 2) {
            for (int i = 0; i <= MessageLen; i++) {
                if (strncmp(&UpperMessage[i], "CHAR", 4) == 0) {
                    for (int j = 0; j < 4; j++) { Message[i + j] = '0'; }
                }
            }
            for (int i = 0; i < strlen(Message); i++) {
                if (Message[i] != '0') {
                    LenCount = 1;
                    printf("%c", Message[i]);
                }
            }
            if (LenCount == 0) { printf("I Hate CharChar!"); }
            printf("\n");
        } else { puts(Message); }
    }
return 0; }
