/* 
    Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
    Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/

#include <stdio.h>
#include <stdlib.h>

// One number will be let out of the sum, all the others are sum, this for every number of the array
// than we get the highest result and the lowest result

void miniMaxSum(int arr_count, int* arr) {
   // Sort array by ascending values
   for (int a = 0; a < arr_count; a++) {
       for (int b = a + 1; b < arr_count; b++) {
           if (arr[b] < arr[a]) {
               int temp = arr[a];
               arr[a] = arr[b];
               arr[b] = temp;
           }
       }

   }
   
   int* lowSumNumbers = malloc(arr_count - 1 * sizeof(int));
   for (int i = 0; i < arr_count - 1; i++) {
       lowSumNumbers[i] = arr[i];
   }
   
   int* highSumNumbers = malloc(arr_count - 1 * sizeof(int));
   for (int j = 1; j < arr_count; j++) {
       highSumNumbers[j - 1] = arr[j];
   }
   
   long lowSum = 0;
   long highSum = 0; 
   for (int w = 0; w <  arr_count; w++) {
       lowSum = lowSum + lowSumNumbers[w];
       highSum = highSum + highSumNumbers[w];
   }

   printf("%ld%*c%ld", lowSum, 1, ' ', highSum);
}

int main() {
    int arr_count = 5;
    int* arr = malloc(5 * sizeof(int));

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    miniMaxSum(arr_count, arr);
    
    return 0;
}
