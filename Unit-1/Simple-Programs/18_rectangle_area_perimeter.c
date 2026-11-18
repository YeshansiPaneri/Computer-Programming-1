/* Area and perimeter of rectangle
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 18_rectangle_area_perimeter.c -o 18_rectangle_area_perimeter
 */
#include <stdio.h>
int main(void){double l,b; scanf("%lf%lf",&l,&b); printf("Area=%.2f\\nPerimeter=%.2f\\n",l*b,2*(l+b)); return 0;}
