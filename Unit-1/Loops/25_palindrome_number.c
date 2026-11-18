/* Check palindrome number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 25_palindrome_number.c -o 25_palindrome_number
 */
#include <stdio.h>
int main(void){long long n,t,r=0;scanf("%lld",&n);if(n<0){puts("Not palindrome");return 0;}t=n;do{r=r*10+t%10;t/=10;}while(t);puts(r==n?"Palindrome":"Not palindrome");}
