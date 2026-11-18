/* Check perfect number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 28_perfect_number.c -o 28_perfect_number
 */
#include <stdio.h>
int main(void){int n,s=0;scanf("%d",&n);for(int i=1;i<=n/2;i++)if(n%i==0)s+=i;puts(n>1&&s==n?"Perfect":"Not perfect");}
