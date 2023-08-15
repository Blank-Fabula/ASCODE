#include <stdio.h>

int main(int argc, char** argv) {
    int T; scanf("%d", &T);
    while (T--) {
        char dunMap[33][33] = { 0 };
        int monster[26] = { 0 };
        int playerX, playerY;
        int x, y, r; scanf("%d %d %d", &x, &y, &r);
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                scanf("%1s", &dunMap[i][j]);
                if (dunMap[i][j] >= 'A' && dunMap[i][j] <= 'Z') { monster[dunMap[i][j] - 65]++; }
                if (dunMap[i][j] == '@') { playerX = j, playerY = i; }
            }
        }
        int cnt = 0;
        for (int i = playerY - r; i <= playerY + r; i++) {
            for (int j = playerX - r; j <= playerX + r; j++) {
                if (dunMap[i][j] >= 'A' && dunMap[i][j] <= 'Z') { cnt++; }
            }
        }
        for (int i = 0; i < 26; i++) {
            if (monster[i]) { printf("%c %d\n", i + 'A', monster[i]); }
        }
        if (cnt) { printf("Monsters Nearby %d\n", cnt); }
        printf("\n");
    }
return 0; }
