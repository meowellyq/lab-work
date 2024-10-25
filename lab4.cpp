

#include <iostream>
#include <span>
#include <array>
#include <cassert>

/*Сделайте функцию которая попарно перемножает числа из 2 массивов, 
записывая результат в 1-ый массив.*/

void product(std::span<int> inputOutput, std::span<int> coefficients)
{

    assert(inputOutput.size()<= coefficients.size());

    for(size_t i = 0; i<inputOutput.size();i++)
    {
         inputOutput[i] *= coefficients[i];
    }
    
     
    
}

int main()
{

    std::array inputOutput{6,9,77,23,15};
    std::array coefficients{1,2,3,4,5,6,7};
    product(inputOutput,coefficients);
    for (int el : inputOutput)
    {
        std::cout << el << std::endl;
    }


}

