/* Update max and min using pointers
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_call_by_reference_min_max.c -o 05_call_by_reference_min_max
 */
#include <stdio.h>
void minmax(int a[],int n,int *mn,int *mx){*mn=*mx=a[0];for(int i=1;i<n;i++){if(a[i]<*mn)*mn=a[i];if(a[i]>*mx)*mx=a[i];}} int main(void){int n,a[100],mn,mx;scanf("%d",&n);if(n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);minmax(a,n,&mn,&mx);printf("Min=%d Max=%d\\n",mn,mx);}
