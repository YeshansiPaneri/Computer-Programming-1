/* Convert string to uppercase
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_uppercase.c -o 03_uppercase
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)s[i]=(char)toupper((unsigned char)s[i]);puts(s);}
