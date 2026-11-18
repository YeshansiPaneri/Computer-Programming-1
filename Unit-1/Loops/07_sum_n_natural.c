/* Sum of first n natural numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 07_sum_n_natural.c -o 07_sum_n_natural
 */
#include <stdio.h>
int main(void){int n;long long s=0;scanf("%d",&n);for(int i=1;i<=n;i++)s+=i;printf("%lld\\n",s);}
