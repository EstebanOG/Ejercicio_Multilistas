#include <iostream>
#include "stdlib.h"
#include "lista.h"

using namespace std;

struct ingrediente{string nombre,medida;
				   int cantidad;
};

struct postre{string nombre;
			  char pasos[500];
			  int min_preparacion;
			  lista<ingrediente> i;
};
int main(int argc, char** argv) {
	int i,j,pos,posI,num_ingre,op;
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
		cout<<"6. Eliminar ingredientes postre."<<endl;
		cout<<"7. Mostrar postre."<<endl;
		cout<<"8. Mostrar lista de postres."<<endl;
		cout<<"9. Salir."<<endl;
		cin>>op;
		switch(op){
			case 1:
				{
				system("cls");
				postre P;
				cout<<"Nombre del postre: ";cin>>P.nombre;
				cout<<"Numero de minutos para su preparacion: ";cin>>P.min_preparacion;
				cout<<"Cómo se prepara?: ";
				cin.ignore();
				cin.getline(P.pasos,500);
				cout<<"Cuántos ingredientes tiene?:";cin>>num_ingre;
				for(j=0;j<num_ingre;j++){
					cout<<"Nombre del ingrediente "<<j+1<<": ";cin>>auxI.nombre;
					cout<<"Unidad de medida: ";cin>>auxI.medida;
					cout<<"Cantidad: ";cin>>auxI.cantidad;
					P.i.insertar_final(auxI);
				}
				listP.insertar_final(P);}
				system("cls");
				break;
			case 2:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				cout<<"Ingrese la posición del postre a modificar: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Nombre del postre "<<pos<<" : ";
				cin>>P.nombre;
				cout<<"\n";
				cout<<"Numero de minutos para su preparacion: ";
				cin>>P.min_preparacion;
				cout<<"\n";
				cout<<"Cómo se prepara?: ";
				cin.ignore();
				cin.getline(P.pasos,500);
				cout<<"\n";
				listP.cambiar(pos,P);
				cout<<"Postre modificado: "<<endl;
				cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
				cout<<"Ingredientes:"<<endl;
				pos=1;
				while(pos<=P.i.get_tam())
				{
					cout<<pos<<endl;
					P.i.buscar(pos, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					pos++;
				}
				cout<<"Presione enter para continuar"<<endl;
				cin.ignore();
				system("cls");
				break;
			case 3:
				system("cls");
				cout<<"Ingrese la posicion del postre que desea eliminar: ";cin>>pos;
				listP.borrar(pos);
				system("pause");
				system("cls");
				break;
			case 4:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				cout<<"Ingrese la posición del postre a modificar: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Nombre del ingrediente nuevo: ";cin>>auxI.nombre;
				cout<<"Unidad de medida: ";cin>>auxI.medida;
				cout<<"Cantidad: ";cin>>auxI.cantidad;
				P.i.insertar_final(auxI);
				listP.cambiar(pos,P);
				cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
				cout<<"Ingredientes:"<<endl;
				posI=1;
				while(posI<=P.i.get_tam())
				{
					cout<<posI<<". ";
					P.i.buscar(posI, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					posI++;
				}
				cout<<"Presione enter para continuar"<<endl;
				cin.ignore();
				system("cls");
				break;
			case 5:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				cout<<"Ingrese la posición del postre: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Los ingredientes del postre son:"<<endl;
				pos = 1;
				while(pos<=P.i.get_tam())
				{
					P.i.buscar(pos, &auxI);
					cout<<pos<<"."<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					pos++;
				}
				cout<<"Cuál ingrediente desea modificar?: ";cin>>posI;
				P.i.buscar(posI, &auxI);
				cout<<"Nombre del ingrediente: ";cin>>auxI.nombre;
				cout<<"Unidad de medida: ";cin>>auxI.medida;
				cout<<"Cantidad: ";cin>>auxI.cantidad;
				P.i.cambiar(posI,auxI);
				listP.cambiar(pos,P);
				cout<<"ingrediente modificado"<<endl;
				cout<<"Los ingredientes del postre son:"<<endl;
				pos = 1;
				while(pos<=P.i.get_tam())
				{
					P.i.buscar(pos, &auxI);
					cout<<pos<<"."<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					pos++;
				}
				system("pause");
				system("cls");
				break;
			case 6:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				cout<<"Ingrese la posicion del postre donde desea eliminar el ingrediente: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
				cout<<"Ingredientes:"<<endl;
				posI=1;
				while(posI<=P.i.get_tam())
				{
					cout<<posI<<". ";
					P.i.buscar(posI, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					posI++;
				}
				cout<<"Ingrese la posición del ingrediente que desea eliminar"<<endl;
				cin>>posI;
				P.i.borrar(posI);
				listP.cambiar(pos,P);
				cout<<"Ingrediente eliminado"<<endl;
				posI=1;
				cout<<"Ingredientes"<<endl;
				while(posI<=P.i.get_tam())
				{
					cout<<posI<<". ";
					P.i.buscar(posI, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					posI++;
				}
				system("pause");
				//cin.ignore();
				system("cls");
				break;
			case 7:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				cout<<"Ingrese la posición del postre a observar: ";cin>>pos;
				listP.buscar(pos,&P);
				cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
				cout<<"Ingredientes:"<<endl;
				posI=1;
				while(posI<=P.i.get_tam())
				{
					cout<<posI<<". ";
					P.i.buscar(posI, &auxI);
					cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
					posI++;
				}
				system("pause");
				system("cls");
				break;
			case 8:
				system("cls");
				pos=1;
				cout<<"Lista de postres:"<<endl;
				while(pos<=listP.get_tam())
				{
					listP.buscar(pos, &P);
					cout<<pos<<". "<<P.nombre<<endl;
					pos++;
				}
				system("pause");
				system("cls");
				break;
			case 9:
				seguir = false;
				break;
			default:cout<<"Opción invalida"<<endl;
		}
	}	
	return 0;
}




























/*

#include <iostream>
#include "lista.h"

using namespace std;

struct ingrediente{string nombre,medida;
				   int cantidad;
};

struct postre{string nombre;
			  char pasos[500];
			  int min_preparacion;
			  lista<ingrediente> i;
};
int main(int argc, char** argv) {
	int num_postre,i,j,k,pos,posI=1,num_ingre,dec=1;
	ingrediente auxI;
	postre P;
	lista<postre> listP;
	
	cout<<"Cuantos postres desea ingresar?:";cin>>num_postre;
	for(i=0;i<num_postre;i++){
		postre P;
		cout<<"Nombre del postre "<<i+1<<" : ";
		cin>>P.nombre;
		cout<<"\n";
		cout<<"Numero de minutos para su preparacion: ";
		cin>>P.min_preparacion;
		cout<<"\n";
		cout<<"Cómo se prepara?: ";
		cin.ignore();
		cin.getline(P.pasos,500);
		cout<<"\n";
		cout<<"Cuántos ingredientes tiene?:";
		cin>>num_ingre;

		for(j=0;j<num_ingre;j++){
			cout<<"Nombre del ingrediente "<<j+1<<" : ";cin>>auxI.nombre;
			cout<<"Unidad de medida: ";cin>>auxI.medida;
			cout<<"Cantidad: ";cin>>auxI.cantidad;
			P.i.insertar_final(auxI);	
		}
		listP.insertar_final(P);
	}
	pos=1;
	cout<<"Lista de postres:"<<endl;
	while(pos<=listP.get_tam())
	{
		listP.buscar(pos, &P);
		cout<<pos<<". "<<P.nombre<<endl;
		pos++;
	}
	
	while(dec!=0){
		cout<<"Ingrese la posición del postre a observar: ";cin>>pos;
		listP.buscar(pos,&P);
		cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
		cout<<"Ingredientes:"<<endl;
		pos=1;
		cout<<P.i.get_tam();
		while(pos<=P.i.get_tam())
		{
			cout<<pos<<endl;
			P.i.buscar(pos, &auxI);
			cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
			pos++;
		}
		cout<<"¿Desea ver otro postre?  Si=1   No=0"<<endl;
		cin>>dec;
	}
	
	cout<<"¿Desea modificar un postre? Si=1 No=0"<<endl;
	cin>>dec;
	while(dec!=0){
		posI=1;
		cout<<"Ingrese la posición del postre a modificar: ";cin>>pos;
		listP.buscar(pos,&P);
		cout<<"Nombre del postre "<<pos<<" : ";
		cin>>P.nombre;
		cout<<"\n";
		cout<<"Numero de minutos para su preparacion: ";
		cin>>P.min_preparacion;
		cout<<"\n";
		cout<<"Cómo se prepara?: ";
		cin.ignore();
		cin.getline(P.pasos,500);
		cout<<"\n";
		cout<<"Ingredients:"<<endl;
		while(posI<=P.i.get_tam())
		{
			cout<<posI<<endl;
			P.i.buscar(posI, &auxI);
			cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
			posI++;
		}
		cout<<"Cuál ingrediente desea modificar? ingrese 0 si no desea modificar ninguno";
		cin>>posI;
		while(posI!=0){
			P.i.buscar(posI,&auxI);
			cout<<"Nombre del ingrediente "<<posI<<" : ";cin>>auxI.nombre;
			cout<<"Unidad de medida: ";cin>>auxI.medida;
			cout<<"Cantidad: ";cin>>auxI.cantidad;
			P.i.cambiar(posI,auxI);
			cout<<"Cuál ingrediente desea modificar? ingrese 0 si no desea modificar ninguno";
			cin>>posI;
		}
		cout<<"Postre modificado: "<<endl;
		cout<<"Nombre: "<<P.nombre<<endl<<"Minutos de preparacion: "<<P.min_preparacion<<endl<<"Preparación: "<<P.pasos<<endl;
		cout<<"Ingredientes:"<<endl;
		pos=1;
		cout<<P.i.get_tam();
		while(pos<=P.i.get_tam())
		{
			cout<<pos<<endl;
			P.i.buscar(pos, &auxI);
			cout<<"Nombre: "<<auxI.nombre<<endl<<"Medida: "<<auxI.medida<<endl<<"Cantidad: "<<auxI.cantidad<<endl;
			pos++;
		}
		listP.cambiar(pos,P);
		cout<<"¿Desea modificar otro postre?  Si=1   No=0"<<endl;
		cin>>dec;
	}
	
	return 0;
}
*/
