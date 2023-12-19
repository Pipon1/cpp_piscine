#include    <iostream>

int main(void)
{
    std::string stringDEF = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringDEF;
    std::string &stringREF = stringDEF;

    std::cout << "Adresse var : " << &stringDEF << std::endl;
    std::cout << "Adresse ptr : " << stringPTR << std::endl;
    std::cout << "Adresse ref : " << &stringREF << std::endl;

    std::cout << "Contenu var : " << stringDEF << std::endl;
    std::cout << "Contenu ptr : " << *stringPTR << std::endl;
    std::cout << "Contenu ref : " << stringREF << std::endl;
    return (1);
}