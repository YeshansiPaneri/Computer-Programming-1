/* Grade for three subjects; fail if any subject below 35
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_student_grade.c -o 06_student_grade
 */
#include <stdio.h>
int main(void){double a,b,c,avg,total;scanf("%lf%lf%lf",&a,&b,&c);total=a+b+c;avg=total/3;printf("Total=%.2f Average=%.2f\\n",total,avg);if(a<35||b<35||c<35)puts("Fail");else if(avg>=70)puts("Distinction");else if(avg>=60)puts("First class");else if(avg>=50)puts("Second class");else if(avg>=35)puts("Third class");else puts("Fail");return 0;}
