/* Net sales after 10% discount
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 22_net_sales.c -o 22_net_sales
 */
#include <stdio.h>
int main(void){double g; scanf("%lf",&g); printf("Net sales=%.2f\\n",g-.10*g); return 0;}
