/* Largest and smallest in 3x3 matrix using pointer
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_min_max_matrix_pointer.c -o 03_min_max_matrix_pointer
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){int a[3][3],*p=&a[0][0],hi,lo;for(int i=0;i<9;i++)scanf("%d",p+i);hi=lo=*p;for(int i=1;i<9;i++){if(*(p+i)>hi)hi=*(p+i);if(*(p+i)<lo)lo=*(p+i);}printf("Largest=%d Smallest=%d\\n",hi,lo);}
