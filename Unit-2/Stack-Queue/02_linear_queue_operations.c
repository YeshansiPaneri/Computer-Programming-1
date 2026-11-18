/* Array implementation of linear queue
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_linear_queue_operations.c -o 02_linear_queue_operations
 */
#include <stdio.h>
#define N 100
int main(void){int q[N],f=-1,r=-1,ch,x;do{printf("\\n1 Insert 2 Delete 3 Display 0 Exit: ");scanf("%d",&ch);if(ch==1){if(r==N-1)puts("Overflow");else{scanf("%d",&x);if(f==-1)f=0;q[++r]=x;}}else if(ch==2){if(f==-1)puts("Underflow");else{printf("Deleted %d\\n",q[f++]);if(f>r)f=r=-1;}}else if(ch==3){if(f==-1)puts("Empty");else{for(int i=f;i<=r;i++)printf("%d ",q[i]);puts("");}}}while(ch!=0);return 0;}
