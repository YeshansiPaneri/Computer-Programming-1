/* Calculate simple interest I = PRN/100
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 16_simple_interest.c -o 16_simple_interest
 */
#include <stdio.h>
int main(void){double p,r,n; printf("Enter principal, rate and time: "); scanf("%lf%lf%lf",&p,&r,&n); printf("Interest = %.2f\\n",p*r*n/100); return 0;}
