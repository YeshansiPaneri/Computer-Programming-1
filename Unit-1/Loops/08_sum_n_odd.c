/* Sum of first n odd numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 08_sum_n_odd.c -o 08_sum_n_odd
 */
#include <stdio.h>
int main(void){int n;long long s=0;scanf("%d",&n);for(int i=1;i<=n;i++)s+=2*i-1;printf("%lld\\n",s);}
