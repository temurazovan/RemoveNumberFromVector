#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector;
    int size;
    int numbers;
    int numberToDelete;

    std::cout << "Input vector size: ";
    std::cin >> size;
    vector.resize(size);

    std::cout << "Input numbers: ";
    for (int i = 0; i < size; i++){
        std::cin >> numbers;
        vector[i] = numbers;
    }

    for (int i = 0; i < size; i++){
        std::cout << vector[i] << " ";
    }


}
