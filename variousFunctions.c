#include <stdio.h>
#pragma warning(disable:4996)
#include <stdbool.h>
#include <string.h>

int factorials(int n)
{
	if (n == 0)
		return 1;
	else if (n > 0)
		return n * factorials(n - 1);
	else
		printf("Wrong input\n");
}

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		printf("Wrong input\n");
}

void runHanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("Move disk from rod %c to %c \n", x, y);
	}
	else
	{
		runHanoi(n - 1, x, z, y);
		runHanoi(1, x, y, z);
		runHanoi(n - 1, z, y, x);
	}
}

void reverse(char* str)
{
	if (str[0] == 0)
		return;
	else
		reverse(str + 1);
	printf("%c", str[0]);
}
void convert(char* str, int x) {
	if (str[0] >> x & 1)
		printf("1");
	else
		printf("0");
	x -= 1;
	if (x >= 0)
		convert(str, x);

	if (x < 6 || strlen(str) == 1)
		return;

	convert(str + 1, 7);
}



int main()
{
	bool sWitch = true;
	int mChoice;
	int count = 0;
	int value;
	char* str;

	int factorials(int);
	int fibonacci(int);
	void runHanoi(int, char, char, char);
	void reverse(char*);
	void convert(char*, int);


	do {

		printf("1. Factorials \n2. Fibonacci numbers \n3. Towers of Hanoi \n4. Reversing a string \n5. Conversion to ASCII \n6. Exit\n");
		scanf("%d", &mChoice);

		if (mChoice == 1)
		{
			printf("Factorials Calculation!! \n");

			printf("Enter the value : \n");
			scanf("%d", &value);

			printf("Factorials for %d is : %d \n", value, factorials(value));

			count++;

		}
		else if (mChoice == 2)
		{
			printf("Fibonacci numbers!! \n");

			printf("Enter the value : \n");
			scanf("%d", &value);

			printf("Fibonacci for %d is : %d \n", value, fibonacci(value));

			count++;

		}
		else if (mChoice == 3)
		{
			printf("Tower of Hanoi!! \n");

			printf("Enter the value : \n");
			scanf("%d", &value);

			runHanoi(value, 'A', 'B', 'C');

			count++;

		}
		else if (mChoice == 4)
		{
			char* original;
			char str[100];

			printf("Reversing a string!! \n");


			printf("Enter the value : ");
			scanf("%s", str);
			str[strlen(str)] = 0;
			original = str;



			printf("The result of reverse of %s is : ", original);
			reverse(str);
			printf("\n");
			count++;


		}
		else if (mChoice == 5)
		{
			printf("Conversion to ASCII \n");

			char str[100];
			printf("Enter string: ");
			scanf("%s", str);

			convert(str, 7);
			printf("\n");
			count++;

		}
		else if (mChoice == 6)
		{
			printf("Bye!! \n");

			sWitch = false;
		}
		else
		{
			printf("The choice is wrong, please try again. \n");
		}

	} while (sWitch == true);

	printf("Total usage of functions : %d", count);


	getchar();
	return 0;
}
