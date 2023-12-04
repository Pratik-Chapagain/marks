#include<stdio.h>
#include<conio.h>
int main()
{
    int marks,gm,am=0;
    printf("enter the marks of a student");
    scanf("%d",&marks);
    if (marks>=80)
    {am=marks*0.1;
    }
    gm=marks+am;
    printf("the gross marks of a student is %d",gm);

    return 0;

}