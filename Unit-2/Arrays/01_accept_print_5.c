/* Accept and print five values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_accept_print_5.c -o 01_accept_print_5
 */
#include <stdio.h>
int main(void){int a[5];for(int i=0;i<5;i++)scanf("%d",&a[i]);for(int i=0;i<5;i++)printf("%d ",a[i]);puts("");}
