#include<stdio.h>

int main(){
    int age;
    int vipPass=0;
    // vipPass=1;
    printf("enter your age:\n");
    scanf("%d",&age);
    if(age <=70 && age>=18 || !(vipPass==0) )
    {
        printf("you are abouve 18 and you can drive\n");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}  

 