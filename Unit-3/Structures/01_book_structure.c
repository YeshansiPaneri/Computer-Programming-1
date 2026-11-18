/* Book structure: input and display one book
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 01_book_structure.c -o 01_book_structure
 */
#include <stdio.h>
#include <string.h>
struct Book{char title[80],author[80],isbn[30],publisher[80];int edition;double price;};int main(void){struct Book b;printf("Title: ");fgets(b.title,sizeof b.title,stdin);b.title[strcspn(b.title,"\\n")]=0;printf("Author: ");fgets(b.author,sizeof b.author,stdin);b.author[strcspn(b.author,"\\n")]=0;printf("Edition: ");scanf("%d",&b.edition);getchar();printf("ISBN: ");fgets(b.isbn,sizeof b.isbn,stdin);b.isbn[strcspn(b.isbn,"\\n")]=0;printf("Publisher: ");fgets(b.publisher,sizeof b.publisher,stdin);b.publisher[strcspn(b.publisher,"\\n")]=0;printf("Price: ");scanf("%lf",&b.price);printf("\\n%s | %s | %d | %s | %s | %.2f\\n",b.title,b.author,b.edition,b.isbn,b.publisher,b.price);}
