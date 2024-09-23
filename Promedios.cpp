#include<iostream>

using namespace std;
void CalcularPromedio(int);

int main(){

    int n,numeros,cantPositivos,suma,rep;

    cout<<"Ingese la cantidad de numeros para calcular el promedio";
    cin>>n;

    CalcularPromedio(n);


}

void CalcularPromedio(int repe_ingresadas){
    int repeti_realizadas=0;
    float promedio,total_positivos=0,num_ingresado=0,contador_pos=0;

    while(repeti_realizadas<repe_ingresadas){

        cout<<"Digite un numero:";
        cin>>num_ingresado;

        if(num_ingresado>0){
            total_positivos+=num_ingresado;
            contador_pos++;
        }


        repeti_realizadas++;
    }
    promedio=total_positivos / contador_pos;
    cout<<"El promedio de los numeros positivos es: "<<promedio;
}
