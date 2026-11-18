/* Check Armstrong number (sum of digit cubes)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 26_armstrong_number.c -o 26_armstrong_number
 */
#include <stdio.h>
int main(void){int n,t,s=0;scanf("%d",&n);if(n<0){puts("Not Armstrong");return 0;}t=n;do{int d=t%10;s+=d*d*d;t/=10;}while(t);puts(s==n?"Armstrong":"Not Armstrong");}
