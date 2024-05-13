//
// Created by ulaja on 17.03.2024.
//
#include <iostream>
#include "array.h"

void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int findMaximum(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMinimum(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float calculateAverage(int array[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];
    }
    float average = (float) sum / SIZE;
    return average;
}

void enterDataIntoArray(int array[]) {
    printf("Enter data into array:\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void displayResults(int min, int max, float average) {
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);
    printf("Average value = %f\n", average);
}

int saveArrayToFile(int *array) {
    FILE *fptr = NULL;
    fptr = fopen("../array.txt", "w");
    if (fptr == NULL) {
        return 1;
    }

    for (int i = 0; i < SIZE; ++i) {
        fprintf(fptr, "d\n", array[i]);
    }
    fclose(fptr);
    return 0;
}