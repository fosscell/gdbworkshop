#include<stdio.h>

int main() {
    
    int num;
    
    do {
        printf("Enter a positive number : ");
        scanf("%d", &num);
    } while(num<0);

    int factorial;
    for(int i=1;i<=num;++i)
        factorial*=i;

    printf("%d! = %d\n", num, factorial);
    return 0;
}
