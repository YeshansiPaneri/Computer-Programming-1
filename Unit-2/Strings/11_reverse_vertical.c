/* Print reversed string vertically
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 11_reverse_vertical.c -o 11_reverse_vertical
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[500];fgets(s,sizeof s,stdin);int n=(int)strcspn(s,"\\n");for(int i=n-1;i>=0;i--)printf("%c\\n",s[i]);}
