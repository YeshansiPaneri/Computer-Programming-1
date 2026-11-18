/* Toggle case of letters
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_toggle_case.c -o 04_toggle_case
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++){unsigned char c=(unsigned char)s[i];if(islower(c))s[i]=(char)toupper(c);else if(isupper(c))s[i]=(char)tolower(c);}puts(s);}
