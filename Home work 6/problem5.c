#include <stdio.h>

int main()

{


    int array[5][5];





    for(int i=0;i<4;i++){

        for(int j=0;j<5;j++){

            scanf("%d",&array[i][j]);

        }

    }





    int calculate=0;


    for(int i=0;i<4;i++){

        for(int j=0;j<5;j++){

            if(array[i][j]==0){

                calculate++;

            }

        }

    }





    printf("Zeros in the matrix is  %d", calculate);

    return 0;

}
