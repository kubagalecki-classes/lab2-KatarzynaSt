#include <iostream>
struct Kokardka
{
    int dlugosc;

public:
    // Kokardka() : dlugosc{d} { dlugosc = 40; };
    Kokardka(int d) : dlugosc{d} { dlugosc = 30; };
    ~Kokardka() { std::cout << "Rozwiązana kokardka." << std::endl; }
};
int getDlugosc(Kokardka w)
{
    return w.dlugosc;
}

struct Prezent
{
    Kokardka wzietaKokardka;

public:
    Prezent(int podanaDlug) : wzietaKokardka{podanaDlug} {}

    ~Prezent()
    {
        std::cout << "Rozpokowany prezent. "
                  << "Dlugosc wziętej kokordki " << getDlugosc(wzietaKokardka) << "." << std::endl;
    }
};

int main()
{
    Kokardka k1(9);
    Prezent  p1{8};
    // Kokardka k2(7);
    // Prezent  p2{};
    std::cout << "Prezent p1 ma długość kokardki równą " << p1.wzietaKokardka.dlugosc
              << "cm. Ale fajnie :)" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Koniec main, wszyscy mogą iść rozpakowywać prezenty." << std::endl;
    std::cout << " " << std::endl;
}