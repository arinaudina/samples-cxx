#include <iostream>

int main()
{
    int n;
    std::cout << "Ykazite chislo predela: ";
    std::cin >> n;
    for (int i{ 1 }; i <= n; i += 2)
    {
        std::cout << i << ": " << i * i << std::endl;
    }
}
