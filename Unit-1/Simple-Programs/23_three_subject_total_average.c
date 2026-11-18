/* Total and average of three subjects
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 23_three_subject_total_average.c -o 23_three_subject_total_average
 */
#include <stdio.h>
int main(void){double a,b,c; scanf("%lf%lf%lf",&a,&b,&c); printf("Total=%.2f\\nAverage=%.2f\\n",a+b+c,(a+b+c)/3); return 0;}
