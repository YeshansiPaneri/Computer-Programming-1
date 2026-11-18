/* Largest and smallest of two numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_largest_smallest_two.c -o 01_largest_smallest_two
 */
#include <stdio.h>
int main(void){double a,b;scanf("%lf%lf",&a,&b);if(a>b)printf("Largest=%.2f Smallest=%.2f\\n",a,b);else printf("Largest=%.2f Smallest=%.2f\\n",b,a);return 0;}
