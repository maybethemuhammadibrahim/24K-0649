// Create a program with a constant that defines the maximum allowable temperature (in
// Celsius). Write a function to compare input temperatures and use a static variable to
// count how many times temperatures exceeded the limit.
#include <stdio.h>

int calculate(int constantTemp, int input){
    static int counter=0;
    
    if(input>constantTemp){
        counter++;
    }
    
    return counter;
}

int main() {
    const int constantTemp = 50;
    int n=1, inputTemp;
    int result;
    printf("Enter 0 to exit\n");
    while(n!=0){
        printf("\nEnter Temperature: ");
        scanf("%d", &inputTemp);
        if(inputTemp == '-'){
            break;
        }
        else{
            result = calculate(constantTemp,inputTemp);
        }
        
    }
    
    printf("\nThe temperatures exceeded the limit %d times.",result);
    
    return 0;
}
