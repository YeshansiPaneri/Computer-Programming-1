/* Sum numbers divisible by 13 from 1 to 100
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 13_sum_divisible_by_13.c -o 13_sum_divisible_by_13
 */
#include <stdio.h>
int main(void){int s=0;for(int i=1;i<=100;i++)if(i%13==0)s+=i;printf("%d\\n",s);}
