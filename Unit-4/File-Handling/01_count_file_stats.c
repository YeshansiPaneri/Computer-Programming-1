/* Count lines, words, characters and spaces in a text file
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_count_file_stats.c -o 01_count_file_stats
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc,char **argv){if(argc!=2){printf("Usage: %s filename\\n",argv[0]);return 1;}FILE *f=fopen(argv[1],"r");if(!f){perror("fopen");return 1;}int ch,inword=0;long lines=0,words=0,chars=0,spaces=0;while((ch=fgetc(f))!=EOF){chars++;if(ch=='\\n')lines++;if(ch==' ')spaces++;if(isspace((unsigned char)ch))inword=0;else if(!inword){words++;inword=1;}}if(chars>0){rewind(f);int last=0;while((ch=fgetc(f))!=EOF)last=ch;if(last!='\\n')lines++;}fclose(f);printf("Lines=%ld Words=%ld Characters=%ld Spaces=%ld\\n",lines,words,chars,spaces);}
