#include <stdio.h>
#include <math.h>


int BinarytoDecimal() {
	long long n; // 64 bits type 
	int x;
	printf("Please enter a Binary number: ");
	scanf("%lld", &n);
	x = n;
	int dec = 0, i = 0, rem;
	do {
		rem =  n % 10;
		n = n / 10;
		dec += rem * pow(2, i);
		i++;
	}	
	while ( n != 0);
	printf("%d in Binary = %d in Decimal\n", x, dec);
	return 0;
}

int DecimaltoBinary() {
	int user, x, rem, binary = 0, temp = 1;
	printf("Please enter a Decimal number: ");
	scanf("%d", &user);
	x = user;
	while (x > 0) {
		rem = x % 2;	// Divide the user input by 2 and store the remainder
		binary += rem * temp;
		temp = temp * 10;
		x = x / 2;
	} 
	printf("%d in Decimal = %d in Binary\n", user, binary);
	return 0;
}

int DecimaltoOctal() {
	int octal = 0, temp = 1, user, x;
	printf("Please enter a decial number: ");
	scanf("%d", &user);
	x = user;
	while ( user != 0) {
		octal = octal + (user % 8) * temp;
		user = user / 8;
		temp = temp * 10;
	}
	printf("%d in Decimal = %d in octal\n", x, octal);
	return 0;
}

int main() {
	DecimaltoOctal();
}
