/* 
    Sebatian Gomez Gutierrez
    Sea a[1..n] un vector ordenado de enteros todos distintos, implementar un algoritmo con la menor 
    compejidad posible en el peor caso capaz de encontrar un índice i tal que 1≤i≤n y a[i] = i, 
    suponiendo que tal índice exista.
    17/04/2020
*/
#include <iostream>
#include <ctime>
#include <bits/stdc++.h> 
using namespace std;

int buscar(int a[], int valor, int ini, int fin){// inicia metodo buscar

    int i;
    // Ciclo iterativo de divide y venceras
    while (ini <= fin){
        i = (ini+fin)/2;
        if(a[i] > valor)
            fin = i -1;
        else if(a[i] < valor)
            ini = i + 1;
        else if(1<=i<=fin && a[i] == i) 
            return i;
        else return -1;
    }
    return -1;

}// termina metodo buscar

void ordenar(int a[], int size){// inicia metodo ordenar
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(a[j+1] < a[j]){
            int tmp = a[j + 1];
            a[j + 1] = a[j];
            a[j] = tmp;

            }                        
        }  
    }  
}//termina metodo ordenar   

void llenar(int a[], int size){// inicia metodo llenar

    for ( int i = 0; i < size; i++)
    {
        a[i] = rand() % 50;
    }

}// termina metodo llenar

void comprobar(int busca, int valor){

    if(busca == -1){
        cout << "\nEl numero "; cout << valor; cout << " no cumple las condiciones (1<=i<=n) y (a[i] = i)\n";
    }
    else{
        cout << "\nEl numero "; cout << valor; cout << " cumple las condiciones (1<=i<=n) y (a[i] = i)\n";
    }
}

int main(){// inicia main

    //Obtener cantidad de numeros a guardar en array
    int n;
    cout <<"Ingresa el valor de N: (cantidad de numeros a guardar) \n";
    cin >> n;
    
    //Obtener numero a buscar
    int valor;
    cout <<"\nIngresa el valor del numero a buscar: \n";
    cin >> valor;

    //Obtener tamaño arreglo
    int a[n];
    int size = sizeof(a)/sizeof(a[0]);

    //LLenar arreglo numeros random
    llenar(a,size);


    //Ordenar arreglo (BubbleSort)
    ordenar(a,size);

    /*int a[10] = {3,4,5,6,7,8,9,10,11,12};
    int size = sizeof(a)/sizeof(a[0]);*/

    cout << "\nArreglo ordenado"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i]; cout <<", ";
    }
    cout << "\n";

    //Divide y venceras
    int inicial = 0;
    int final = size -1;
    int busca= buscar(a,valor,inicial,final);

    //Comprobar resultado
    comprobar(busca,valor);

}// termina main