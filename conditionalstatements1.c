#include<stdio.h>
int main()
{
int marks;
printf("Enter the marks: \n");
scanf("%d",&marks);
if(marks>=85 && marks<=100)
{
printf("Grade A");
}
else if(marks>=75 && marks<=84)
{
printf("Grade B");
}
else if(marks>=65 && marks<=74)
{
printf("Grade C");
}
else if(marks>=55 && marks<=64)
{
printf("Grade D");
}
else if(marks>=50 && marks<=54)
{
printf("Grade E");
}
else 
{
printf("Grade F");
}
}
