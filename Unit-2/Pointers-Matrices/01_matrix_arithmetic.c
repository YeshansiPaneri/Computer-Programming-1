/* Addition, subtraction and multiplication of two matrices
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_matrix_arithmetic.c -o 01_matrix_arithmetic
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){int r,c,a[10][10],b[10][10];scanf("%d%d",&r,&c);if(r<1||r>10||c<1||c>10)return 1;for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&b[i][j]);puts("Addition:");for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}puts("Subtraction:");for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]-b[i][j]);puts("");}if(r==c){int z[10][10]={0};for(int i=0;i<r;i++)for(int j=0;j<c;j++)for(int k=0;k<c;k++)z[i][j]+=a[i][k]*b[k][j];puts("Multiplication:");for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",z[i][j]);puts("");}}else puts("Multiplication requires compatible dimensions; for these same-size matrices they must be square.");}
