/* Print first n Fibonacci terms (1, 1, 2, ...)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 34_fibonacci_series.c -o 34_fibonacci_series
 */
#include <stdio.h>
int main(void){int n;long long a=1,b=1;scanf("%d",&n);for(int i=0;i<n;i++){printf("%lld ",a);long long c=a+b;a=b;b=c;}puts("");}
