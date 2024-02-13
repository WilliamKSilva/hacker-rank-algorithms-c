/*
 Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

    If a[i] > b[i], then Alice is awarded 1 point.
    If a[i] < b[i], then Bob is awarded 1 point.
    If a[i] = b[i], then neither person receives a point.

Comparison points is the total points a person earned.

Given a and b, determine their respective comparison points.
*/

#include <stdlib.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int aPoint = 0;
    int bPoint = 0;
    for (int i = 0; i < a_count; i++) {
        int aRating = a[i];
        int bRating = b[i];
        
        if (aRating > bRating) {
            aPoint++;
            continue;
        }
        
        if (aRating < bRating) {
            bPoint++;
            continue;
        }
    }
    
    *result_count = 2;
    int* result = malloc(2 * sizeof(int));
    result[0] = aPoint;
    result[1] = bPoint;
    
    return result;
}
