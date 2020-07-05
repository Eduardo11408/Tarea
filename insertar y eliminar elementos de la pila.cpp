//Eduardo Jesus Perez Flores
//INSERTAR Y ELIMINAR ELEMENTOS DE LA PILA

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{     //Estructura nodo.
	int dato;		//Dato de tipo entero.
	nodo *siguiente;  //Nodo y puntero siguiente.
};

//////////////////////////////////////////// Prototipo de funcion //////////////////////////////////////////////////////////
void agregarPila(nodo *&,int);
void sacarPila(nodo *&,int &);

int main(){
	nodo *pila = NULL;	//Creando nodo pila	e igualar a null.
	int dato;
	char rpt;
	
///////////////////////////////////////////	Agregar elementos a la pila como el usuario desee ////////////////////////////////////////////////
	do{			//Con do while agregamos elementos hasta el el usuario decida
		cout<<"Ingresa un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDesea agregar otro numero a la pila(s/n): ";
		cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));	//En caso de que el usuario ponga S en mayuscula.
	
/////////////////////////////////////////// Sacar todos los elementos con un while ///////////////////////////////////////////////////////////
	
	cout<<"\nEliminando/ todos los elementos de la Pila: ";
	while(pila !=NULL){		//Mientras no se el final de la pila.
		sacarPila	(pila,dato);
		if(pila != NULL){		//Condicional si hay mas elementos (,) y un (.) si ya no hay elementos.
			cout<<dato<< " , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}


//////////////////////////////////////////// Pasos para agregar a la Pila /////////////////////////////////////////////////////////////////////////////
void agregarPila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();   
	nuevo_nodo->dato =n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\tEl elemento "<<n<<" se agrego a la pila";
}

////////////////////////////////////////// Pasos para eliminar de la Pila //////////////////////////////////////////////////////////////////////////////
void sacarPila(nodo *&pila,int &n){
	nodo *aux =pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
