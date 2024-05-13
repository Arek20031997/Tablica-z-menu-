#include <iostream>
#include "array.h"

void menu(void){
    printf("1. Entering values into the array\n");
    printf("2. Display array\n");
    printf("3. Determining the minimum value\n");
    printf("4. Determining the maximum value\n");
    printf("5. Determining the average value\n");
    printf("0. Choose the right option \n");
}


int main() {
    int array[SIZE] = {1, 2, 3, -4, 50, 100, 7, 8, 9, 10};
    printf("Simple array\n");
    int errorcode = 0;

    int option = 0;

    do{
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                printf("1. Entering values into the array\n\n");
                enterDataIntoArray(array);
                break;
            case 2:
                printf("2. Display array\n\n");
                displayArray(array);
                break;
            case 3:
//                printf("3. Determining the minimum value\n\n");
                printf("Minimum value in the array: %d\n\n", findMinimum(array));
                break;
            case 4:
//                printf("4. Determining the maximum value\n\n");
                printf("Maximum value in the array: %d\n\n", findMaximum(array));
                break;
            case 5:
//                printf("5. Determining the average value\n\n");
                printf("Average value in the array: %.2f\n\n", calculateAverage(array));
                break;
            default:
                printf("Choose the right option.....\n\n");
        }
    }while (option !=0);

//   enterDataIntoArray(array);
//    displayArray(array);
//    int max = findMaximum(array);
//    int min = findMinimum(array);
//    float average = calculateAverage(array);
//    displayResults(min, max, average);
//    saveArrayToFile

    return 0;
}
