#include <stdio.h>
struct info
{
    char name[50];
    char degree[50];
    char occupation[50];
    int age,salary;
};
int main()
{
    struct info father,mother,sister;
    gets(father.name);
    gets(father.degree);
    gets(father.occupation);
    scanf("%d %d",&father.age,&father.salary);


    printf("name:%s\n",father.name);
    printf("degree:%s\n",father.degree);
    printf("occupation:%s\n",father.occupation);
    printf("age salary:%d %d\n",father.age,father.salary);
    return 0;
}
