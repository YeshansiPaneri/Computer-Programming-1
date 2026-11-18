/* Sum digits of a number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 23_sum_digits.c -o 23_sum_digits
 */
#include <stdio.h>
int main(void){long long n;int s=0;scanf("%lld",&n);if(n<0)n=-n;while(n){s+=(int)(n%10);n/=10;}printf("%d\\n",s);}
