/* Calculator using separate functions
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_function_calculator.c -o 06_function_calculator
 */
#include <stdio.h>
double add(double a,double b){return a+b;}double sub(double a,double b){return a-b;}double mul(double a,double b){return a*b;}double divide(double a,double b){return a/b;}int main(void){double a,b;char op;scanf("%lf %c %lf",&a,&op,&b);switch(op){case '+':printf("%g\\n",add(a,b));break;case '-':printf("%g\\n",sub(a,b));break;case '*':printf("%g\\n",mul(a,b));break;case '/':if(b==0)puts("Cannot divide by zero");else printf("%g\\n",divide(a,b));break;default:puts("Invalid operator");}}
