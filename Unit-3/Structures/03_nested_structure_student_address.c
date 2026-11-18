/* Nested structure for student permanent and temporary address
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 03_nested_structure_student_address.c -o 03_nested_structure_student_address
 */
#include <stdio.h>
#include <string.h>
struct Address{char line1[60],line2[60],city[40];long pin;};struct Student{int roll;char name[60];struct Address permanent,temporary;};void readAddress(struct Address *a){fgets(a->line1,sizeof a->line1,stdin);a->line1[strcspn(a->line1,"\\n")]=0;fgets(a->line2,sizeof a->line2,stdin);a->line2[strcspn(a->line2,"\\n")]=0;fgets(a->city,sizeof a->city,stdin);a->city[strcspn(a->city,"\\n")]=0;scanf("%ld",&a->pin);getchar();}void show(struct Address a){printf("%s, %s, %s - %ld\\n",a.line1,a.line2,a.city,a.pin);}int main(void){struct Student s;scanf("%d",&s.roll);getchar();fgets(s.name,sizeof s.name,stdin);s.name[strcspn(s.name,"\\n")]=0;readAddress(&s.permanent);readAddress(&s.temporary);printf("%d %s\\nPermanent: ",s.roll,s.name);show(s.permanent);printf("Temporary: ");show(s.temporary);}
