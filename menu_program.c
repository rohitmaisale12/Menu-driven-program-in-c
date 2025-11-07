#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void checkprime();
void factorial();
void palindrome();
void fibonacci();
int main() {
	int choice;
	do {
		printf("---MENU---\n");
		printf("1.checkprime number\n");
		printf("2.factorial\n");
		printf("3.palindrome\n");
		printf("4.fibbonacci sequence\n");
		printf("5.exit\n");
		printf("enter the choice:");
		scanf("%d\n", &choice);
		switch (choice) {
		case 1:
			checkprime();
			break;
		case 2:
			factorial();
			break;
		case 3:
			palindrome();
			break;
		case 4:
			fibonacci();
			break;
		case 5:
			printf("exiting program");
			break;
		default:
			printf("invalid choice! try again");
			break;
		}
	} while (choice != 5);
	return 0;
}
void checkprime() {
	int n, i, isPrime = 1;
	printf("Enter the number: ");
	scanf("%d\n", &n);

	if (n <= 1)
		isPrime = 0;

	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			isPrime = 0;
			break;
		}
	}

	if (isPrime)
		printf("%d is a Prime number\n", n);
	else
		printf("%d is not a Prime number\n", n);
}
void factorial() {
	int n;int fact = 1;
	printf("enter the number:");
	scanf("%d\n", &n);
	for (int i = n;i >= 1;i--) {
		fact = fact * i;
	}
	printf("factorial of the number is %d\n", fact);
}
void palindrome() {
	int n;int digit;int rev = 0;int temp;
	printf("enter the number:");
	scanf("%d\n", &n);
	temp = n;
	while(n>0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	if (temp == rev) {
		printf("it is palindrome");
	}
	else {
		printf("it is not palindrome");
	}
}
void fibonacci() {
	int terms, a = 0, b = 1, c;
	printf("enter the number of terms:");
	scanf("%d", &terms);
	printf("Fibonacci series\n:");
	if (terms >= 1) {
		printf("%d ", a);
	}
	if (terms >= 2) {
		printf("%d ", b);
	}
	for (int i = 3;i <= terms;i++) {
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	printf("\n");
}
