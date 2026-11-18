/* Array implementation of circular queue
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_circular_queue_operations.c -o 03_circular_queue_operations
 */
#include <stdio.h>
#define N 10
int main(void){int q[N],f=-1,r=-1,ch,x;do{printf("\\n1 Insert 2 Delete 3 Display 0 Exit: ");scanf("%d",&ch);if(ch==1){if((r+1)%N==f)puts("Overflow");else{scanf("%d",&x);if(f==-1)f=0;r=(r+1)%N;q[r]=x;}}else if(ch==2){if(f==-1)puts("Underflow");else{printf("Deleted %d\\n",q[f]);if(f==r)f=r=-1;else f=(f+1)%N;}}else if(ch==3){if(f==-1)puts("Empty");else{int i=f;while(1){printf("%d ",q[i]);if(i==r)break;i=(i+1)%N;}puts("");}}}while(ch!=0);return 0;}
