// #include<stdio.h>

// int main(){
//     int a=1;
//     a++;
//     printf("%d",a++);  /*loops are used to repeat similar part of code snippet efficiently*/
//     return 0;
// }

// __GXX_MERGED_TYPEINFO_NAMES


#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a<10){
        printf("%d\n",a);
        a=a+1;
    }
    return 0;
}
 