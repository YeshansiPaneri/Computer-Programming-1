/* Read and display a file line by line
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_read_file_line_by_line.c -o 03_read_file_line_by_line
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc,char **argv){if(argc!=2){printf("Usage: %s filename\\n",argv[0]);return 1;}FILE *f=fopen(argv[1],"r");if(!f){perror("fopen");return 1;}char line[500];while(fgets(line,sizeof line,f))fputs(line,stdout);fclose(f);}
