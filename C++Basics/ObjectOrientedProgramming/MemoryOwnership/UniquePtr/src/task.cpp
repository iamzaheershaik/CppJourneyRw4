#include <memory>
#include <iostream>

std::unique_ptr<int[]> copy(const int* array, size_t size) {
    return nullptr;
}

int main() {
    const size_t size = 10;
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    std::unique_ptr<int[]> ptr = copy(array, size);
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << std::endl;
    }
    return 0;
}