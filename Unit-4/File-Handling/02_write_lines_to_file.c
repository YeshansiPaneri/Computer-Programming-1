/* Accept lines and write them to a text file
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_write_lines_to_file.c -o 02_write_lines_to_file
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc,char **argv){const char *name=argc>1?argv[1]:"output.txt";FILE *f=fopen(name,"w");if(!f){perror("fopen");return 1;}char line[500];puts("Enter lines (type . on a line by itself to finish):");while(fgets(line,sizeof line,stdin)){if(strcmp(line,".\\n")==0||strcmp(line,".")==0)break;fputs(line,f);}fclose(f);printf("Saved to %s\\n",name);}
