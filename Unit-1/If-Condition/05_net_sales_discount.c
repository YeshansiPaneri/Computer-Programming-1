/* Net sales with discount slabs
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_net_sales_discount.c -o 05_net_sales_discount
 */
#include <stdio.h>
int main(void){double g,d;scanf("%lf",&g);if(g>20000)d=.15*g;else if(g>10000)d=.10*g;else d=.05*g;printf("Discount=%.2f Net sales=%.2f\\n",d,g-d);return 0;}
