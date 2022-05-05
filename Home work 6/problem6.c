#include <stdio.h>

int main()

{


    int calculate[5][5];




    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            scanf("%d",&calculate[i][j]);

        }

    }




    int add=0;



    for(int i=0;i<5;i++){

        for(int j=i;j<5;j++){

            if(i==j){

                add+=calculate[i][j];

                break;

            }

        }

    }





    printf("Sum of the diagonal elements matrix is  %d", add);

    return 0;

}
