/* Convert dollars into rupees (1 USD = Rs. 48 as given)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 08_dollars_to_rupees.c -o 08_dollars_to_rupees
 */
#include <stdio.h>
int main(void){double d; scanf("%lf",&d); printf("Rs. %.2f\\n",d*48); return 0;}
