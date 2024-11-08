#include <iostream>
#include <string_view>
#include <cassert>


int countOnes(std::string_view str) {
    int count = 0;
    for (std::size_t i = 0; i < str.size(); i++) {
        // если символ — '1', увеличиваем счетчик
        if (str[i] == '1') {
            count++;
        }
    }

    return count;
}

void runTests() {
    assert(countOnes("001100") == 2);      // тут 2 единицы
    assert(countOnes("1111") == 4);        // тут все 4 символа это единицы
    assert(countOnes("0000") == 0);        // вообще нет единиц
    assert(countOnes("") == 0);            // пустая строка, результат должен быть 0
    assert(countOnes("1") == 1);           // одна единственная единица

    std::cout << " все работает :) " << std::endl;
}

int main() {

    runTests();
    return;
}
