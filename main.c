#include <stdio.h>
#include <math.h>


int BinarytoDecimal() {
	long long n; // 64 bits type 
	int x;
	printf("Please Enter a binary number: ");
	scanf("%lld", &n);
	x = n;
	int dec = 0, i = 0, rem;
	do {
		rem =  n % 10;
		n = n / 10;
		dec += rem * pow(2, i);
		i++;
	}	while ( n != 0);
	printf("%lld in binary = %d in decimal\n", x, dec);
	return 0;
}


int main() {
	BinarytoDecimal();
}
