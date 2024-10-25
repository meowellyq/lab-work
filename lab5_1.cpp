#include <iostream>
#include <string_view>
#include <cassert>
/*Сделайте функцию, которая находит в строке  ,
 и выдает кусок строки от позиции после этой позиции до следующего  . 
Если следующего нет, пускай выдает остальную часть строки.
1) передать строку в функцию
2) найти пробел

3) выдать кусок строки от этого пробела до следующего пробела
    * найти следующий пробел
        * искать в оставшейся строке
        * создать представление для оставшейся строки
4) когда следующего пробела нет, выдавать остальную часть строки

*/
size_t findSpace(std::string_view str);

std::string_view secondWord(std::string_view str){

    std::size_t indexSpace = findSpace(str);
    const char* firstSymbol = str.data();
    const char* nextWord = firstSymbol + indexSpace +1;
    std::size_t otherStringLen = str.size() - indexSpace - 1;
    std::string_view otherString{ nextWord, otherStringLen };
    std::size_t indexSpace2 =  findSpace(otherString);
    std::string_view second{nextWord, indexSpace2};

    return second;
    


}
    
     

size_t findSpace(std::string_view str)
{
    std::size_t length = str.size();
    std::size_t firstSpace = 0;

    while (true)
    {
        if (firstSpace >= length)
        {
            return firstSpace;
        }
        if (str[firstSpace] == ' ')
        {
            return firstSpace;
        }
        firstSpace++;
    }

    return firstSpace;
}


void runTests() {


    std::cout << " все работает :) " << std::endl;
}

int main() {

    std::cout << secondWord("abc def");

    runTests();
}
