/* Print first n odd numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_first_n_odd.c -o 05_first_n_odd
 */
#include <stdio.h>
int main(void){int n;scanf("%d",&n);for(int i=1;i<=n;i++)printf("%d ",2*i-1);puts("");}
