#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned long ulNumber;
    unsigned int nDividers = 0;
    std::cout << "Input an integer positive number\r\n";
    std::cin >> ulNumber;
    std::cout << "The number " << ulNumber << " has the folowing divisors:\r\n";
    for (unsigned long i = 1; i <= ulNumber; i++)
    {
        if (ulNumber % i == 0)
        {
            std::cout << i << " ";
            nDividers++;
        }

    }
    std::cout << "\r\n";
    switch (nDividers)
    {
    case 0:
    case 1:
        std::cout << "The number " << ulNumber
                  << " is neither composite nor prime\r\n";
        break;
    case 2:
        std::cout << "The number " << ulNumber << " is prime\r\n";
        break;
    default:
        std::cout << "The number " << ulNumber << " is composite\r\n";
        break;
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}
