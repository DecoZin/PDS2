#include <iostream>
#include <string>

int main()
{
    std::string palavra;
    std::cin >> palavra;

    char ca = 'a';
    char ce = 'e';
    char ci = 'i';
    char co = 'o';
    char cu = 'u';

    int ia=0,ie=0,ii=0,io=0,iu=0;

    for(char i : palavra)
    {
        if(i == ca)
        {
            ia++;
        }
    }
    if(ia != 0)
    {
        std::cout << "a "<< ia <<std::endl;
    }
    for(char i : palavra)
    {
        if(i == ce)
        {
            ie++;
        }
    }
    if(ie != 0)
    {
        std::cout << "e "<< ie <<std::endl;
    }
    for(char i : palavra)
    {
        if(i == ci)
        {
            ii++;
        }
    }
    if(ii != 0)
    {
        std::cout << "i "<< ii <<std::endl;
    }
    for(char i : palavra)
    {
        if(i == co)
        {
            io++;
        }
    }
    if(io != 0)
    {
        std::cout << "o "<< io <<std::endl;
    }
    for(char i : palavra)
    {
        if(i == cu)
        {
            iu++;
        }
    }
    if(iu != 0)
    {
        std::cout << "u "<< iu <<std::endl;
    }
    return 0;
}