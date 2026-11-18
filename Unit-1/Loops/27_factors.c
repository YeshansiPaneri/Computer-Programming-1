/* Print factors of a number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 27_factors.c -o 27_factors
 */
#include <stdio.h>
int main(void){int n;scanf("%d",&n);if(n<=0)return 1;for(int i=1;i<=n;i++)if(n%i==0)printf("%d ",i);puts("");}
