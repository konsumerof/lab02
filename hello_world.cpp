#include <iostream>
#include <string>

int main(){
std::string name; // переменная типа string, которое хранит имя
std::cout <<"Enter your name, sir: ";
std::cin >> name; // запись имени в переменную под названием name
std::cout <<"Hello world from " << name << std::endl; // getting the name
return 0;
}
