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

/**
 * Multidemensional arrays
 */

int values [2][2];
int values [2][2] = {{0, 1} , {1, 0}};
int values [2][2] = {0, 1, 1, 0};

/**
Accessing multidemnsional arrays
*/

int i = values [2][3];
values[0][2] = 1000;


/**
 * fopen() : open text and binary files for read/write.
 * fclose() : close files when finished.
 * errno - Globally defined external integer that is set to the last error code.
 * include <errno.h>
 * ferror() : returns errno for file operations.
 * perror() : handy output function for printing textual description of error
 * fscanf() : only input comes from file
 * fgetc() : read text file, one character at a time.
 * fgets() : read text file , one line at a time.
 * fprintf(): only output goes to file.
 * fputc() : write to text file , one character at a time.
 * fputs() : write to text file, one line at a time.
*/
