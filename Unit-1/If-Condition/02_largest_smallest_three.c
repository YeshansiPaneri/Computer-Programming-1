/* Largest and smallest of three numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_largest_smallest_three.c -o 02_largest_smallest_three
 */
#include <stdio.h>
int main(void){double a,b,c,hi,lo;scanf("%lf%lf%lf",&a,&b,&c);hi=lo=a;if(b>hi)hi=b;if(c>hi)hi=c;if(b<lo)lo=b;if(c<lo)lo=c;printf("Largest=%.2f Smallest=%.2f\\n",hi,lo);return 0;}
