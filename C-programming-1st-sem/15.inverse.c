//Write a program to get input of two or higher digit integer number and display inverse order
#include<stdio.h>
int main(){
    int a,rev=0,rem;
    printf("Enter a two or higher digit integer\n");
    scanf("%d",&a);
    if(a<10){
        printf("Enter a two or higher digit integer\n");
        return 1;
    }
    while (a!=0){
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
    }
    printf("The number in reverse is %d\n",rev);
    printf("\n--[Your Name]--");
    return 0;
    
}