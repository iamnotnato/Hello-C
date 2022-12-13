#include <stdio.h>
/**
 * main - Entry Point
 * Description : A computational factorial
 * return : Always 0 (Success)
 */
int main(void)
{
int answer = 1;
int i;
for (i = 2; i <= 10; i++)
{
	answer = answer * i;
}
printf("Answer = %d\n", answer);
}
