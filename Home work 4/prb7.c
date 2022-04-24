#include <stdio.h>
int main()
{

    int n1, n2;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);

    int temp;
    if(n1>n2)
    {
        temp=n2;
        n2=n1;
        n1=temp;
    }

    int i=0;
    int count=0;
    for(i=n1+1;i<n2;i++)
    {

        if(i%3==0&&i%5!=0)
        {
            count++;
        }
    }

    printf("%d numbers",count);
}
