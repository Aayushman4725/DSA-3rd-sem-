#include <stdio.h>
#define max 20 

int arr[max]; 
int n,choice; 
int i, position, value; 

void insert(){
    printf("Enter the position to insert an element: ");
    scanf("%d", &position);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    if (position < 1 || position > n+1) {
        printf("Invalid position!\n");
    }
    else {
        for (i = n-1; i >= position-1; i--) {
            arr[i+1] = arr[i];
        }
        arr[position-1] = value;
        n++;
        printf("%d has been inserted at position %d\n", value, position);
    }

}

void delete(){
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    if (position < 1 || position > n) {
        printf("Invalid position!\n");
    }
    else {
        for (i = position-1; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        printf("Element has been deleted from the position %d\n", position);
    }
}

void display(){
    printf("New array: ");
     for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        }
     printf("\n");
}

int main() {
    printf("Enter the size of the array ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    while(1)
    {
        printf("1: Insert \n 2: Delete \n 3: Display \n 4: Exit\n ");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;
            
            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid input!\n");
                break;
        }
    }
}