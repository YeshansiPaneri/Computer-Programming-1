/* Array of three books displayed through structure pointer
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 02_array_of_books_pointer.c -o 02_array_of_books_pointer
 */
#include <stdio.h>
#include <string.h>
struct Book{char title[80],author[80];int edition;double price;};void display(const struct Book *b){printf("%s | %s | %d | %.2f\\n",b->title,b->author,b->edition,b->price);}int main(void){struct Book b[3];for(int i=0;i<3;i++){printf("Book %d title: ",i+1);fgets(b[i].title,sizeof b[i].title,stdin);b[i].title[strcspn(b[i].title,"\\n")]=0;printf("Author: ");fgets(b[i].author,sizeof b[i].author,stdin);b[i].author[strcspn(b[i].author,"\\n")]=0;scanf("%d%lf",&b[i].edition,&b[i].price);getchar();}for(int i=0;i<3;i++)display(&b[i]);}
