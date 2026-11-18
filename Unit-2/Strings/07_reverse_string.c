/* Reverse a string
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 07_reverse_string.c -o 07_reverse_string
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);size_t n=strcspn(s,"\\n");for(size_t i=n;i>0;i--)putchar(s[i-1]);putchar('\\n');}
