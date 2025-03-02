#include<stdio.h>

int main(){
    int a ,b,result;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);

    switch(operator){
        case "+":
            result = a+b;
            printf("%d",result);
            break;
        case "-":
            result = a-b;
            printf("%d",result);
            break;
        case "*":
            result = a*b;
            printf("%d",result);
            break;
        case "/":
            if(b != 0){
                 result = a/b;
                printf("%d",result);
            }
            else{
                printf("Error");
            }
            break;
        default:
            printf("inava;id operator");
            break;

        
           

    }
}