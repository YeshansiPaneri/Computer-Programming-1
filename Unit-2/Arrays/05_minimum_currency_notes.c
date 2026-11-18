/* Minimum notes using denominations 500,200,100,50,20,10,5,2,1
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_minimum_currency_notes.c -o 05_minimum_currency_notes
 */
#include <stdio.h>
int main(void){int n,d[]={500,200,100,50,20,10,5,2,1};scanf("%d",&n);if(n<0)return 1;for(int i=0;i<9;i++){printf("%d note(s) of %d\\n",n/d[i],d[i]);n%=d[i];}}
