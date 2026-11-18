/* Copy five values into a ten-element array, leaving one skipped slot
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 09_copy_array_skip_one.c -o 09_copy_array_skip_one
 */
#include <stdio.h>
int main(void){int a[10]={0},k=0;for(int i=0;i<5;i++)scanf("%d",&a[i<2?i:i+1]);for(int i=0;i<10;i++)printf("%d ",a[i]);puts("");}
