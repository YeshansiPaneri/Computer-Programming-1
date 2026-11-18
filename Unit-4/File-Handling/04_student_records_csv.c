/* Write roll number and name records to CSV (Excel-compatible)
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_student_records_csv.c -o 04_student_records_csv
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){FILE *f=fopen("students.csv","w");if(!f){perror("fopen");return 1;}fprintf(f,"RollNo,Name\\n");int roll;char name[100],again;do{printf("Roll number: ");if(scanf("%d",&roll)!=1)break;getchar();printf("Name: ");if(!fgets(name,sizeof name,stdin))break;name[strcspn(name,"\\n")]=0;for(int i=0;name[i];i++)if(name[i]==',')name[i]=' ';fprintf(f,"%d,%s\\n",roll,name);printf("Add another? (y/n): ");scanf(" %c",&again);getchar();}while(again=='y'||again=='Y');fclose(f);puts("Records saved in students.csv. Open this CSV file in MS Excel.");}
