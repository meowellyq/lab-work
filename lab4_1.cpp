#include <iostream>


struct FruitCounts
{
    int apples;
    int pears;
    int oranges;
};

int main()
{
    
    FruitCounts fruits;


    std::cout << "Apples: ";
    std::cin >> fruits.apples;

    std::cout << "Pears: ";
    std::cin >> fruits.pears;

    std::cout << "Oranges: ";
    std::cin >> fruits.oranges;

    {
        bool ifApples = (fruits.apples > 5);
        bool ifPears = (fruits.pears < 8);
        bool ifOranges = (fruits.oranges == 2 * fruits.apples);

        
        if (ifApples && ifPears && ifOranges)
        {
            std::cout << "Hello" << std::endl;
        }
    }

    return 0;
}
