/* Loop-within-loop pattern A
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 35_nested_loop_pattern_a.c -o 35_nested_loop_pattern_a
 */
#include <stdio.h>
int main(void){for(int i=1;i<=2;i++)for(int j=1;j<=3;j++)printf("%d %d\\n",i,j);}
