/* Largest and smallest among 100 numbers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 16_largest_smallest_100.c -o 16_largest_smallest_100
 */
#include <stdio.h>
int main(void){double x,hi,lo;for(int i=0;i<100;i++){scanf("%lf",&x);if(i==0)hi=lo=x;else{if(x>hi)hi=x;if(x<lo)lo=x;}}printf("Largest=%.2f Smallest=%.2f\\n",hi,lo);}
