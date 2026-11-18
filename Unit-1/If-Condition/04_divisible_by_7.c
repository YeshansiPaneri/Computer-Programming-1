/* Check divisibility by 7
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_divisible_by_7.c -o 04_divisible_by_7
 */
#include <stdio.h>
int main(void){int n;scanf("%d",&n);puts(n%7==0?"Divisible by 7":"Not divisible by 7");return 0;}
