#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the min num of coins to make change for an amount of money
  * @argc: number of arguments main recieves
  * @argv: array of arguments main recieves
  * Return: 1 if unsuccessful or 0 for successful execution
  */

int main(int argc, char *argv[])
{
	int answer = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int init_amt;

	if (argc > 1)
		init_amt = atoi(argv[1]);
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	if (init_amt < 0)
		printf("0\n");
	else
	{
		while (init_amt > 0 && i < 5)
		{
			if (init_amt >= coins[i])
			{
				init_amt -= coins[i];
				answer++;
			}
			else
				i++;
		}
		printf("%d\n", answer);
	}

	return (0);
}
