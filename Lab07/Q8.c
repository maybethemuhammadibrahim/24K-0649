#include <stdio.h>
#include <math.h>
int main()
{
    char str[100];
    int i=0,result=0,number=0,x=0;
    printf("Enter the Expression(max length 100):");
    scanf("%s",str);
    //getting the length
    while(str[i]!='\0'){
        i++;
    }
    int length = i;
    
    //traversing through the string from right to left
    while(i>=0){
        //checking if Ith chracter is a number  
        if(str[i]>=48 && str[i]<=57){
            //basically checks if the number is on the tenths,hundreds or thousands place
            if((str[i+1]>=48 && str[i+1]<=57) && i!=length){
                x++;
                number = (str[i]-48)*pow(10,x) + number;
            }
            else{
                //converting number from string to int
                number = str[i]-48;
            }
          // printf("%d",number);
        }
        //checks for + sign
        if(str[i]==43 || (i==0 && str[i]!=43)){
            result = result + number;
            x=0;
            }
        //checks for - sign
        else if(str[i]==45){
            result = result - number;
            x=0;
            }
        
        i--;
   }
    
    printf("The result of the expression is: %d\n",result);
}
