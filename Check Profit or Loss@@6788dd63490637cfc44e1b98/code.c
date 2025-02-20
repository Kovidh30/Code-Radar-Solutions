#include<stdio.h>

int main(){
    float costprice,sellingprice;
    scanf("%f %f",&costprice,&sellingprice);
    if(sellingprice > costprice ){
        printf("Profit");
    }
    else if (sellingprice < costprice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}