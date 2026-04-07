/*
This is a smaller/simple c program where the user inputs the number of students and there names and then grades
and then the code gives the average grade by adding all the grades(numbers) and dividing it by the number of students and that quoteint is the average.
Antonio Rivera
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char names[50][50];
    int Students=0;
    float grades[50];
    float sum=0;
    float avg;
    
    printf("Please enter the number of Students:");
    scanf("%d",&Students);
    printf("\n");
    
    if(Students<1||Students>50)
    {
        printf("Invalid needs to more then 1 but max of 50\n");
        return 1;
    }
    
    for(int i=0;i<Students;i++)
    {
        
        printf("Enter name of Student %d",i+1);
        scanf("%s",&names[i]);
        printf("\n");
        
        printf("Enter grade of %s:", names[i]);
        scanf("%f",&grades[i]);
        sum+=grades[i];
    }
    avg=sum/Students;
    
    printf("\nStudent grades\n");
    
    for(int i=0;i<Students;i++)
    {
        
        printf("%s:%.2f\n",names[i],grades[i]);
    }
    
    printf("\nAverage grade: %.2f\n",avg);

    return 0;
}
