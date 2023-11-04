#include <stdio.h>

int isPalindrome(char word[100], int length){
    int i = 0;
    int j = length - 1;
    while(i < j){
        if(word[i] != word[j]){
            return 0;
        }
        i++;
        j--;
        
    }
    return 1;
}

int main(){
    char word[100];
    printf("Enter a word: ");
    scanf("%s",word);

    int length = 0;
    while(word[length] != '\0' ){
        length++;
    }
    if(isPalindrome(word, length)){
        printf("%s is palindrome.",word);        
    } else {
        printf("%s is not a palindrome.",word);
    }

}