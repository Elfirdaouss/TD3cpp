#include<iostream>
#include <string>
#include<list>
#include<iterator>
using namespace std;

class personne{
    private:
    string nom,prenom;
    int age;
    public:
    personne() {
        cout<<"Enter nom: ";
        getline(cin,nom);
        cout << "Enter prenom: ";
        getline(cin,prenom);
        cout << "Enter age: ";
        cin >> age;
    }
    friend void tri(list<personne> &p);
    friend void show_list(list<personne>p);
};
void show_list(list<personne>p){
    list<personne>::iterator it;
     cout<<"nom\t\t\ttprenom\t\t\tage\n";
    for(it = p.begin(); it != p.end(); ++it){
        cout<<it->nom<<"\t\t"<<it->prenom<<"\t\t"<<it->age<<'\n';
    }
    cout<<'\n';
}
void tri(list<personne> &p){
        for(list<personne>::iterator it = p.begin(); it !=p.end(); ++it){
        list<personne>::iterator min=it;
        for(list<personne>::iterator Next =next(it);Next!=p.end();Next++){
            if (min->nom+min->prenom>Next->nom+Next->prenom) {
                min = Next;
            }
        }
        if(min !=it){
            iter_swap(it, min);
        }
    }
    }

int main() {
    list<personne> people;
    int nbr;
    cout<<"Entrer le nombres des personne :";
    cin>>nbr;
    for(int i=0;i<nbr;i++){
        cout<<"***personne "<<i+1<<":***\n";
        personne p;
        people.push_back(p);
    }
    show_list(people);
    tri(people);
    cout<<"list par order alphabitique";
    show_list(people);
    return 0;
}