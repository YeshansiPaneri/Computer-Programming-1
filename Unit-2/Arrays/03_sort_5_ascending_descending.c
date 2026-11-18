/* Sort five values ascending or descending
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_sort_5_ascending_descending.c -o 03_sort_5_ascending_descending
 */
#include <stdio.h>
int main(void){int a[5],ch;for(int i=0;i<5;i++)scanf("%d",&a[i]);printf("1 Ascending, 2 Descending: ");scanf("%d",&ch);for(int i=0;i<5;i++)for(int j=i+1;j<5;j++)if((ch==1&&a[i]>a[j])||(ch==2&&a[i]<a[j])){int t=a[i];a[i]=a[j];a[j]=t;}for(int i=0;i<5;i++)printf("%d ",a[i]);puts("");}
