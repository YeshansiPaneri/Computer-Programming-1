/* Check palindrome string (case-insensitive, ignoring spaces)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 08_palindrome_string.c -o 08_palindrome_string
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500],t[500];fgets(s,sizeof s,stdin);int n=0;for(int i=0;s[i];i++)if(!isspace((unsigned char)s[i]))t[n++]=(char)tolower((unsigned char)s[i]);int ok=1;for(int i=0;i<n/2;i++)if(t[i]!=t[n-1-i])ok=0;puts(ok?"Palindrome":"Not palindrome");}
