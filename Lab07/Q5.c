#include<stdio.h>
int main(){
    char input[100];
    int length;
    printf("Enter the String to check: ");
    scanf("%s",input);
    //Test Value: iTopiNonAvevanoNipoti
    for(length=0;input[length]!='\0';length++){
        1;
    }
    int j=0,i,isPalindrome=0;
    
   for(i=length-1;i>=0;i--){
       //converting into uppercase ASCII values for uniform comparison
       int leftCharacter=input[j];
       if(leftCharacter>=97 && leftCharacter<=122){
           leftCharacter = leftCharacter-32;
       }
       int rightCharacter=input[i];
       if(rightCharacter>=97 && rightCharacter<=122){
           rightCharacter = rightCharacter-32;
       }
       
       
       if(leftCharacter==rightCharacter){
           isPalindrome=1;
       }
       else{
           isPalindrome=0;
           break;
       }
        j++;
    }
    
    isPalindrome==1?
    printf("String is a Palindrome"):
    printf("String is not a palindrome");
}
