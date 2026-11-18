/* Compare two strings lexicographically
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_compare_strings.c -o 06_compare_strings
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char a[300],b[300];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);a[strcspn(a,"\\n")]=0;b[strcspn(b,"\\n")]=0;int c=strcmp(a,b);puts(c==0?"Both strings are same":c>0?"First string is greater":"Second string is greater");}
