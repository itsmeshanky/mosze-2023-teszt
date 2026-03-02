#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //rossz konstans nev
    std::cout << '1-100 ertekek duplazasa' //rossz idezojel, nincs pontosvesszo
    for (int i = 0;) //ciklus feltetel hianyzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //ciklus feltetele hibas
    {
        std::cout << "Ertek:" //nincs kiirva valtozo es pontosvesszo sincs
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializalva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //nincs pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //nincs delete
    return 0;
}
