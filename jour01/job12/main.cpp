#include <iostream>

using std::cout, std::endl;

int doubleArray(int* array, int size) {
    int result = 0;
    while(*array) {
        *array *= 2;
        result += *array;
        array++;
    }

    return result;
}

int main() {
    int size = 3;
    int* nums = (int*)malloc(sizeof(int) * size);
    nums[0] = 4;
    nums[1] = 9;
    nums[2] = 7;

    // (4 * 2) + (9 * 2) + (7 * 2) = 40

    cout << doubleArray(nums, size) << endl;
}
