/* Convert kilograms into grams
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 12_kg_to_grams.c -o 12_kg_to_grams
 */
#include <stdio.h>
int main(void){double kg; scanf("%lf",&kg); printf("%.2f grams\\n",kg*1000); return 0;}
