#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
void delete();
void display();

// global array
int arr1[50],n,i,ele,p,ch;

       int main()
       {
        while(1)
        {
                        printf("\n1. create ");
                        printf("\n2. display");
                        printf("\n3. insert element into the array");
                        printf("\n4. delete element from the array ");
                        printf("\n5. exit");
                        printf("\n select the choice \n ");
                        scanf("%d",&ch);

                switch(ch)
                {
                        case 1:
                                create();
                                break;
                        case 2:
                                display();
                                break;
                        case 3:
                                insert();
                                break;
                        case 4:
                                delete();
                                break;
                        case 5:
                                exit(0);
                                break;
                        defaut:
                                printf("wrong choice");
                }
        }
}
void create()
{
        printf("enter the size of array \n ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("\n %d",&arr1[i]);
        }
}

void display()
{
    printf("the array elements are \n ");
        for(i=0;i<n;i++)
        {
                printf("%d\n",arr1[i]);
        }
}

void insert()
{
        printf("enter the element to be inserted ");
        scanf("%d",&ele);
        printf("enter the position at which to be inserted");
        scanf("%d",&p);

        for(i=n-1;i>=p-1;i--)
        {
                arr1[i+1]=arr1[i];
        }
        arr1[p-1]=ele;
        n++;
}
void delete()
{
           printf("enter the position at which to be deleted");
           scanf("%d",&p);
           for(i=p;i<=n;i++)
           {
                   arr1[i-1]=arr1[i];
           }
           n--;
}