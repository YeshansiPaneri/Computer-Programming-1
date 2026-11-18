/* Check automorphic number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 33_automorphic_number.c -o 33_automorphic_number
 */
#include <stdio.h>
int main(void){long long n,sq,p=1;scanf("%lld",&n);if(n<0)return 1;sq=n*n;for(long long t=n;t>0;t/=10)p*=10;puts(sq%p==n?"Automorphic":"Not automorphic");}
