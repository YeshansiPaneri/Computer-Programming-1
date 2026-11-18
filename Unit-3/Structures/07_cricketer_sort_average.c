/* Sort ten cricketer records by average runs ascending
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 07_cricketer_sort_average.c -o 07_cricketer_sort_average
 */
#include <stdio.h>
#include <string.h>
struct Player{char name[60];int age,tests;float average;};int main(void){struct Player p[10],t;for(int i=0;i<10;i++){fgets(p[i].name,60,stdin);p[i].name[strcspn(p[i].name,"\\n")]=0;scanf("%d%d%f",&p[i].age,&p[i].tests,&p[i].average);getchar();}for(int i=0;i<10;i++)for(int j=i+1;j<10;j++)if(p[i].average>p[j].average){t=p[i];p[i]=p[j];p[j]=t;}for(int i=0;i<10;i++)printf("%s age=%d tests=%d average=%.2f\\n",p[i].name,p[i].age,p[i].tests,p[i].average);}
