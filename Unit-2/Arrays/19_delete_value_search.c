/* Delete a value and search a value in an array
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 19_delete_value_search.c -o 19_delete_value_search
 */
#include <stdio.h>
int main(void){int a[100],n,x,found=0;scanf("%d",&n);if(n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(int i=0;i<n;i++)if(a[i]==x){found=1;for(int j=i+1;j<n;j++)a[j-1]=a[j];n--;break;}printf(found?"Deleted.\\n":"Not found.\\n");for(int i=0;i<n;i++)printf("%d ",a[i]);puts("");}
