/* Print name five times
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 11_print_name_5_times.c -o 11_print_name_5_times
 */
#include <stdio.h>
int main(void){char name[100];scanf(" %99[^\\n]",name);for(int i=0;i<5;i++)puts(name);}
