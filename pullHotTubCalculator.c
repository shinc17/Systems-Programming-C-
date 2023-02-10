#include <stdio.h>
#pragma warning(disable:4996)
#include <stdbool.h>
#include <math.h>

int main()
{
	bool sWitch = true;
	int mChoice;
	double dse = -1;
	double dde = -1;
	double wp = -1;
	double lp = -1;
	double lwi = -1;
	double lse = -1;
	double lde = -1;
	double wht = -1;
	double dht = -1;
	double tvp;
	double gwp;
	double tvh;
	double gwh;
	double tgb;
	double tcb;

	while (sWitch = true)
	{
		printf("1. Hot tub and Pool Calculation\n2. Exit\n");
		scanf("%d", &mChoice);

		if (mChoice == 1)
		{
			while ((dse < 0) || (dse > 5)) {
				printf("Dept of the shallow end: ?\n");
				scanf("%lf", &dse);

				if ((dse >= 0) && (dse <= 5))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 0 AND 5 FEET!!!!\n");
				}
			}
			
			while ((dde < 6) || (dde > 15)) {
				printf("Depth of the deep end: ?\n");
				scanf("%lf", &dde);

				if ((dde >= 6) && (dde <= 15))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 6 AND 15 FEET!!!!\n");
				}
			}
			
			while ((wp < 15) || (wp > 30)) {
				printf("Width of the pool: ?\n");
				scanf("%lf", &wp);

				if ((wp >= 15) && (dse <= 30))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 15 AND 30 FEET!!!!\n");
				}
			}
			
			while ((lp < 35) || (lp > 70)) {
				printf("Length of the pool: ?\n");
				scanf("%lf", &lp);

				if ((lp >= 35) && (dse <= 70))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 35 AND 70 FEET!!!!\n");
				}
			}
			
			while ((lwi < 5) || (lwi > lp/3)) {
				printf("Length of the walk-in: ?\n");
				scanf("%lf", &lwi);

				if ((lwi >= 5) && (lwi <= lp/3))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 5 AND 1/ 3 of the pool length FEET!!!!\n");
				}
			}
			
			while ((lse < 10) || (lse > lp/2)) {
				printf("Length of the shallow end: ?\n");
				scanf("%lf", &lse);

				if ((lse >= 10) && (lse <= lp/2))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 10 AND 1/2 of the pool length FEET!!!!\n");
				}
			}
			
			while ((lde < 12) || (lde > lp/2)) {
				printf("Length of the deep end: ?\n");
				scanf("%lf", &lde);

				if ((lde >= 12) && (lde <= lp/2))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 12 AND 1/2 of the pool length FEET!!!!\n");
				}
			}
			
			while ((wht < 8) || (wht > 14)) {
				printf("Width of the hot tub: ?\n");
				scanf("%lf", &wht);

				if ((wht >= 8) && (wht <= 14))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 8 AND 14 FEET!!!!\n");
				}
			}
			
			while ((dht < 3) || (dht > 5)) {
				printf("Depth of the hot tub: ?\n");
				scanf("%lf", &dht);

				if ((dht >= 3) && (dht <= 5))
				{
					break;
				}
				else
				{
					printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 3 AND 5 FEET!!!!\n");
				}
			}
			
			tvp = (lde * wp * (dde - 0.5)) + ((((dde -0.5) + (dse - 0.5)) * (lp - lde - lse - lwi))/2 * wp) + (lse * wp * (dse - 0.5)) + ((lwi * wp *	(dse - 0.5))/2);
			gwp = tvp * 7.481;
			tvh = 3.14159265358979323846 * (wht / 2) * (wht / 2) * (dht - 0.5);
			gwh = tvh * 7.481;
			tgb = gwp + gwh;
			tcb = tgb * 4 * 7 / 100;

			printf("Pool Dimensions (feet)\nDepth of the shallow end: %.1f\nDepth of the deep end : %.1f\nWidth of the pool : %.1f\nLength of the pool : %.1f\nLength of the walk - in : %.1f\nLength of the shallow end : %.1f\nLength of the deep end : %.1f\nWidth of the hot tub : %.1f\nDepth of the hot tub : %.1f\n", dse, dde, wp, lp, lwi, lse, lde, wht, dht);

			printf("Pool Volume\nTotal volume of pool: %.1f\nGallons of water to fill: %.1f\nHot Tub Volume\nTotal volume of hot tub: %.1f\nGallons of water to fill: %.1f\nTotal gallons for both : %.1f\nTotal cost for both : $%.2f\n", tvp, gwp, tvh, gwh, tgb, tcb);

			dse = -1;
			dde = -1;
			 wp = -1;
			lp = -1;
			lwi = -1;
			lse = -1;
			lde = -1;
			wht = -1;
			dht = -1;
		}
		else if (mChoice == 2)
		{
			printf("GoodBye!!\n");
			sWitch = false;
			break;
		}
		else
		{
			printf("Wrong choice. Please try again!!");
		}
	}

	getchar();

	return 0;
}
