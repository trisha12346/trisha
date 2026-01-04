#include<stdio.h>

struct studentMarks
{
    char name[50];
    int rollNo;
    int marks[5];
    float percentage;
    int total;

};

int main()
{
    struct studentMarks s[50];
    int i,student,j;

    printf("\nEnter the number of students : ");
    scanf("%d",&student);

    
    for(i=0;i<student;i++)
    {
        s[i].total=0;
        printf("\nEnter the details of students: %d",i+1);
        printf("\nEnter the name : ");
        scanf("%s",s[i].name);
        printf("\nEnter the roll no : ");
        scanf("%d",&s[i].rollNo);
        for(j=0;j<5;j++)
        {
            printf("\nEnter the marks of subject %d :",j+1);
            scanf("%d",&s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total/5.0;
    }


    for (i = 0; i < student; i++)
    {
        printf("\n\nStudent %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].rollNo);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);

        if(s[i].percentage>=90)
        {
            printf("your grade is A+");
        }else if(s[i].percentage>=80)
        {
            printf("\nYour grade is A");
        }else if(s[i].percentage>=70)
        {
            printf("\nYour grade is B+");
        }else if(s[i].percentage>=60)
        {
            printf("\nYour grade is B");
        }else if(s[i].percentage>=50)
        {
            printf("\nYour grade is C+");
        }else if(s[i].percentage>=40)
        {
            printf("\nYour grade is C");
        }else
        {
            printf("\nBetter luck next time");
        }
    }   
}
