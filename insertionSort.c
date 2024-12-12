#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }

    int temp=0,j;
    for(int i = 0; i<n; i++){
            temp = arr[i];
            j = i-1;
        while(temp<=arr[j]){
                arr[j+1] = arr[j];
                j = j-1;
            }
        arr[j+1] = temp;
    }

    printf("\nSorted array: ");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

