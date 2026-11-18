/* Convert dollars into pounds (manual rates)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 10_dollars_to_pounds.c -o 10_dollars_to_pounds
 */
#include <stdio.h>
int main(void){double d; scanf("%lf",&d); printf("Pounds = %.2f\\n",d*48/70); return 0;}
