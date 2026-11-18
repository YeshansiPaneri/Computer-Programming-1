/* Array implementation of stack (push, pop, peek, display)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_stack_operations.c -o 01_stack_operations
 */
#include <stdio.h>
#define N 100
int main(void){int s[N],top=-1,ch,x;do{printf("\\n1 Push 2 Pop 3 Peek 4 Display 0 Exit: ");scanf("%d",&ch);switch(ch){case 1:if(top==N-1)puts("Overflow");else{scanf("%d",&x);s[++top]=x;}break;case 2:if(top==-1)puts("Underflow");else printf("Popped %d\\n",s[top--]);break;case 3:if(top==-1)puts("Empty");else printf("%d\\n",s[top]);break;case 4:for(int i=top;i>=0;i--)printf("%d ",s[i]);puts("");break;}}while(ch!=0);return 0;}
