/* Frequency of each value in ten elements
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 11_frequency_10.c -o 11_frequency_10
 */
#include <stdio.h>
int main(void){int a[10],done[10]={0};for(int i=0;i<10;i++)scanf("%d",&a[i]);for(int i=0;i<10;i++)if(!done[i]){int c=0;for(int j=i;j<10;j++)if(a[i]==a[j]){c++;done[j]=1;}printf("%d occurs %d time(s)\\n",a[i],c);}}
