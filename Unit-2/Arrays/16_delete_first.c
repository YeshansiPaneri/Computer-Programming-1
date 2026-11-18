/* Delete first element
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 16_delete_first.c -o 16_delete_first
 */
#include <stdio.h>
int main(void){int a[100],n;scanf("%d",&n);if(n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=1;i<n;i++)a[i-1]=a[i];for(int i=0;i<n-1;i++)printf("%d ",a[i]);puts("");}
