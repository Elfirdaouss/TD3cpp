#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void show_list(list<int>l){
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        cout<<*it<<'\t';
    }
    cout<<'\n';
}
void tri_bull(std::list<int> &l) {
    bool swapped;
    do {
        swapped = false;
        list<int>::iterator it = l.begin();
        list<int>::iterator Next =next(it);
        while (Next != l.end()) {
            if (*it > *Next) {
                iter_swap(it, Next);
                swapped = true;
            }
            ++it;
            ++Next;
        }
    } while (swapped);
}
void tri_selec(list<int>&l){
    for(list<int>::iterator it = l.begin(); it != l.end(); ++it){
        list<int>::iterator min=it;
        for(list<int>::iterator Next =next(it);Next!=l.end();Next++){
            if (*Next < *min) {
                min = Next;
            }
        }
        if(min !=it){
            iter_swap(it, min);
        }
    }
}

void tri_inser(list<int>& l) {
    for (list<int>::iterator i = next(l.begin()); i != l.end(); i++) {
        list<int>::iterator j = i;

        while (j != l.begin() && *prev(j) > *j) {
            swap(*prev(j), *j);
            --j;
        }
    }
}

int main(){
    list<int>list;
    int ell,nbr,i;
    cout<<"Entrer le nombres des ellements:";
    cin>>nbr;
    for(i=0;i<nbr;i++){
        cin>>ell;
        list.push_back(ell);
    }
    cout<<"votre list est:\n";
    show_list(list);
    tri_inser(list);
    cout<<"liste ordoner:\n";
    show_list(list);

    return 0;
}