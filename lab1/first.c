#include<stdio.h>
struct student
{
	char name411[20];
	int roll411;
	float marks411[5];
	
};
int main()
{ 
struct student s;
printf("enter the name of the student: ");
scanf("%[^\n]",s.name411);
printf("enter the roll no ");
scanf("%d",&s.roll411);
printf("engter the marks of 5 subjects\n");
for(int j=0;j<5;j++)
{
	printf("sub %d-",j+1);
	scanf("%f",&s.marks411[j]);
}

// display code 

printf("<==========>\n");
printf("display\n\na");
printf("name of student-%s\n",s.name411);
printf("roll no of student-%d\n",s.roll411);
for(int j=0;j<5;j++)
{
	printf("marks of sub %d-%.2f\n",j+1,s.marks411[j]);
}
return 0;
}