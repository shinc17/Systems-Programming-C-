/*
CNIT 31500
David (Chang Yu) Shin
Instructor: E T Matson
TA Name: Z Ghorrati
Lab: 1:30 ~ 3:20 Thursday

Brief Explanation: 
	This lab gets input from user about how many boxes they want to ship. There are type 1 and 2 boxes, which have different sizes. 
	The program calculate the total sizes and shipping cost for it which includes dicount fee for remaining spaces.

*/



#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int box1;
	int box2;
	int box1Cubic = 1;
	int box2Cubic = 4;
	int sContainerCubic = 2560;
	int totalCubic;
	int totalAmount;
	int remain;
	int discount;

	printf("Remain Space of Container : %d\n", sContainerCubic);
	printf("How many Type 1 boxes do you want?\n");
	scanf("%d", &box1);

	int box1M = box1 * box1Cubic;

	remain = sContainerCubic - box1M;

	printf("Remaining space for Type 2 boxes : %d\n", remain);
	printf("Max number of Type 2 boxes that you can store in container : %d\n", (remain / box2Cubic));

	printf("How many Type 2 boxes do you want?\n");
	scanf("%d", &box2);

	totalCubic = (box1 * box1Cubic) + (box2 * box2Cubic);

	printf("Your total cubic amount of boxes : %d\n", totalCubic);
	if (sContainerCubic < totalCubic)
	{
		printf("Your total amount is over remaing space of shipping container!!\n");
	}
	else
	{
		totalAmount = (box1 * 20) + (box2 * 35);
		printf("Your total shipping cost : %d\n", totalAmount);

		sContainerCubic = sContainerCubic - totalCubic;
		printf("Remain Space of Container : %d\n", sContainerCubic);

		discount = sContainerCubic * 2;
		printf("Discount fee for remaining spaces : %d\n", discount);

		printf("Your total shipping cost with the discount applied : %d\n", (totalAmount - discount));
	}

	printf("Program has ended...\n");

	return 0;
}