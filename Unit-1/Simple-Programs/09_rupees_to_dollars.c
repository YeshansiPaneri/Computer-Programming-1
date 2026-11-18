/* Convert rupees into dollars (1 USD = Rs. 48 as given)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 09_rupees_to_dollars.c -o 09_rupees_to_dollars
 */
#include <stdio.h>
int main(void){double r; scanf("%lf",&r); printf("USD %.2f\\n",r/48); return 0;}
