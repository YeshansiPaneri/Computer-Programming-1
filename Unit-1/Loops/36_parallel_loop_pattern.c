/* Parallel-loop pattern from manual (A)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 36_parallel_loop_pattern.c -o 36_parallel_loop_pattern
 */
#include <stdio.h>
int main(void){for(int i=1;i<=5;i++)printf("%d %d\\n",i,6-i);return 0;}
