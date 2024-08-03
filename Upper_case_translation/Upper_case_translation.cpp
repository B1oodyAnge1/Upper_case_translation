#include <iostream>
#include <string>
#include <algorithm>




int main()
{
    setlocale(LC_ALL, "ru");
    std::string str = "";
    std::cout << "Введите букву нижнего регистра: \n";
    std::cin >> str;
    std::transform(str.begin(), str.end(), str.begin(), toupper);
    std::cout << str << std::endl;
    return 0;
    
}


