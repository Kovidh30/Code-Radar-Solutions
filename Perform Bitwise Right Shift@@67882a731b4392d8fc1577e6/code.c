#include<stdio.h>

int main(){
    int n1,n2,result;
    scanf("%d",&n1,&n2);
    result = n2>>n1;
    printf("%d",result);

}