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
	int num_postre,i,pos,num_ingre;
	ingrediente auxI;
	postre P;
	lista<postre> listP;
	
	cout<<"Cuantos postres desea ingresar?:";cin>>num_postre;
	for(i=0;i<num_postre;i++){
		cout<<"Nombre del postre: ";cin>>P.nombre;
		cout<<"Numero de minutos para su preparacion: ";cin>>P.min_preparacion;
		cout<<"Cómo se prepara?: ";cin>>P.pasos;
		cout<<"Cuántos ingredientes tiene?:";cin>>num_ingre;
		for(i=0;i<num_ingre;i++){
			cout<<"Nombre del ingrediente: ";cin>>auxI.nombre;
			cout<<"Unidad de medida: ";cin>>auxI.medida;
			cout<<"Cantidad: ";cin>>auxI.cantidad;
			P.i.insertar_final(auxI);
		}
		listP.insertar_final(P);
	}
	pos=1;
	while(pos<=listP.get_tam())
	{
		listP.buscar(pos, &P);
		cout<<P.nombre<<endl<<P.min_preparacion<<endl<<P.pasos<<endl;
		pos++;
	}
	return 0;
}
