/* Print 4th, 7th and 9th values of ten
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_print_4th_7th_9th.c -o 02_print_4th_7th_9th
 */
#include <stdio.h>
int main(void){int a[10];for(int i=0;i<10;i++)scanf("%d",&a[i]);printf("%d %d %d\\n",a[3],a[6],a[8]);}
