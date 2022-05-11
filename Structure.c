/*
#include<stdio.h>
struct student
{  
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct student s1 = {1,"Ani",90.80};//Here these are complie time initialisation.
    struct student s2 = {2,"Avi",90};
    printf("Info about s1:");
    printf("\n %d \t%s \t%f",s1.rollno,s1.name,s1.marks);
    printf("\nInfo about s2:");
    printf("\n %d \t%s\t%f",s2.rollno,s2.name,s2.marks);

}

#include<stdio.h>
struct student
{  
    int rollno;
    char name[20];
    float marks;
}s3={10,"Abhi",100};

void main()
{
    struct student s1 = {1,"Ani",90.80};//Here these are complie time initialisation.
    struct student s2;
    s2=s1;
    printf("Info about s1:");
    printf("\n %d \t%s \t%f",s1.rollno,s1.name,s1.marks);
    printf("\nInfo about s2:");
    printf("\n %d \t%s\t%f",s2.rollno,s2.name,s2.marks);
    printf("\nInfo about s3:");
    printf("\n %d \t%s\t%f",s3.rollno,s3.name,s3.marks);

}



#include<stdio.h>
struct student
{  
    int rollno;
    char name[20];
    float marks;
}s3={10,"Abhi",100};

void main()
{
    struct student s1 = {1,"Ani",90.80};//Here these are complie time initialisation.
    struct student s2;
    printf("Enter info about s2\n");
    scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);
    printf("Info about s1:");
    printf("\n %d \t%s \t%f",s1.rollno,s1.name,s1.marks);
    printf("\nInfo about s2:");
    printf("\n %d \t%s\t%f",s2.rollno,s2.name,s2.marks);
    printf("\nInfo about s3:");
    printf("\n %d \t%s\t%f",s3.rollno,s3.name,s3.marks);

}
*/
//typedef
#include<stdio.h>
typedef struct student
{  
    int rollno;
    char name[20];
    float marks;
}stu;

void main()
{
    stu s1 = {1,"Ani",90.80};//Here we not full name of structure(student) because in typedef we use short name.
    stu s2;
    //s2=s1;
    printf("Enter info about s2\n");
    scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);
    printf("Info about s1:");
    printf("\n %d \t%s \t%f",s1.rollno,s1.name,s1.marks);
    printf("\nInfo about s2:");
    printf("\n %d \t%s\t%f",s2.rollno,s2.name,s2.marks);
    // printf("\nInfo about s3:");
    // printf("\n %d \t%s\t%f",s3.rollno,s3.name,s3.marks);

}




