/* Sum and mean of 10 values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 14_sum_mean_10_values.c -o 14_sum_mean_10_values
 */
#include <stdio.h>
int main(void){double x,s=0;for(int i=0;i<10;i++){scanf("%lf",&x);s+=x;}printf("Sum=%.2f Mean=%.2f\\n",s,s/10);}
