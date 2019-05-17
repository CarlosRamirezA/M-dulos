#include <bits/stdc++.h>
#include "Funciones.h"
using namespace std;


void FuncionEuler(){
    int n;

    cout<<"Ingrese un numero: "; cin>>n;

    bool  b,b1;
    float aux=1.0,aux1=n,aux2;

    for(int i=1;i<=n;i++){
        b=false;
        if(i!=1){
                b1=false;
            while(b!=true){
                if(n%i==0){
                    if(b1!=true){
                        aux=(aux*(i-1))/i;
                        cout<<" "<<i;
                        b1=true;
                    }
                    n=n/i;
                }else {
                    b=true;
                }
            }
        }else if(i==1){
            n=n/i;
        }
    }
    aux2=aux1*aux;
    cout<<"\n Resultado: "<<aux2<<endl;
}

void Multiplicativo(){

       int b,x,r,z;

       cout<<"\nIngrese Zn: ";
       cin>>z;
       b=z;

     for(int i=0;i<z;i++)
        {
            x=i;
            while(z!=0)
            {
                r=x%z;
                x=z;
                z=r;
            }
            if(x==1)
            {
                cout<<" "<<i<<" ";

            }
           z=b;
        }
     cout<<endl;

}

bool Esprimo(int n){

    if(n<=1){
        return false;
    }
    int Limite = floor(sqrt(n));
    int divisor=0;
    for(int i=1;i<=Limite;i++){
        if(n%i==0){
            divisor++;
        }else if(divisor>1){return false;}

    }
    return true;
}

void DivisionTrial(){

    int n;
    list <int> cadena;
    cout<<"Ingrese n : "; cin>>n;

    for(int i=1;i<n;i++){
        if(Esprimo(i)){
         cadena.push_back(i);
        }
    }

     list<int>::iterator it=cadena.begin();
       while(it!=cadena.end()){
      cout<<*it++<<"  ";
    }

    cout<<endl;
}
int mcd(int a,int b){
    int m=a,aux=b,r;
    do{
        r=m%aux;
        m=aux;
        aux=r;
    }while(r!=0);
    return m;
}

void Pholard(){


        long a=2,b=2,d,n;

        list <long> la;
        list <long> lb;
        list <long> ld;


        cout<<"Ingrese numero : "; cin>>n;

          while(true){

            a=((a*a)+1)%n;
            b=((b*b)+1)%n;
            b=((b*b)+1)%n;
            d=mcd(abs(a-b),n);

            la.push_back(a);
            lb.push_back(b);
            ld.push_back(d);
            if(d>1&&d<n){
                break;
            }if(d==n){
                d=false;

            }
        }


        list<long>::iterator ita=la.begin();
        list<long>::iterator itb=lb.begin();
        list<long>::iterator itd=ld.begin();

        while(ita!=la.end()){
            cout<<*ita++<<"  ";
        }
        cout<<endl;
        while(itb!=lb.end()){
            cout<<*itb++<<"  ";
        }
        cout<<endl;
        while(itd!=ld.end()){
            cout<<*itd++<<"  ";
        }

        cout<<endl;

        cout<<endl<<d;
}
