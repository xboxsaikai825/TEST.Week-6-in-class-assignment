#include <iostream>
#include <algorithm> // C++ library sort

/*
* swap two integer values
*/
template <typename T>
void swap(T list[], T first, T second) {
    T temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
}

/*
* Buttle sort
*/
template <typename T>
void bubbleSort(T list[], int length) {
    for (int iteration = 1; iteration < length; iteration++) {
        for (int index = 0; index < length - iteration; index++) {
            if (list[index] > list[index + 1]) {
                swap(list, index, index + 1);
            }
        }
    }
}

template <typename T>
void random_fill(T a[], int size) {
    srand((unsigned)time(NULL));
    T random = rand();
    for (int i = 0; i < size; i++) {
        a[i] = random;
        random = rand();
    }
}

const int ITERATIONS = 1000;
const int MAX_SIZE = 100000;

using namespace std;

int main() {
    
    cout << "1234";
    return 0;
}
