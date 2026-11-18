/* Reverse an array of up to five values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 10_reverse_array.c -o 10_reverse_array
 */
#include <stdio.h>
int main(void){int n,a[5];scanf("%d",&n);if(n<1||n>5)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=n-1;i>=0;i--)printf("%d ",a[i]);puts("");}
