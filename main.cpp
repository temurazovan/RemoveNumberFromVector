#include <iostream>
#include <vector>
#include <algorithm>

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

    std::cout << "Input number to delete: ";
    std::cin >> numberToDelete;

    std::cout << "size: " << vector.size() << std::endl;
    auto i = std::remove(vector.begin(), vector.end(), numberToDelete);
    vector.erase(i, vector.end());
    std::cout << "size: " << vector.size() << std::endl;

    for (int i = 0; i < vector.size(); i++){
        std::cout << vector[i] << " ";
    }

}
