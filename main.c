#include <stdio.h>
#include <math.h>


int BinarytoDecimal() {
	long long n; // 64 bits type 
	int x;
	printf("please enter a binary number: ");
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
	printf("%d in binary = %d in decimal\n", x, dec);
	return 0;
}

int DecimaltoBinary() {
	int user, x, rem, binary = 0, temp = 1;
	printf("Please enter a decimal number: ");
	scanf("%d", &user);
	x = user;
	while (x > 0) {
		rem = x % 2;	// Divide the user input by 2 and store the remainder
		binary += rem * temp;
		temp = temp * 10;
		x = x / 2;
	} 
	printf("%d in decimal = %d in binary\n", user, binary);
	return 0;
}


int main() {
	DecimaltoBinary();
}
