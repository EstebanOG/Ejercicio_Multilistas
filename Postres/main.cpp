#include <iostream>
#include "lista.h"

using namespace std;

struct ingrediente{string nombre,medida;
				   int cantidad;
};

struct postre{string nombre, pasos;
			  int min_preparacion;
			  lista<ingrediente> i;
};
int main(int argc, char** argv) {
	int i,j,pos,num_ingre,op;
	bool seguir = true;
	ingrediente auxI;
	postre P;
	lista<postre> listP;
	while(seguir){
		cout<<"Menu: "<<endl;
		cout<<"1. Insertar postre."<<endl;
		cout<<"2. Modificar postre."<<endl;
		cout<<"3. Eliminar postre."<<endl;
		cout<<"4. Insertar ingredientes postre."<<endl;
		cout<<"5. Modificar ingredientes postre."<<endl;
		cout<<"6. Eliminar ingresientes postre."<<endl;
		cout<<"7. Mostrar postre."<<endl;
		cout<<"8. Mostrar lista de postres."<<endl;
		cout<<"9. Salir."<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"Nombre del postre: ";cin>>P.nombre;
				cout<<"Numero de minutos para su preparacion: ";cin>>P.min_preparacion;
				cout<<"Cómo se prepara?: ";cin>>P.pasos;
				cout<<"Cuántos ingredientes tiene?:";cin>>num_ingre;
				for(j=0;j<num_ingre;j++){
					cout<<"Nombre del ingrediente: ";cin>>auxI.nombre;
					cout<<"Unidad de medida: ";cin>>auxI.medida;
					cout<<"Cantidad: ";cin>>auxI.cantidad;
					P.i.insertar_final(auxI);
				}
				listP.insertar_final(P);
				break;
			case 2:
				break;
			case 3:
				cout<<"Ingrese la posicion del postre que desea eliminar: ";cin>>pos;
				listP.borrar(pos);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				cout<<"Ingrese la posición del postre a observar: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
				cout<<"Ingredientes:"<<endl;
				pos=1;
				while(pos<=P.i.get_tam())
				{
					P.i.buscar(pos, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					pos++;
				}
				break;
			case 8:
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				break;
			case 9:
				seguir = false;
				break;
			default:cout<<"Opción invalida"<<endl;
		}
	}	
	return 0;
}
