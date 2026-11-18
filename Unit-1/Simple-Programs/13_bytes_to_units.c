/* Convert bytes into KB, MB and GB
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 13_bytes_to_units.c -o 13_bytes_to_units
 */
#include <stdio.h>
int main(void){double b; scanf("%lf",&b); printf("KB = %.6f\\nMB = %.9f\\nGB = %.12f\\n",b/1024,b/(1024.0*1024),b/(1024.0*1024*1024)); return 0;}
