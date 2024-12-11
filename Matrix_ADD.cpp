#include <iostream>
#include <vector>
#include <iomanip> 
// 定义一个函数来添加两个矩阵
std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& matrixA, const std::vector<std::vector<int>>& matrixB) 
{
    std::vector<std::vector<int>> result(matrixA.size(), std::vector<int>(matrixA[0].size()));
    // 检查矩阵是否具有相同的维度
    if (matrixA.size() != matrixB.size() || matrixA[0].size() != matrixB[0].size())
    {
        std::cerr << "Error: matrixA and matrixB  not same " << std::endl;
        return  result;
    }

  //  std::vector<std::vector<int>> result(matrixA.size(), std::vector<int>(matrixA[0].size()));

    // 遍历矩阵的每个元素并相加
    for (size_t i = 0; i < matrixA.size(); ++i) //
    {
        for (size_t j = 0; j < matrixA[i].size(); ++j) 
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    return result;
}

// 用于打印矩阵的函数
void printMatrix(const std::vector<std::vector<int>>& matrix)
{
    for (const auto& row : matrix) 
    {
        for (const auto& element : row) 
        {
            std::cout << std::setw(10) <<element ;
        }
        std::cout << std::endl;
    }
}

int main() 
{
    // 定义两个矩阵
    std::vector<std::vector<int>> matrixA = 
    {
        {3, 2,2},
        {3, 4,8}
    };

    std::vector<std::vector<int>> matrixB = 
    {
        {3, 6,6},
        {7, 8,6}
    };

    std::vector<std::vector<int>> result = addMatrices(matrixA, matrixB);
    // *************************************************************************打印结果
    std::cout << "Matrix A + Matrix B:" << std::endl;
    printMatrix(result);

    return 0;
}
