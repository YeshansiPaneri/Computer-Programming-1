/* Shift ten values left or right by n positions; fill with zero
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 12_shift_array.c -o 12_shift_array
 */
#include <stdio.h>
int main(void){int a[10],b[10]={0},n,d;for(int i=0;i<10;i++)scanf("%d",&a[i]);scanf("%d%d",&n,&d);if(n<0)n=0;if(n>10)n=10;for(int i=0;i<10;i++){int j=d==1?i-n:i+n;if(j>=0&&j<10)b[j]=a[i];}for(int i=0;i<10;i++)printf("%d ",b[i]);puts("");}
