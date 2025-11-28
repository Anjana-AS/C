    #include <stdio.h>
    int main() {
    int arr[100], n, i, j, temp, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Choose sorting order:\n1. Ascending order\n2. Descending order\n");
    scanf("%d", &choice);
    for(i = 0; i < n - 1; i++) {
    for(j = 0; j < n - 1 - i; j++) {
    if((choice == 1 && arr[j] > arr[j + 1]) || 
    (choice == 2 && arr[j] < arr[j + 1])) {
    temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
    }
    }
    }
    if(choice == 1)
    printf("Sorted array in ascending order:\n");
    else if(choice == 2)
    printf("Sorted array in descending order:\n");
    else {
    printf("Invalid choice!\n");
    return 1;
    }
    for(i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

