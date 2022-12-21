#include <stdio.h>

int  values[4] = {0, 1, 2, 3};
char greetings[5] = {'h', 'e', 'l', 'l', 'o'};
char name[] = {'f', 'r', 'e', 'd'};
int bigarray[] = {[0] = 1, [1] = 10, [999] = 0};

/**
*Accessing Arrays
*/

int values[100];
values[23] = 911;
int j = values[23];
values[j] = 912;
