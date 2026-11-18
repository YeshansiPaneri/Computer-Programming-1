/* Sum 1 to n using recursion
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 07_loop_using_recursion_sum.c -o 07_loop_using_recursion_sum
 */
#include <stdio.h>
long long sum(int n){return n<=0?0:n+sum(n-1);}int main(void){int n;scanf("%d",&n);printf("%lld\\n",sum(n));}
