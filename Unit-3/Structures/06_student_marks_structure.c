/* Student structure with subject marks and total
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 06_student_marks_structure.c -o 06_student_marks_structure
 */
#include <stdio.h>
#include <string.h>
struct Student{int roll;char name[60];float physics,maths,chemistry,total;};int main(void){struct Student s;scanf("%d",&s.roll);getchar();fgets(s.name,sizeof s.name,stdin);s.name[strcspn(s.name,"\\n")]=0;scanf("%f%f%f",&s.physics,&s.maths,&s.chemistry);s.total=s.physics+s.maths+s.chemistry;printf("%d %s\\nPhysics %.2f Maths %.2f Chemistry %.2f\\nTotal %.2f\\n",s.roll,s.name,s.physics,s.maths,s.chemistry,s.total);}
