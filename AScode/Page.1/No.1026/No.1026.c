#include <stdio.h>

int main(int argc, char* argv[]){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (b * b - 4 * a * c) > 0);
    return 0;
}
