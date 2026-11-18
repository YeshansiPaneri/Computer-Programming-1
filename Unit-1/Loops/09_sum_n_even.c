/* Sum of first n even numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 09_sum_n_even.c -o 09_sum_n_even
 */
#include <stdio.h>
int main(void){int n;long long s=0;scanf("%d",&n);for(int i=1;i<=n;i++)s+=2*i;printf("%lld\\n",s);}
