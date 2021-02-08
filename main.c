#include <stdio.h>
#include <math.h>

// Adding the function to convert Binary to Decimal
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

// Adding the function to convert Decimal to Binary
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

// Adding the function to convert Decimal to Octal
int DecimaltoOctal() {
  int octal = 0, temp = 1, user, x;
  printf("Please enter a Decial number: ");
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

// Adding the function to convert Octal to Decimal
int OctaltoDecimal() {
  int dec = 0, temp = 0, user, x;
  printf("Please enter a Octal number: ");
  scanf("%d", &user);
  x = user; // just a copy of the user input
  while ( user != 0) {
    dec = dec + (user % 10) * pow(8, temp);
    temp++;
    user = user / 10;
  }
  printf("%d in Octal = %d in Decimal\n", x, dec);
  return 0;
}

// Adding the function to convert Binary to Octal
int BinarytoOctal() {
  long long user;
  int bin;
  printf("Please enter a Binary number: ");
  scanf("%lld" , &user);
  bin = user;

  int oct = 0, dec = 0, i = 0;

  // first we convert binary to decimal
  while (bin != 0) {
    dec += (bin % 10) * pow(2, i);
    ++i;
    bin = bin / 10;
  }
  i = 1;

  // now we will convert decimal to octal 
  while (dec != 0) {
    oct += (dec % 8) * i;
    dec = dec / 8;
    i = i * 10;
  }
  printf("%lld in Binary = %d in Octal\n", user, oct);
  return 0;
}

// Adding the function to convert Octal to Binary 
int OctaltoBinary() {
  int oct,x;
  printf("Please enter a Octal number: ");
  scanf("%d", &oct);
  x = oct;
  int dec = 0, i = 0;
  long long bin = 0;

  // first step is to convert octal to decimal
  while (oct != 0) {
    dec += (oct % 10) * pow(8,i);
    i++;
    oct = oct / 10;
  }
  i = 1;

  // and now we will convert decimal to binary
  while (dec != 0) {
    bin += (dec % 2) * i;
    dec = dec / 2;
    i = i * 10;
  }
 printf("%d in Octal = %lld in Binary\n", x, bin);
 return 0;
}

void menu() {
  int user;
// --------------------------------------------
// Numeral System Converter - Command Line Tool
// --------------------------------------------
// [0] Exit
// [1] Back to Main Menu
// --------------------------------------------
// [2] Binary to Decimal 
// ..
// ..
// --------------------------------------------
// Choose one of the system converter: 
printf("--------------------------------------------\n");
printf("Numeral System Converter - Command Line Tool\n");
printf("--------------------------------------------\n");
printf("[0] Exit\n");
printf("[1] Back to Main Menu\n");
printf("--------------------------------------------\n");
printf("[2] Binary to Decimal\n");
printf("[3] Decimal to Binary\n");
printf("[4] Decimal to Octal\n");
printf("[5] Octal to Decimal\n");
printf("[6] Binary to Octal\n");
printf("[7] Octal to Binary\n");
printf("--------------------------------------------\n");
printf("Choose one of the system Converter: ");
scanf("%d", &user);
}

int main() {
  menu();
}
