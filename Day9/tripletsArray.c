#include <stdio.h>

int isUnique(int triplets[][3], int count, int a, int b, int c) {
    for (int i = 0; i < count; i++) {
        // Check for same set (order doesn't matter)
        int x = triplets[i][0], y = triplets[i][1], z = triplets[i][2];
        if ((a == x || a == y || a == z) &&
            (b == x || b == y || b == z) &&
            (c == x || c == y || c == z))
            return 0;
    }
    return 1;
}

void printTriplets(int nums[], int n) {
    int triplets[100][3];
    int count = 0, found = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    // Sort triplet for uniqueness
                    int a = nums[i], b = nums[j], c = nums[k];
                    // Simple sort for 3 numbers
                    if (a > b) { int t = a; a = b; b = t; }
                    if (a > c) { int t = a; a = c; c = t; }
                    if (b > c) { int t = b; b = c; c = t; }
                    if (isUnique(triplets, count, a, b, c)) {
                        triplets[count][0] = a;
                        triplets[count][1] = b;
                        triplets[count][2] = c;
                        count++;
                        printf("[%d, %d, %d]\n", a, b, c);
                        found = 1;
                    }
                }
            }
        }
    }
    if (!found)
        printf("No triplets found.\n");
}

int main() {
    int nums[] = { -1, 0, 1, 2, -1, -4 };
    int n = sizeof(nums) / sizeof(nums[0]);
    printTriplets(nums, n);
    return 0;
}