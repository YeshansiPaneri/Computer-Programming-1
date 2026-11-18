/* Swap using call by value (original values remain unchanged)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_call_by_value_swap.c -o 04_call_by_value_swap
 */
#include <stdio.h>
void swap(int a,int b){int t=a;a=b;b=t;printf("Inside function: %d %d\\n",a,b);} int main(void){int a,b;scanf("%d%d",&a,&b);swap(a,b);printf("In main: %d %d (unchanged)\\n",a,b);}
