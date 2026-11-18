/* Insert at end
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 15_insert_end.c -o 15_insert_end
 */
#include <stdio.h>
int main(void){int a[101],n,x;scanf("%d",&n);if(n<0||n>=100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);a[n++]=x;for(int i=0;i<n;i++)printf("%d ",a[i]);puts("");}
