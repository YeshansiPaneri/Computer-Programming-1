/* Insert at beginning
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 13_insert_beginning.c -o 13_insert_beginning
 */
#include <stdio.h>
int main(void){int a[101],n,x;scanf("%d",&n);if(n<0||n>=100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(int i=n;i>0;i--)a[i]=a[i-1];a[0]=x;for(int i=0;i<=n;i++)printf("%d ",a[i]);puts("");}
