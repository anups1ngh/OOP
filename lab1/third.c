#include<stdio.h>
struct employee
{
    int id,age;
    char name[20];
    float salary;
}; 
 
int main()
{
    int n411,i;
    printf("Enter the number of employess \n");
    scanf("%d",&n411);
    struct employee s[n411];
    float da411,hra411,total411;
    printf("Enter the name,id,age,basic salary \n");
    for(i=0;i<n411;i++)
    {
    	printf("details of employee-%d\n",i+1);
        scanf(" %[^\n]",s[i].name);
        scanf(" %d",&s[i].id);
        scanf(" %d",&s[i].age);
        scanf(" %f",&s[i].salary);
    }
    for(i=0;i<n411;i++)
    {
    	printf("employee-%d\n",i+1);
        printf("name - %s\n", s[i].name);
        printf("id - %d\n", s[i].id);
        printf("age - %d\n", s[i].age);
        da411=0.8 * s[i].salary;
        hra411=0.1 * s[i].salary;
        total411= s[i].salary + da411 + hra411;
        printf("Gross salary - %.2f\n", total411);
        printf("\n");
    }
    return 0;
}