#include <stdio.h>

void printTriplets(int nums[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) 
                continue; 
            int x = nums[i]; 
            int y = nums[j];
            int z = x + y;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j && nums[k] == z) {
                    printf("[%d, %d, %d]\n", x, y, z);
                    found = 1;
                }
            }
        }
    }
    if (!found)
        printf("No triplets found.\n");
}

int main() {
    int nums[] = {1,2,3,4,5,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    printTriplets(nums, n);
    return 0;
}