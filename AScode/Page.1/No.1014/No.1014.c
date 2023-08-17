#include <stdio.h>

int main(int argc, char** argv) {
    int sum = 0, day = 7;
    for (int i = 0; i < day; i++) {
        int num; scanf("%d", &num);
        sum += num;
    } printf("%d", sum / day);
return 0; }
