
#include <stdio.h>
#include<string.h>

typedef struct Student {
    int StudentId;
    char name[50];
    float CGPA;
    char Major[20]; 
}stdnt;

struct Student HighestGPA(stdnt st[]){
   
   
   
   for(int i=0;i<3;i++) 
     if(st[i].CGPA > st[0].CGPA)
      st[0] = st[i];
   
   
   return st[0];
}

int main(int argc, char **argv)
{
   
   stdnt st[20];
   for(int i=0;i<3;i++) {
   printf("enter %d Student id : " ,i);
   scanf("%d",&st[i].StudentId); getchar();
   printf("enter %d Student name : ",i );
   gets(st[i].name); 
   
   printf("enter %d Student cgpa : ",i );
   scanf("%f",&st[i].CGPA);getchar();
   
   printf("enter %d Student major : ",i );
   gets(st[i].Major);
  
   }
  
  stdnt st1 = HighestGPA(st); 
  
   printf("Highest Cgpa Holder : \n Name :");
   puts(st1.name);
   printf(" id : %d\n" , st1.StudentId);
   printf("Major: ");
   puts(st1.Major);
   printf("Cgpa : %.2f" , st1.CGPA);
   
   
	return 0;
}



