#include <iostream>

struct Kokardka
{
    int dlugosc;

public:
    Kokardka(int d) : dlugosc{d} { dlugosc = 40; };
    ~Kokardka() { std::cout << "Rozwiązana kokardka." << std::endl; }
};
int getDlugosc(Kokardka w)
{
    return w.dlugosc;
}

struct Prezent
{
    Kokardka wzietaKokardka();

    int dk;

public:
    Prezent(int podanaDlug) : dk{podanaDlug} { dk = getDlugosc(wzietaKokardka); };

    ~Prezent() { std::cout << "Rozpokowany prezent." << std::endl; }
};

int main()
{
    Kokardka k1(9);
    Prezent  p1{8};
    // Kokardka k2(7);
    // Prezent  p2{};
    std::cout << "Prezent p1 ma długość kokardki równą " << p1.dk << "cm. Ale fajnie :)"
              << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Koniec main, wszyscy mogą iść rozpakowywać prezenty." << std::endl;
    std::cout << " " << std::endl;
}