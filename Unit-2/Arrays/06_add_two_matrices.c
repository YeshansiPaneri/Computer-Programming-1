/* Add two matrices
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_add_two_matrices.c -o 06_add_two_matrices
 */
#include <stdio.h>
int main(void){int r,c,a[20][20],b[20][20];scanf("%d%d",&r,&c);if(r<1||r>20||c<1||c>20)return 1;for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&b[i][j]);for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}}
