/* Delete at 1-based position
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 17_delete_position.c -o 17_delete_position
 */
#include <stdio.h>
int main(void){int a[100],n,p;scanf("%d",&n);if(n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&p);if(p<1||p>n)return 1;for(int i=p;i<n;i++)a[i-1]=a[i];for(int i=0;i<n-1;i++)printf("%d ",a[i]);puts("");}
