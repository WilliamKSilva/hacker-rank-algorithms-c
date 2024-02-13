/* Given an array of integers, find the sum of its elements. */

int simpleArraySum(int ar_count, int* ar) {
    int total = 0;
    for (int i = 0; i < ar_count; i++) {
        total = total + ar[i];
    }
    
    return total;
}
