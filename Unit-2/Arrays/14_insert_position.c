/* Insert at a 1-based position
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 14_insert_position.c -o 14_insert_position
 */
#include <stdio.h>
int main(void){int a[101],n,x,p;scanf("%d",&n);if(n<0||n>=100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d%d",&p,&x);if(p<1||p>n+1)return 1;for(int i=n;i>=p;i--)a[i]=a[i-1];a[p-1]=x;for(int i=0;i<=n;i++)printf("%d ",a[i]);puts("");}
