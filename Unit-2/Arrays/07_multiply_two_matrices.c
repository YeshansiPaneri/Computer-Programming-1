/* Multiply two matrices
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 07_multiply_two_matrices.c -o 07_multiply_two_matrices
 */
#include <stdio.h>
int main(void){int r1,c1,r2,c2,a[20][20],b[20][20],z[20][20]={0};scanf("%d%d%d%d",&r1,&c1,&r2,&c2);if(r1<1||r1>20||c1<1||c1>20||r2<1||r2>20||c2<1||c2>20||c1!=r2){puts("Invalid dimensions");return 1;}for(int i=0;i<r1;i++)for(int j=0;j<c1;j++)scanf("%d",&a[i][j]);for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)scanf("%d",&b[i][j]);for(int i=0;i<r1;i++)for(int j=0;j<c2;j++)for(int k=0;k<c1;k++)z[i][j]+=a[i][k]*b[k][j];for(int i=0;i<r1;i++){for(int j=0;j<c2;j++)printf("%d ",z[i][j]);puts("");}}
