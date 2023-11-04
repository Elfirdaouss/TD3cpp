#include<iostream>
using namespace std;

class Complex{
    private:
    double x,y;
    public:
    Complex(double x,double y):x(x),y(y){
    }
    void operator==(Complex B){
        if(x==B.x&&y==B.y){
            cout<<"les deux nbr sont egaux\n";
        }
        else
            cout<<"les deux nombres sont pas egaux\n";
    }
    Complex operator+(Complex B){
        return Complex(x+B.x,y+B.y);
    }
    Complex operator-(Complex B){
        return Complex(x-B.x,y-B.y);
    }
    Complex operator*(Complex B){
        return Complex(x*B.x,y*B.y);
    }
    Complex operator/(Complex B){
        double denominator = B.x * B.x + B.y * B.y;
        return Complex((x * B.x + y * B.y) / denominator, (y * B.x - x * B.y) / denominator);
    }
    void afficher(){
        cout<<x<<"+"<<y<<"i\n";
    }
};

int main(){
    Complex A(2, 2);
    Complex B(1, 1);

    Complex sum = A + B;
    Complex dif= A - B;
    Complex pro=A*B;
    Complex divi=A/B;
    A==B;
    cout<<"la somme est: ";
    sum.afficher();
    cout<<"la differnce est: ";
    dif.afficher();
    cout<<"le produit est: ";
    pro.afficher();
    cout<<"la division est: ";
    divi.afficher();
    return 0;
}