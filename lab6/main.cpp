#include <iostream>

int a();
static int hello(int number) {
    return number + 2; 
}

int main ()
{
    int res = hello(1);
    std::cout << "результат =  " << a() << std::endl;

    return 0;
}



