#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int checkRepeat(int arr[], int size, int num) {
    for (int i = 0; i < size; i++)
        if (arr[i] == num)
            return 1;
    return 0;
}

int main(int argc, char **argv) {
    int numTogen = atoi(argv[1]);
    int nums[numTogen];
    (void)argc;
    
    srand(time(NULL));
    for (int i = 0; i < numTogen; i++) {
        int num;
        do {
            num = rand() % numTogen;
        } while (checkRepeat(nums, i, num));
        
        nums[i] = num;
    }
    for (int i = 0; i < numTogen; i++) 
        printf("%d ", nums[i]);
    return 0;
}
