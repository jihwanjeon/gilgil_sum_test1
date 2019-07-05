#include <stdio.h>
#include "sum.h"

int main() {
	int n = 0;
	scanf("%d", &n);
	int s = sum(n);
	printf("sum : %d\n", s);

}
