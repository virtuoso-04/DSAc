#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    char name[50];
    int id;
    char dep[50];
    float sal;
};
void depsal(struct emp *ptr,int n);

void main()
{
    int i=0;
    struct emp *ptr;
    int n;
    printf("enter no of employees \n");
    scanf("%d",&n);
    ptr=(struct emp*)malloc (n*sizeof(struct emp));
    printf("enter the employee details");

    for( i=0;i<n;i++)
    {
        printf(" \n enter the name of the employee",i+1);
        scanf("%s",(ptr+i)->name);
        printf(" \n enter the employee id",i+1);
        scanf("%d",&(ptr+i)->id);
        printf(" \n enter the name of the depaertment",i+1);
        scanf("%s",(ptr+i)->dep);
        printf(" \n enter the salary of the emplouyee",i+1);
        scanf("%f",&(ptr+i)->sal);
    }

    printf("the employee details are ");
    for(i=0;i<n;i++)
    {
        printf("emplou=yee %d name is %s \n",i+1,(ptr+i)->name);
    }

}