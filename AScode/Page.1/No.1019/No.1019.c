#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	int TC; scanf("%d", &TC);
	while (TC--) {
	    char A[1024]; scanf("%s", &A);
		for (int i = 0; i < strlen(A); i++) {
			if (A[i] == 'Z') { A[i] = 'A'; }
			else { A[i]++; }
		}
		printf("%s\n", A);
	}
return 0; }
