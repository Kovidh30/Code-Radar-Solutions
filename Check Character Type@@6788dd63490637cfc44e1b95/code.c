#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        ch = tolower(ch);
    }    
    if(ch == 'a' || ch == 'e' || ch = 'i' || ch =='o' || ch == 'u'){
        printf("%c Vowel");
    
    else{
        printf("%c Consonant");
    }
    }
    else if(isdigit(ch)){
        printf("%c Digit");
    }
    else{
        printf("%c Special charachter");
    }
    return 0;
}