#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// function delcaration before main()
int secondmenu();

// Adding the function to convert Binary to Decimal
int BinarytoDecimal() {
  long long n, x; // 64 bits type
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
  printf("%lld in Binary = %d in Decimal\n", x, dec);
  secondmenu();
  return 0;
}

// Adding the function to convert Decimal to Binary
int DecimaltoBinary() {
  int user;
  long long x, binary = 0, rem, temp = 1;
  printf("Please enter a Decimal number: ");
  scanf("%d", &user);
  x = user;
  while (x > 0) {
    rem = x % 2;	// Divide the user input by 2 and store the remainder
    binary += rem * temp;
    temp = temp * 10;
    x = x / 2;
  } 
  printf("%d in Decimal = %lld in Binary\n", user, binary);
  secondmenu();
  return 0;
}

// Adding the function to convert Decimal to Octal
int DecimaltoOctal() {
  int octal = 0, temp = 1, user, x;
  printf("Please enter a Decimal number: ");
  scanf("%d", &user);
  x = user;
  while ( user != 0) {
    octal = octal + (user % 8) * temp;
    user = user / 8; 
    temp = temp * 10;
  }
  printf("%d in Decimal = %d in octal\n", x, octal);
  secondmenu();
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
  secondmenu();
  return 0;
}

// Adding the function to convert Binary to Octal
int BinarytoOctal() {
  long long user, bin;
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
  secondmenu();
  return 0;
}

// Adding the function to convert Octal to Binary 
int OctaltoBinary() {
  long long bin = 0, dec = 0, i = 0, oct, x;
  printf("Please enter a Octal number: ");
  scanf("%lld", &oct);
  x = oct;

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
 printf("%lld in Octal = %lld in Binary\n", x, bin);
 secondmenu();
 return 0;
}

// Adding the function to convert Hexadecimal to Decimal
int HexadecimaltoDecimal() {
  char hex[32] = {0};
  int dec = 0, cnt = 0, i, dig;

  printf("Please enter a Hexadecimal number: ");
  scanf("%s", hex);

  for (i = (strlen(hex) - 1); i >= 0; i--) {
    switch(hex[i]) {
      case 'A':
        dig = 10; break;
      case 'B':
        dig = 11; break;
      case 'C':
        dig = 12; break;
      case 'D':
        dig = 13; break;
      case 'E':
        dig = 14; break;
      case 'F':
        dig = 15; break;
      default:
        dig = hex[i] - 0x30;
    }
    dec = dec + (dig)*pow((double)16,(double)cnt);
    cnt ++;
  }
  printf("%s in Hexadecimal = %d in Decimal\n", hex,dec);
  secondmenu();
  return 0;
}

int HexadecimaltoOctal() {
  char hex[32] = {0};

  printf("Please Enter a Hexadecimal number: ");
  scanf("%d", &hex);

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
  printf("\n--------------------------------------------\n");
  printf("Numeral System Converter - Command Line Tool\n");
  printf("--------------------------------------------\n");
  printf("[0] Exit\n");
  printf("[1] Back to Main Menu\n");
  printf("--------------------------------------------\n");
  printf("[2] Binary to Decimal\n");
  printf("[3] Decimal to Binary\n");
  printf("[4] Hexadecimal to Decimal\n");
  printf("[5] Decimal to Octal\n");
  printf("[6] Octal to Decimal\n");
  printf("[7] Hexadecimal to Octal\n");
  printf("[8] Binary to Octal\n");
  printf("[9] Octal to Binary\n");
  printf("--------------------------------------------\n");
  printf("Choose one of the system Converter: ");
  scanf("%d", &user);
  printf("\n");
  if (user == 0) {
    exit(0);
  } else if (user == 1) {
      menu();
  } else if (user == 2) {
      BinarytoDecimal();
  } else if (user == 3) {
      DecimaltoBinary();
  } else if (user == 4) {
      HexadecimaltoDecimal();
  } else if (user == 5) {
      DecimaltoOctal();
  } else if (user == 6) {
      OctaltoDecimal();
  } else if (user == 7) {
      HexadecimaltoOctal();
  } else if (user == 8) {
      BinarytoOctal();
  } else if (user == 9) {
    OctaltoBinary();
  }
}

int secondmenu() {
 int input;
 printf("\n[0] Exit\n[1] Back to Main Menu\nPlease choose on of them: ");
 scanf("%d", &input);
 if (input == 0) {
    exit(0);
 } else if (input == 1) {
    menu();
 }
 return 0;
}

int main() {
  menu();
}
