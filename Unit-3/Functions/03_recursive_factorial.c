/* Recursive factorial
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_recursive_factorial.c -o 03_recursive_factorial
 */
#include <stdio.h>
unsigned long long fact(unsigned int n){return n<2?1:n*fact(n-1);} int main(void){int n;scanf("%d",&n);if(n<0||n>20)return 1;printf("%llu\\n",fact((unsigned)n));}
