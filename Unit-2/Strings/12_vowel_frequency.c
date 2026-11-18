/* Frequency of each vowel
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 12_vowel_frequency.c -o 12_vowel_frequency
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[1000];int c[5]={0};fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)switch(tolower((unsigned char)s[i])){case 'a':c[0]++;break;case 'e':c[1]++;break;case 'i':c[2]++;break;case 'o':c[3]++;break;case 'u':c[4]++;}printf("a=%d e=%d i=%d o=%d u=%d\\n",c[0],c[1],c[2],c[3],c[4]);}
