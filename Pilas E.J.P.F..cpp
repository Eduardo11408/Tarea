/*EDUARDO JESUS PEREZ FLORES
INSERTAR ELEMENTOS A LA PILA */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregarPila(nodo *&,int);

int main(){
	nodo *pila = NULL;
	int n1, n2;
	
	cout<<"Ingrese un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"ingrese otro numero: ";
	cin>>n2;
	agregarPila(pila,n2);
	return 0;
}

void agregarPila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nEl elemento "<<n<<" esta agregado a la PILA "<<endl;
}
