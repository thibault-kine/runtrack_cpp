#include <iostream>

using namespace std;

int get_smallest(int* array) {
    int smallest;
    int i = 0;
    while(array[i]) {
        if(smallest) {
            if(*array < smallest) smallest = *array;
        } else {
            smallest = *array;
        }
        i++;
    }

    return smallest;
}

int main() {
    int nums[] = { 6, 98, 47, 7, 66 };
    
    cout << "Le plus petit entier du tableau est " << get_smallest(nums) << endl;
}
