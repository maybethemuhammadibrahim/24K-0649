#include<stdio.h>
#include<string.h>
int isPalindrome();

int main()
{   

    int noOfWords;
    printf("Enter number of words you want to check for palindrome: ");
    scanf("%d",&noOfWords);
    getchar();
    char wordList[noOfWords][20];
    printf("Enter Words:\n");

    
    for(int i=0;i<noOfWords;i++){
        printf("Word %d: ",i+1);
        fgets(wordList[i], 20, stdin);
    }

    



    for(int i=0;i<noOfWords;i++){
        
        int result = isPalindrome(wordList[i]);
        //printf("%d",result);
        printf("\nThe Word %s is", wordList[i]);
        result==1? printf(" a Palindrome"): printf(" not a Palindrome");
    }

}

int isPalindrome(char string[]){
    int length= strlen(string);
    int isPalindrome=0;
    //printf("%d",length);
    
    for(int i=0;i<length/2;i++){
        //printf("%c\n",string[length-i-2]);
        if(string[i]==string[length-i-2]){
            isPalindrome = 1;
            
        }
        else{

            isPalindrome = 0;
            break;
        }
    }

    return isPalindrome;
}
