/* Reverse digits of a number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 24_reverse_digits.c -o 24_reverse_digits
 */
#include <stdio.h>
int main(void){long long n,r=0;scanf("%lld",&n);int sign=n<0?-1:1;if(n<0)n=-n;while(n){r=r*10+n%10;n/=10;}printf("%lld\\n",r*sign);}
