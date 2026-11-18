/* Print characters vertically
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 10_vertical_characters.c -o 10_vertical_characters
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i]&&s[i]!='\\n';i++)printf("%c\\n",s[i]);}
