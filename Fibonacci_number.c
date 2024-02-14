#include<stdio.h>
int fib(int arr[],int n);

int main(){
    int a;
    printf("enter the Fibonacci number = ");
    scanf("%d",&a);

    int fib[a];

    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<a;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);




    }
    printf("\n");

}