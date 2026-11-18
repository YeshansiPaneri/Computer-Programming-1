/* Accept and print three book names using array of pointers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_three_book_names_pointer_array.c -o 04_three_book_names_pointer_array
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char names[3][100];char *p[3];for(int i=0;i<3;i++){p[i]=names[i];fgets(p[i],sizeof names[i],stdin);p[i][strcspn(p[i],"\\n")]=0;}for(int i=0;i<3;i++)puts(p[i]);}
