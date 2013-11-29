#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int a = atoi(argv[3]);
	//printf("n = %u, m = %u, a = %u\n", n, m, a);
	int x = n / a;
	float xr = n % a;
	int y = m / a;
	float yr = m % a;
	//printf("x = %d, y = %d\n", x, y);
	if(xr != 0) {
		x++;
	}
	if(yr != 0) {
		y++;
	}
	printf("%d",x*y);
	return 0;
}
