/* Count positive, negative and zero among 200 values
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 17_count_positive_negative_zero.c -o 17_count_positive_negative_zero
 */
#include <stdio.h>
int main(void){double x;int p=0,n=0,z=0;for(int i=0;i<200;i++){scanf("%lf",&x);if(x>0)p++;else if(x<0)n++;else z++;}printf("Positive=%d Negative=%d Zero=%d\\n",p,n,z);}
