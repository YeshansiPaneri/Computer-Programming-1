/* Check prime number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 29_prime_check.c -o 29_prime_check
 */
#include <stdio.h>
int main(void){int n,prime=1;scanf("%d",&n);if(n<2)prime=0;for(int i=2;i*i<=n;i++)if(n%i==0){prime=0;break;}puts(prime?"Prime":"Not prime");}
