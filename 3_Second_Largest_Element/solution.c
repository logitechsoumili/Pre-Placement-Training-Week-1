#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0], second = -1;

    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != max){
            if (second == -1 || arr[i] > second){
                second = arr[i];
            }
        }
    }

    if (second == -1){
        printf("No second largest element.\n");
    } else {
        printf("Second Largest element: %d\n", second);
    }

    return 0;
}
