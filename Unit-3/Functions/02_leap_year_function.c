/* Leap year function
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_leap_year_function.c -o 02_leap_year_function
 */
#include <stdio.h>
int leap(int y){return y%400==0||(y%4==0&&y%100!=0);} int main(void){int y;scanf("%d",&y);puts(leap(y)?"Leap year":"Not a leap year");}
