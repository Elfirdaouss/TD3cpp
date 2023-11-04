#include <iostream>
#include <exception> 
using namespace std; 
class Test{ 
    public:
    static int tableau[] ; 
    public :
    static int division(int indice, int diviseur){
        if( diviseur == 0 ) {
            throw "Attempted to divide by zero!";
            } 
        return tableau[indice]/diviseur; 
        }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() { 
    int x, y; 
    cout << "Entrez l'indice de l'entier a diviser: " << endl; 
    cin >> x ;
    cout << "Entrez le diviseur: " << endl; 
    cin >> y ;
    try {
        int result = Test::division(x, y);
        cout << "Le resultat de la division est: " << result << endl;
    } catch (const char* ex) {
        cerr <<ex<< endl;
    }
    return 0;
    }
