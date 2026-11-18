/* Count boys and girls in 50 students (enter B/G)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 18_count_boys_girls.c -o 18_count_boys_girls
 */
#include <stdio.h>
int main(void){char s;int b=0,g=0;for(int i=0;i<50;i++){scanf(" %c",&s);if(s=='B'||s=='b')b++;else if(s=='G'||s=='g')g++;else{puts("Invalid code; enter B or G.");i--;}}printf("Boys=%d Girls=%d\\n",b,g);}
