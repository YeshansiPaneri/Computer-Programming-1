/* Copy one string to another
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_copy_string.c -o 05_copy_string
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char a[500],b[500];fgets(a,sizeof a,stdin);strcpy(b,a);printf("%s",b);}
