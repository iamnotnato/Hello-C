#include <stdio.h>

#define MAX 10

int main(void)
{
int data[MAX];
int i,j,tmp;

/**
read in the data
*/
for (i = 0; i < MAX; i++)
{
printf("Enter item #%d: ",i);
scanf("%d",&data[i]);
}

printf("You entered the following items :\n");
for (i = 0; i < MAX; i++)
{
printf("item #%d: %d\n",i,data[i]);
}

/**
Simple Sort
*/
for (i = 0, i < MAX; i++) {
	for(j = 1; j < MAX; j++) {
		if (data[i] > data[j]) {
			tmp = data[i];
			data[i] = data[j];
			data[j] = tmp;
		}
	}
}

printf("\nSorted data:\n");
for(i = 0; i < MAX; i++)
{
	printf("item #%d: %d\n",i,data[i]);
}
return(0);
}
