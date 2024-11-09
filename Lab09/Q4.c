
#include <stdio.h>

float calculator(float num1,float num2,char op){
    float result=0;
    if(op == '+'){
        result = num1+num2;
    }
    else if(op=='-'){
        result = num1-num2;
    }
    else if(op=='*'){
        result = num1*num2;
    }
    else if(op=='/'){
        result = num1/num2;
    }
    else{
        printf("Error");
    }
    
    return result;
}

int main() {
    float num1,num2;
    char op;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Enter the operation to perform: ");
    scanf(" %c",&op);
   
    
    float result = calculator(num1,num2,op);
    
    printf("The result is %.3f",result);
    
    
    
}
