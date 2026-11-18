/* Bank customer balances, deposit and withdrawal
 * Based on Computer Programming 1 Lab Manual.
 * Standard C (C99); compile with: gcc 05_bank_customer_operations.c -o 05_bank_customer_operations
 */
#include <stdio.h>
#include <string.h>
struct Customer{int acc;char name[60];double balance;};int main(void){struct Customer c[10];int n,acc,code;double amount;scanf("%d",&n);if(n<1||n>10)return 1;for(int i=0;i<n;i++){scanf("%d",&c[i].acc);getchar();fgets(c[i].name,60,stdin);c[i].name[strcspn(c[i].name,"\\n")]=0;scanf("%lf",&c[i].balance);}puts("Accounts below Rs.100:");for(int i=0;i<n;i++)if(c[i].balance<100)printf("%d %s\\n",c[i].acc,c[i].name);scanf("%d%lf%d",&acc,&amount,&code);for(int i=0;i<n;i++)if(c[i].acc==acc){if(code==1)c[i].balance+=amount;else if(code==0){if(amount>c[i].balance)puts("The balance is insufficient for the specified withdrawal");else c[i].balance-=amount;}else puts("Invalid code");printf("New balance=%.2f\\n",c[i].balance);return 0;}puts("Account not found");}
