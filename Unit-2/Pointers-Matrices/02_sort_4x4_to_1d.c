/* Sort 4x4 matrix into one-dimensional array
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_sort_4x4_to_1d.c -o 02_sort_4x4_to_1d
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){int a[16];for(int i=0;i<16;i++)scanf("%d",&a[i]);for(int i=0;i<16;i++)for(int j=i+1;j<16;j++)if(a[i]>a[j]){int t=a[i];a[i]=a[j];a[j]=t;}for(int i=0;i<16;i++)printf("%d ",a[i]);puts("");}
