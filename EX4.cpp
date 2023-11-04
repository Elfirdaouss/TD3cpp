#include<iostream>
#include<set>
using namespace std;

void show_list(set<int>s){
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
        cout<<*it<<'\n';
}
bool exist(set<int>s,int N){
    bool Exist=false;
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        if(*it==N)
            Exist=true;
    }
    return Exist;
}
int main(){
    set<int>S1;
    int nbr;
    for(int i=0;i<100;i++){
        S1.insert(i+1);
    }
    show_list(S1);
    cout<<"Entrer la valeur que vous recherche:";
    cin>>nbr; 
    if(exist(S1,nbr))
        cout<<nbr<<" est dans lla liste";
    else
         cout<<nbr<<" n'est pas dans la liste";
    return 0;
}