/* Print name n times
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 12_print_name_n_times.c -o 12_print_name_n_times
 */
#include <stdio.h>
int main(void){char name[100];int n;scanf("%d",&n);scanf(" %99[^\\n]",name);for(int i=0;i<n;i++)puts(name);}
