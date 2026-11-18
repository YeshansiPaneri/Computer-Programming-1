/* Sum and mean of n values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 15_sum_mean_n_values.c -o 15_sum_mean_n_values
 */
#include <stdio.h>
int main(void){int n;double x,s=0;scanf("%d",&n);if(n<=0)return 1;for(int i=0;i<n;i++){scanf("%lf",&x);s+=x;}printf("Sum=%.2f Mean=%.2f\\n",s,s/n);}
