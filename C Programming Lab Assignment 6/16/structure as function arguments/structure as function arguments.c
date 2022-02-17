#include <stdio.h>
struct date
{
    int date,month,year;
};
struct Books
{
    char title[50],author[50],subject[50];
    int book_id;
    struct date;
}emp1;
void printbook(struct Books book);
int main()
{
    struct Books book1;
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"Ahmed Imteaj");
    strcpy(book1.subject,"Programming");
    book1.book_id=256161;
    emp1.date=27;
    emp1.month=02;
    emp1.year=2018;
    printbook(book1);
}
void printbook(struct Books book)
{
    printf("%s\n",book.title);
    printf("%s\n",book.author);
    printf("%s\n",book.subject);
    printf("%d\n",book.book_id);
    printf("%d %d %d\n",emp1.date,emp1.month,emp1.year);
}
