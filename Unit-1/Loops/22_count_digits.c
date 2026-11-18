/* Count digits in a number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 22_count_digits.c -o 22_count_digits
 */
#include <stdio.h>
int main(void){long long n;int c=0;scanf("%lld",&n);if(n<0)n=-n;do{c++;n/=10;}while(n);printf("%d\\n",c);}
