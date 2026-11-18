/* Print Fibonacci series using recursion
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 08_loop_using_recursion_fibonacci.c -o 08_loop_using_recursion_fibonacci
 */
#include <stdio.h>
long long fib(int n){return n<2?n:fib(n-1)+fib(n-2);}int main(void){int n;scanf("%d",&n);if(n<0||n>40)return 1;for(int i=0;i<n;i++)printf("%lld ",fib(i));puts("");}
