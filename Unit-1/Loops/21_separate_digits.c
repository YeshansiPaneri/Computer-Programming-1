/* Print digits in reverse order (right to left)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 21_separate_digits.c -o 21_separate_digits
 */
#include <stdio.h>
int main(void){long long n;scanf("%lld",&n);if(n<0)n=-n;if(n==0)printf("0");while(n){printf("%lld ",n%10);n/=10;}puts("");}
