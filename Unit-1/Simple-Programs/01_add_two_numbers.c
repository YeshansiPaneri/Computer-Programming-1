/* Add two numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_add_two_numbers.c -o 01_add_two_numbers
 */
#include <stdio.h>
int main(void){double a,b; printf("Enter two numbers: "); if(scanf("%lf%lf",&a,&b)!=2)return 1; printf("Sum = %.2f\\n",a+b); return 0;}
