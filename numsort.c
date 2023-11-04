// The below code is used to sort the array of int input from the user, and print the middle number from the array of values.

#include <stdio.h>

void sort(int Arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(Arr[j] > Arr[j+1]){
                int tempVar;
                tempVar = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = tempVar;
            }
        }
    }
} 
void printArr(int Arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ",Arr[i]);
    }    
} 
void midNum(int Arr[], int size){
    int mid;
    if(size % 2 != 0){
        mid = size/2;
        printf("\nMiddle Number: %d",Arr[mid]);
    } else if(size % 2 == 0){
        mid = size/2;
        printf("\nMiddle Number(s): %d %d",Arr[mid-1],Arr[mid]);
    }
}
int main(){
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int Arr[size];
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d",&Arr[i]);
    }

    sort(Arr, size);
    printf("Sorted Array: ");
    printArr(Arr, size);
    midNum(Arr, size);

}