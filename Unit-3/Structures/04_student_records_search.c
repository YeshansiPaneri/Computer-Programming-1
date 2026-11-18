/* Student records: print names and find by roll number
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 04_student_records_search.c -o 04_student_records_search
 */
#include <stdio.h>
#include <string.h>
struct Student{int roll;char name[60],course[60],major[60],minor[60];};int main(void){struct Student s[10];int n,key;scanf("%d",&n);if(n<1||n>10)return 1;for(int i=0;i<n;i++){scanf("%d",&s[i].roll);getchar();fgets(s[i].name,60,stdin);s[i].name[strcspn(s[i].name,"\\n")]=0;fgets(s[i].course,60,stdin);s[i].course[strcspn(s[i].course,"\\n")]=0;fgets(s[i].major,60,stdin);s[i].major[strcspn(s[i].major,"\\n")]=0;fgets(s[i].minor,60,stdin);s[i].minor[strcspn(s[i].minor,"\\n")]=0;}puts("Student names:");for(int i=0;i<n;i++)puts(s[i].name);scanf("%d",&key);for(int i=0;i<n;i++)if(s[i].roll==key){printf("%d %s %s %s %s\\n",s[i].roll,s[i].name,s[i].course,s[i].major,s[i].minor);return 0;}puts("Roll number not found");}
