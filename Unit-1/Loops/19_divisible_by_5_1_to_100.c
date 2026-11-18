/* Print integers 1 to 100 divisible by 5
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 19_divisible_by_5_1_to_100.c -o 19_divisible_by_5_1_to_100
 */
#include <stdio.h>
int main(void){for(int i=1;i<=100;i++)if(i%5==0)printf("%d ",i);puts("");}
