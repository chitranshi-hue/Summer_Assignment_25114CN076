#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\nStudent Records\n");
    printf("----------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("Roll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("----------------------------\n");
    }
}

int main()
{
    struct Student s[100];
    int n,i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    display(s,n);

    return 0;
}