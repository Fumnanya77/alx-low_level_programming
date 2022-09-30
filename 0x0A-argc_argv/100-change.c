#include "main.h"

/**
 * main - the minimum number of coins for a given money
 *
 * @argc: counts the number of arguments passed
 * @argv: pointer to the string literal of the argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int money, i, sum = 0, a = 0;
	int coins[10] = {50, 25, 10, 5, 2};

	money = atoi(argv[1]);
	/*printf("%d\n", money);*/
	/*printf("%d\n", argc);*/

	if (money < 0)
	{
		printf("%d\n", 0);
	}
	if (argc != 2)
		printf("%s\n", "Error");
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (((money % coins[i]) == 0) && a < 5)
			{
				money = money / coins[i];
				sum += 1;

				a++;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
