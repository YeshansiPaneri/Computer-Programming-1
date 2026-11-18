/* Sum primes between 1 and 500
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 31_sum_primes_1_to_500.c -o 31_sum_primes_1_to_500
 */
#include <stdio.h>
int main(void){int s=0;for(int n=2;n<=500;n++){int p=1;for(int d=2;d*d<=n;d++)if(n%d==0){p=0;break;}if(p)s+=n;}printf("%d\\n",s);}
