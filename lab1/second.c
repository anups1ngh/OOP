#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	float marks[5],total,percentage;
	
};
void display(struct student s[],int n,int a)
{
	int check=0;
  for(int i=0;i<n;i++)
 {
 	check=0;
 	if(s[i].roll==a)
 	{
 		printf("name of student- %s\n",s[i].name);
        printf("roll no of student- %d\n",s[i].roll);
        for(int j=0;j<5;j++)
        {
	          printf("marks of sub %d-%.2f\n",j+1,s[i].marks[j]);
            }
            printf("total marks and percentage are %.2f,%.2f",s[i].total,s[i].percentage);
          check=1;  
	 }
	
 }    
    if(check==0)
     {
 
		printf("student details not found");
     }
	
	
}
void sort(struct student s[],int n)
{
	int min;
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(s[j].total<s[min].total)
			{
			   min=j;
			}	
		}
		struct student temp;
		temp=s[i];
		s[i]=s[min];
		s[min]=temp;
		
		
		
	}
	for(int i=0;i<n;i++)
	{
		
	
              printf("\nname of student- %s\n",s[i].name);
             printf("roll no of student- %d\n",s[i].roll);
                 for(int j=0;j<5;j++)
                     {
                         	printf("marks of sub %d-%.2f\n",j+1,s[i].marks[j]);
                     }
	
}


}

void find(struct student s[],int n,float lower,float upper)
{
	int check=0;
	for(int i=0;i<n;i++)
 {
 	check=0;
 	if(s[i].percentage>=lower&&s[i].percentage<=upper)
 	{
 		printf("name of student- %s\n",s[i].name);
        printf("roll no of student- %d\n",s[i].roll);
        for(int j=0;j<5;j++)
        {
	          printf("marks of sub %d-%.2f\n",j+1,s[i].marks[j]);
            }
            printf("total marks and percentage are %.2f,%.2f\n",s[i].total,s[i].percentage);
	 
	check=1;
 }	
}
if(check==0)
{
	printf("students details not found");
}
 
}

void calc(struct student s[],int n)
{

	for(int i=0;i<n;i++)
	{
		int sum=0;
	for(int j=0;j<5;j++)
	{
    	sum=sum+s[i].marks[j];
    	s[i].total=sum;
    	
   	}  printf("total marks of student %d-%.2f\t",i+1,s[i].total);
   	s[i].percentage=(s[i].total)/5;
   	printf("and\tpercentage of the student is %.2f %\n",s[i].percentage);
 
}

	
}


int main()
{ 
	int n411,ro411;
    float lo411,up411;
    printf("enter the no of students details to be entered ");
	scanf("%d",&n411);
  struct student s[n411];
for(int i=0;i<n411;i++)
{
	printf("enter the name of the student ");
	scanf(" %[^\n]",s[i].name);
	printf("enter the roll no ");
	scanf("%d",&s[i].roll);
	printf("enter the marks of 5 subjects\n");
		for(int j=0;j<5;j++)
		{
			printf("sub %d-",j+1);
			scanf("%f",&s[i].marks[j]);
		}

}
	calc(s,n411);
	printf("enter the roll no of the student whose details you want to check\t");
	scanf("%d",&ro411);
	display(s,n411,ro411);
	printf("\n");
	printf("enter the range of percentage between whose students details you want to check\n");
	printf("enter lower range ");
	scanf("%f",&lo411);
	printf("enter upper range ");
	scanf(" %f",&up411);
	find(s,n411,lo411,up411);
	printf("\n##SORTING");
	sort(s,n411);

return 0;
}