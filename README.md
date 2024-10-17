# arrays
Дан массив размером NxN, элемента которого - целые числа. 
Для каждой строки найти номер первого отрицательного элемента и записать данные в новый массив
#include <iostream>
#include <vector>

std::vector<int> findFirstNegative(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;

    for (const auto& row : matrix) {
        int firstNegativeIndex = -1;  // Предполагаем, что отрицательных нет
        for (size_t index = 0; index < row.size(); ++index) {
            if (row[index] < 0) {
                firstNegativeIndex = index; // Запоминаем индекс первого отрицательного
                break; // Прерываем поиск в этой строке
            }
        }
        result.push_back(firstNegativeIndex);
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, -4},
        {5, 6, 7, 8},
        {-1, 2, 3, 4},
    };

    std::vector<int> result = findFirstNegative(matrix);

    // Вывод результата
    for (int index : result) {
        std::cout << index << " ";
    }
    return 0;
}
