/* Concatenate two strings
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 09_concatenate_strings.c -o 09_concatenate_strings
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char a[500],b[250];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);a[strcspn(a,"\\n")]=0;b[strcspn(b,"\\n")]=0;if(strlen(a)+strlen(b)<sizeof a)strcat(a,b);puts(a);}
