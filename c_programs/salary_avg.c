#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main() 
{
	int sal_num = 5;
	int salary[sal_num];
	int sum = 0;
	int avg = 0;
	int min = 0;
	int max = 0;

	printf("Enter total number of salaries to imput: \n");
	scanf("%d", &sal_num);	

        //check total salary length, should be 3 <= salary.length <= 100          

	if (sal_num >= 3 && sal_num <= 100)
	{
		printf("Enter salaries: \n");
	
		//taking input salaries and storing it in salary array

		for (int i = 1; i <= sal_num; i++)
		{
			scanf("%d", &salary[i]);
			if (salary[i] < 1000 || salary[i] > 1000000)
			{
				printf("Check Salary input, must be over 1,000 and below 1,000,000\n");
			}
		}
	}
	else
	{
		printf("Salary number is: %d\nInput a number above 3 and below 100\n", sal_num);
		return (0);
	}

	//set min and max salaries
	for (int i = 1; i <= sal_num; i++)
	{
		if (i == 1)
			min = salary[i];

		if (max < salary[i])
		{
			max = salary[i];
		}

		if (min > salary[i])
		{
			min = salary[i];
		}
	}

	//get sum of salaries
	for (int i = 1; i <= sal_num; i++)
	{
		if (!(salary[i] == min || salary[i] == max))
		sum += salary[i];
	}

	//get average of salaries
	avg = sum / (sal_num - 2);

	//print out all salary input separated by a comma and space
	for (int i = 1; i <= sal_num; i++)
		printf("%d, ", salary[i]);

	printf("\nMin salary is: %d\nMax salary is: %d\n", min, max);
	printf("Sum of all salaries excluding min and max is: %d\nAverage of salaries excluding min and max is: %d\n", sum, avg);

	return (0);
}
