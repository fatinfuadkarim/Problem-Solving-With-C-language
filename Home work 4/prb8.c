#include<stdio.h>

void rec(int n){
    if(n<=0)return;
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    rec(n-1);
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    rec(n);
    return 0;
}
