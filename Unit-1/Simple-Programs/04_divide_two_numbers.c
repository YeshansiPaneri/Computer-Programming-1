/* Divide two numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_divide_two_numbers.c -o 04_divide_two_numbers
 */
#include <stdio.h>
int main(void){double a,b; printf("Enter dividend and divisor: "); scanf("%lf%lf",&a,&b); if(b==0) puts("Division by zero is not allowed."); else printf("Quotient = %.2f\\n",a/b); return 0;}
