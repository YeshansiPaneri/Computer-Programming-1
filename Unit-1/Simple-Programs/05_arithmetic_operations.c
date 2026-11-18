/* Add, subtract, multiply and divide
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_arithmetic_operations.c -o 05_arithmetic_operations
 */
#include <stdio.h>
int main(void){double a,b; scanf("%lf%lf",&a,&b); printf("Add=%.2f\\nSubtract=%.2f\\nMultiply=%.2f\\n",a+b,a-b,a*b); if(b)printf("Divide=%.2f\\n",a/b);else puts("Divide=undefined (zero divisor)"); return 0;}
