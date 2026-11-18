/* Print first n even numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_first_n_even.c -o 06_first_n_even
 */
#include <stdio.h>
int main(void){int n;scanf("%d",&n);for(int i=1;i<=n;i++)printf("%d ",2*i);puts("");}
