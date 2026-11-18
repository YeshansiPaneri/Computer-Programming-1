/* Find length of a string
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_string_length.c -o 01_string_length
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);s[strcspn(s,"\\n")]=0;printf("%zu\\n",strlen(s));}
