#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<string> dunMap;
    int playerX, playerY;
    int T; cin >> T;
    while (T--) {
        int monster[26] = { 0 };
        int W, H, R; cin >> W >> H >> R;
        dunMap.clear(); dunMap.resize(H);
        for (int i = 0; i < H; i++) {
            cin >> dunMap[i];
            for (int j = 0; j < W; j++) {
                if (dunMap[i][j] >= 'A' && dunMap[i][j] <= 'Z') { monster[dunMap[i][j] - 65]++; }
                if (dunMap[i][j] == '@') { playerX = j, playerY = i; }
            }
        }
        int cnt = 0;
        for (int i = playerY - R; i <= playerY + R; i++) {
            for (int j = playerX - R; j <= playerX + R; j++) {
                if (dunMap[i][j] >= 'A' && dunMap[i][j] <= 'Z') { cnt++; }
            }
        }
        for (int i = 0; i < 26; i++) {
            if (monster[i]) { cout << char(i + 'A') << ' ' << monster[i] << '\n'; }
        }
        if (cnt) { cout << "Monsters Nearby" << ' ' << cnt << '\n'; }
        cout << '\n';
    }
return 0; }
