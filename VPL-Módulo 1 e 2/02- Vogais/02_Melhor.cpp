#include <iostream>
#include <string>

int main()
{
    int Num_de_vogais[5] = {0,0,0,0,0};
    std::string vogais = "aeiou";
    std::string palavra;
    std::cin >> palavra;

    for(int i=0 ; i<=palavra.size() ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            if( vogais[j] == palavra[i])
            {
                Num_de_vogais[j]++;
            }
        }
    }
    for(int i=0 ; i<5 ; i++)
    {
        if(Num_de_vogais[i] != 0)
        {
            std::cout << vogais[i] << ": " << Num_de_vogais[i] << std::endl;
        }
    }
}