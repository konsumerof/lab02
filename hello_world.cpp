#include <iostream>
#include <string>

int main(){
std::string name; // переменная типа string для хранения имени
std::cout <<"Enter your name, sir: ";
std::cin >> name; // запись имени в переменную
std::cout <<"Hello world from " << name << std::endl; // вывод имени
return 0;
}
