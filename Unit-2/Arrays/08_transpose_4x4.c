/* Transpose a 4x4 matrix
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 08_transpose_4x4.c -o 08_transpose_4x4
 */
#include <stdio.h>
int main(void){int a[4][4];for(int i=0;i<4;i++)for(int j=0;j<4;j++)scanf("%d",&a[i][j]);for(int i=0;i<4;i++){for(int j=0;j<4;j++)printf("%d ",a[j][i]);puts("");}}
