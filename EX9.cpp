//1-Le code ne sera pas compilé correctement
//2-
#include <iostream>
using namespace std;

template <class T>
class point
{
    T x, y; // coordinates

public:
    point(T abs, T ord) : x(abs), y(ord) {} // Use member initialization list

    void affiche()
    {
        cout << "Coordonnees: " << static_cast<int>(x) << " " << static_cast<int>(y) << "\n";
    }
};

int main()
{
    point<char> p(60, 65);
    p.affiche();

    return 0;
}
