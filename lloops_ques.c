// #include<stdio.h>

// int main(){
//     int n;
//     int i=1;
//     printf("enter the value of n \n");
//     scanf("%d",&n);
//     for(i;i<11;i++){
//         printf("%d * %d = %d \n",n,i,i*n);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int limit, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++) {
        int result = i * 8;
        while(result > 0) {
            sum += result % 10;
            result /= 10;
        }
    }
    printf("The sum of numbers occurring in the multiplication of 8 up to %d is %d.\n", limit, sum);
    return 0;
}

