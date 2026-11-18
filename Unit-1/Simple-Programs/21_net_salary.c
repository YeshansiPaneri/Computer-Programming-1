/* Net salary with 10% allowance and 3% deduction
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 21_net_salary.c -o 21_net_salary
 */
#include <stdio.h>
int main(void){double g,a,d; scanf("%lf",&g); a=.10*g; d=.03*g; printf("Allowance=%.2f\\nDeduction=%.2f\\nNet salary=%.2f\\n",a,d,g+a-d); return 0;}
