/* Compare bubble, selection and insertion sort
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_sorting_techniques_demo.c -o 04_sorting_techniques_demo
 */
#include <stdio.h>
void bubble(int a[],int n){for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}} void selection(int a[],int n){for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++)if(a[j]<a[m])m=j;int t=a[i];a[i]=a[m];a[m]=t;}} void insertion(int a[],int n){for(int i=1;i<n;i++){int x=a[i],j=i-1;while(j>=0&&a[j]>x){a[j+1]=a[j];j--;}a[j+1]=x;}} int main(void){int n,a[100],b[100],c[100];scanf("%d",&n);if(n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++)b[i]=c[i]=a[i];bubble(a,n);selection(b,n);insertion(c,n);printf("Bubble: ");for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\\nSelection: ");for(int i=0;i<n;i++)printf("%d ",b[i]);printf("\\nInsertion: ");for(int i=0;i<n;i++)printf("%d ",c[i]);puts("\\nAll are O(n^2) average/worst; insertion is often best for small or nearly sorted arrays.");}
