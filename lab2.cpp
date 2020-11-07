#include <iostream>

class Wektor
{
private:
    Wektor() : dlugosc{4}, pojemnosc{4}
    {
        std::cout << "Konstruktor domyslny wektora.\n";
        x = new double[dlugosc];
        for (int i = 0; i < dlugosc; i++)
            x[i] = 0; // nie rozumiem - zajmij tyle co tu miejsc na to, bym mogła wpisać v tam?
    }

    Wektor(int podanaDlugosc) : dlugosc{podanaDlugosc}, pojemnosc{podanaDlugosc}
    {
        std::cout << "Konstruktor parametryczny Wektora o dlugosci " << dlugosc << ".\n";
        x = new double[dlugosc];
        for (int i = 0; i < dlugosc; i++)
            x[i] = 2 * i;
    }

    // void operator[](int liczba) { return this->liczba = f.x[liczba]; }

    void drukujWartosci()
    {
        for (int i = 0; i < dlugosc; i++)
            std::cout << "wartość wektora na miejscu " << i << " to " << x[i] << std::endl;
    }

    ~Wektor()
    {
        std::cout << "Destruktor wektora.\n";
        delete[] x;
    }

public:
    double* x;

    int getDlugosc() { return this->dlugosc; }
    int getPojemnosc() { return this->pojemnosc; }
    int getX(int numer) { return this->x[numer]; }

private:
    int dlugosc;
    int pojemnosc;
    // int* liczba;
};

int main()
{
    Wektor Vector1{};
    Wektor Vector2{10}; // czemu taki nawias

    std::cout << Vector1.getDlugosc() << " " << Vector1.getPojemnosc() << std::endl;
    std::cout << Vector2.getDlugosc() << " " << Vector2.getPojemnosc() << std::endl;
    // Vector1.drukujWartosci();

    // Vector1.zmienDlugosc(7);
    std::cout << " " << std::endl;
    // Vector1.drukujWartosci();
    std::cout << " " << std::endl;
    Vector2.drukujWartosci();
    std::cout << " " << std::endl;
    // Vector2.zmienDlugosc(8);
    std::cout << " " << std::endl;
    Vector2.drukujWartosci();

    //  std::cout << "getX tu da wartość =  " << Vector2.getX(6) << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

    Vector2.podawaniewartosci(6);

    std::cout << "Koniec main :) \n";
}