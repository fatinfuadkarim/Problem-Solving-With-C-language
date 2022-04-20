#include<stdio.h>
int main()
{
    char str[30];
    int alpha=0 ,digit=0;
    printf("Enter the string : ");
    scanf("%s", str);
    printf("The string is : %s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(('a'<=str[i] && str[i]<='z') || ('A'<=str[i] && str[i]<='Z'))
           alpha=alpha+1;
        if('0'<=str[i] && str[i]<='9')
            digit=digit+1;
    }
   printf("\n No of alphabets = %d ",alpha);
   printf("\n No of digit = %d ",digit);
 return 0;
}
