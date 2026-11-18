/* Function power(a,b)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_power_function.c -o 01_power_function
 */
#include <stdio.h>
double power(double a,int b){double r=1;int e=b<0?-b:b;for(int i=0;i<e;i++)r*=a;return b<0?1/r:r;} int main(void){double a;int b;scanf("%lf%d",&a,&b);if(a==0&&b<0){puts("Undefined");return 1;}printf("%.6f\\n",power(a,b));}
