/* Sum integers 1 to 100 divisible by 3
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 20_sum_divisible_by_3.c -o 20_sum_divisible_by_3
 */
#include <stdio.h>
int main(void){int s=0;for(int i=1;i<=100;i++)if(i%3==0)s+=i;printf("%d\\n",s);}
