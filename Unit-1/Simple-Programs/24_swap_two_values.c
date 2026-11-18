/* Swap two values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 24_swap_two_values.c -o 24_swap_two_values
 */
#include <stdio.h>
int main(void){double a,b,t; scanf("%lf%lf",&a,&b); t=a;a=b;b=t; printf("After swap: %.2f %.2f\\n",a,b); return 0;}
