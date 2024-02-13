/* 
  Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
  Print the decimal value of each fraction on a new line with places after the decimal.
*/

#include <stdio.h>

struct Ratios {
    float positive;
    float negative;
    float zero;
};

void plusMinus(int arr_count, int* arr) {
    struct Ratios ratios = {
        0.0,
        0.0,
        0.0
    };
    
    for (int i = 0; i < arr_count; i++) {
        int listNumber = arr[i];
        if (listNumber > 0) {
            ratios.positive++;
        } else if (listNumber < 0) {
            ratios.negative++;
        } else if (listNumber == 0) {
            ratios.zero++;
        }
    }
    printf("%.6f\n", ratios.positive / arr_count);
    printf("%.6f\n", ratios.negative / arr_count);
    printf("%.6f\n", ratios.zero / arr_count);
}
