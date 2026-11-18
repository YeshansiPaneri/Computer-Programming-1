/* Convert string to lowercase
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_lowercase.c -o 02_lowercase
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)s[i]=(char)tolower((unsigned char)s[i]);puts(s);}
