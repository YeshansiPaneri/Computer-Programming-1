/* Convert grams into kilograms
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 11_grams_to_kg.c -o 11_grams_to_kg
 */
#include <stdio.h>
int main(void){double g; scanf("%lf",&g); printf("%.3f kg\\n",g/1000); return 0;}
