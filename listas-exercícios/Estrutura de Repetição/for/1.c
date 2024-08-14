#include <stdio.h>
#include <windows.h>

int main () {
	int i;
	
	for (i = 10; i >= 1; i--) {
		printf("%d\n", i);
		Sleep(1000);
	}
	
	printf("Fogos!");
	
	return 0;
}