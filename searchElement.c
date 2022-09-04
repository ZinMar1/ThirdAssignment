// Created by Zin Mar on 9/3/2022
// Sum of array elements, Count Number of Even and Odd elements , Search an element in array

#include <stdio.h>

void SearchFun(int arr[], int* al, int s);
void EvenOddFun(int arr[],int size);

int main()
{
    int arr[] = { 10, 15, 20, 25, 30, 35, 40, 50, 70, 90 };
    int size=sizeof(arr)/sizeof(int);
    int* ptr, total=0, search=0;

    int* a=arr+size-1;

    printf("\nArray Elements are:\n");
    for(ptr=arr;ptr<=a;ptr++){

        printf("%d  ",*ptr);
        total+=*ptr;
    }
    printf("\nSum of Array Elements are: %d\n", total);

    EvenOddFun(arr,size);

    printf("\n\nEnter an element you want to search:");
    scanf("%d", &search);

    SearchFun(arr,a,search);


    return 0;
}

void SearchFun(int arr[], int* al, int s){
    int *ptr=arr,  index=1, position=0;

    while(ptr<=al){
        if(*ptr==s){
            position=index;
            break;
        }

        index++;
        ptr++;

    }

    if(position==index){
        printf("%d is found at position %d", s, index);
        printf("\n%d is found at the Address of %x", s, ptr);

    }
    else{
        printf("Not found element in array");
    }
}
void EvenOddFun(int arr[], int size){
    int even = 0, odd = 0, i;

    printf("\nEven number are: \n");
   for(i=0; i< size; i++){
        if(arr[i] % 2 ==0){
            printf("%d  ", arr[i]);

            even++;
        }

    }
    printf("\nNumber of even elements in array is : %d", even);
    printf("\n\nOdd number are: \n");
    for(i=0; i< size; i++){
        if(arr[i] % 2 !=0){
            printf("%d  ", arr[i]);

            odd++;
        }

    }
    printf("\nNumber of Odd elements in array is : %d", odd);
  

}

