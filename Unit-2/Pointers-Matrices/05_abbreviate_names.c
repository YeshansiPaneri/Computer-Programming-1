/* Abbreviate all names except last name
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_abbreviate_names.c -o 05_abbreviate_names
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[300],*tok[30];int n=0;fgets(s,sizeof s,stdin);for(char *p=strtok(s," \\t\\r\\n");p&&n<30;p=strtok(NULL," \\t\\r\\n"))tok[n++]=p;if(n==0)return 0;for(int i=0;i<n-1;i++)printf("%c. ",toupper((unsigned char)tok[i][0]));puts(tok[n-1]);}
