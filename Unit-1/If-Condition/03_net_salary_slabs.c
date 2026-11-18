/* Net salary using gross salary slabs
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_net_salary_slabs.c -o 03_net_salary_slabs
 */
#include <stdio.h>
int main(void){double g,a,d;if(scanf("%lf",&g)!=1||g<0)return 1;if(g>10000){a=.10*g;d=.03*g;}else if(g>5000){a=.07*g;d=.02*g;}else{a=0;d=0;}printf("Allowance=%.2f Deduction=%.2f Net=%.2f\\n",a,d,g+a-d);return 0;}
