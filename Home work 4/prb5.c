#include <stdio.h>
#include <conio.h>

int main(){
    int N, facto, count;
    printf("Enter a number for find the factorial :");
    scanf("%d",&N);

    for(count = 1, facto = 1; count <= N; count++){
        facto = facto * count;
    }
    printf("Factorial of %d is : %d", N, facto);

    return 0;
}
