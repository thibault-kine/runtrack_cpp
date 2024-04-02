#include <iostream>

using namespace std;

int get_smallest(int* array) {
    int smallest;
    int i = 0;
    while(*array) {
        if(smallest) {
            if(*array < smallest) smallest = *array;
        } else {
            smallest = *array;
        }
        array++;
    }

    return smallest;
}

int main() {
    int* nums = (int*)malloc(sizeof(int) * 5);
    nums[0] = 7;
    nums[1] = 98;
    nums[2] = 15;
    nums[3] = 45;
    nums[4] = 49; 
    
    cout << "Le plus petit entier du tableau est " << get_smallest(nums) << endl;
}