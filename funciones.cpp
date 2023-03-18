#include <iostream>
#include "archivos.h";

using namespace std;


void tablamultiplicar(){
    int num,i,resultado;
    cout<<"Ingrese un numero para calcular su tabla:"<<endl;
    cin>>num;

    for(i=1;i<=10;i++){
        resultado=i*num;

        cout<<num<<"x"<<i<<"="<<resultado<<endl;
    }
}
void fibonacci(){
    int aux = 1, fib = 0, lim, in;

    cout << "Ingrese un numero para la sucesion de fibonacci: ";
    cin >> lim;
    if(lim > 0) {
        for(in = 1; in <= lim; in++) {
            cout << "[" << fib << "] ";
            aux += fib; /* lo mismo que aux = aux + fib; */
            fib = aux - fib;
        }
    } else {
        cout << "El numero debe ser mayor a cero!!" << endl;
    }
    cout << "\n";
}

void numeropar(){
    int x;

    cout<<"Ingrese numero para calcular si es par:";
    cin>>x;
    cout<<endl;
    if(x%2==0){
        cout<<"Es un numero par"<<endl;}
    else{
        cout<<"No es un numero par";
    };
}

void numeroimpar(){
    int y;
    cout<<"Ingrese numero para calcular si es impar:";
    cin>>y;
    cout<<endl;
    if(y%3==0){
        cout<<"Es un numero Primo"<<endl;}

    else{
        cout<<"No es un numero primo"<<endl;
    };
}
void factorial(){
    int n,factorial=1;
    cout<<"ingrese un numero para calcular su factorial: ";
    cin>>n;
    if(n>0){
        if(n!=0){
            for(int i=1;i<=n;i++){
                factorial=factorial*i;
            }
            cout<<"su factorial es: "<<factorial;
        }
        else{
            cout<<"el factorial es: "<<1<<endl;
        }
    }
    else{
        cout<<"no se puede calcular el factorial ingrese numero postivo";
    }
}
