#include <NTL/ZZ.h>
#include <iostream>
using namespace std;
using namespace NTL;
#include <stdlib.h>
#include <ctime>


class algoritmomcd{

    private:
        ZZ res;
        int cont=0;
    public:
        algoritmomcd();
        ZZ resto(ZZ ,ZZ);
        ZZ algoritmo1(ZZ ,ZZ);
        ZZ algoritmo2(ZZ ,ZZ);
        ZZ algoritmo3(ZZ ,ZZ);

};
algoritmomcd::algoritmomcd(){

}

ZZ algoritmomcd::resto(ZZ a,ZZ b){
        ZZ r;
        r=a-((a/b)*b);
        if(r<0){
            r=b-r;
        }
        //cout<<"r: "<<r;
        return r;
}

ZZ algoritmomcd::algoritmo1(ZZ a, ZZ b){
    ZZ r;                       //SI ES QUE AL INGRESAR LOS PARAMTROS A ES MAYOR A B ENTONCES DARA UNA VUELTA DEMAS
    do{                         //PARA CAMBIAR LOS VALORES E INVERTIRLOS
        r=resto(a,b);
        a=b;
        b=r;
        //cout<<a<<" "<<b<<" ";
    }while(r!=0);

    return a;

}
ZZ algoritmomcd::algoritmo2(ZZ a,ZZ b){

    ZZ r;
    r=resto(a,b);
    while(r!=0){
            //cout<<a<<" "<<b<<" ";
            if(r>b/2){
                r=b-r;
            }
            a=b;
            b=r;
            r=resto(a,b);
    }
    return b;
}
ZZ algoritmomcd::algoritmo3(ZZ a,ZZ b){
    ZZ r;
    if(b==0){         //SI EL DIVIDENDO ES IGUAL A 0 , EL MCD ES A
        return a;
        cont=0;
    }
    cout<<"valor de a y b son "<<a<<" "<<b<<"\n";
    return algoritmo3(b,resto(a,b));       //SE LLAMA A LA FUNCION RECURSIVAMENTE PONIENDO B COMO VALOR DE A Y EL RESTO COMO B
}                                        //ACORTANDO LA CANTIDAD DE OPERACIONES Y MEJORANDO EL ALGORITMO





int main()
{
   algoritmomcd objeto;
   ZZ a, b, c,d;
   clock_t t;

   cin >> a;
   cin >> b;

   t=clock();
   d=objeto.algoritmo3(a,b); //Se puede probar con cualquier algoritmo
   t=clock()-t;
   cout<<"\nTIEMPO QUE TARDO EL ALGORITMO : "<<float(t)/CLOCKS_PER_SEC<<" segundos\n";
   cout<<"\mcd :"<<d;
   system("pause");
   return 0;
   
}
