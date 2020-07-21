#include <iostream>
#include "lista.h"
#include<string>

using namespace std;

struct ingrediente{
	string nombre, medida;
	float cantidad;
};

struct postre{
	string nombre;
	char pasos[2000];
	int min_preparacion;
	lista<ingrediente> ingre;
};



int main(int argc, char** argv){
	
	int i, j, pos, num_ingre, op, pos2;
	bool seguir = true;
	bool continuar = false;
	char conf;
	string pas;
	ingrediente auxI;
	lista<postre> listP;
	
	
	postre TorOreo;
	TorOreo.nombre = "Torta de Oreo y Chocolate";
	TorOreo.min_preparacion = 145;
	auxI.nombre = "Galletas Oreo";
	auxI.medida = "Galletas Oreo";
	auxI.cantidad = 12;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Mantequilla";
	auxI.medida = "Gramos";
	auxI.cantidad = 25;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Maicena";
	auxI.medida = "Gramos";
	auxI.cantidad = 10;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Sal";
	auxI.medida = "Gramos";
	auxI.cantidad = 1;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Azucar";
	auxI.medida = "Gramos";
	auxI.cantidad = 50;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Chocolate Valor con m\xa0s del 70% de Cacao";
	auxI.medida = "Gramos";
	auxI.cantidad = 55;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Leche";
	auxI.medida = "Mililitros";
	auxI.cantidad = 240;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Extracto de vainilla";
	auxI.medida = "Cucharadita";
	auxI.cantidad = 0.5;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Nata con m\xa0s del 35% de materia grasa";
	auxI.medida = "Mililitros";
	auxI.cantidad = 250;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Azucar impalpable";
	auxI.medida = "Gramos";
	auxI.cantidad = 20;
	TorOreo.ingre.insertar_final(auxI);
	auxI.nombre = "Chips de chocolate";
	auxI.medida = "Gramos";
	auxI.cantidad = 150;
	TorOreo.ingre.insertar_final(auxI);
	pas = "1. Comenzaremos preparando la base de la lasaña y para ello trituraremos las galletas oreo.\n"
		"2. Derretimos la manteca y unimos esta con las galletas trituradas hasta que se integre bien.\n"
		"3. Lo colocaremos como base en un molde rectangular.\n"
		"4. Meteremos en la heladera y dejaremos que enfríe.\n"
		"5. La segunda capa que hacemos es el postre ligero de chocolate para que se vaya enfriando.\n"
		"6. En una cazuela ponemos la maicena, la sal y el azúcar y la leche, lo colocamos a fuego medio y no dejamos de remover hasta que vaya espesando, tardar\xa0 unos 8-10 minutos.\n"
		"7. En este momento apartaremos la cazuela del fuego y agregamos el chocolate removi\x82ndolo para que se derrita por completo, finalmente añadiremos el extracto de vainilla.\n"
		"8. Verteremos en un cuenco y removeremos cada cinco minutos para que vaya cogiendo cuerpo al enfriarse.\n"
		"9. Mientras tanto montamos la crema con el azúcar impalpable.\n"
		"10. Sacaremos de la nevera la base de galleta y sobre ella pondremos una capa de nata, sobre la misma una capa de pudin ligero de chocolate, nuevamente una capa de nata y decoraremos con las gotas de chocolate.\n"
		"11. Conservar en heladera por 2 horas.\n";
	for(i = 0; i<pas.length(); i++){
		TorOreo.pasos[i] = pas[i];
	}
	listP.insertar_final(TorOreo);
	
	
	postre CheesDuo;
	CheesDuo.nombre = "Cheesecake Duo";
	CheesDuo.min_preparacion = 80;
	auxI.nombre = "Galletas de chocolate molidas";
	auxI.medida = "Tazas";
	auxI.cantidad = 2;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Mantequilla";
	auxI.medida = "Gramos";
	auxI.cantidad = 90;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Queso crema firme";
	auxI.medida = "Gramos";
	auxI.cantidad = 250;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Huevos";
	auxI.medida = "Huevos";
	auxI.cantidad = 3;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Extracto de vainilla";
	auxI.medida = "Cucharadita";
	auxI.cantidad = 1;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Cacao en polvo";
	auxI.medida = "Tazas";
	auxI.cantidad = 0.25;
	CheesDuo.ingre.insertar_final(auxI);
	auxI.nombre = "Leche condensada pequeña";
	auxI.medida = "Lata";
	auxI.cantidad = 1;
	CheesDuo.ingre.insertar_final(auxI);
	pas = "1. Procesar las galletas de chocolate junto a la mantequilla derretida.\n"
		"2. Formar la base de la torta.\n"
		"3. Licuar el queso crema junto al resto de los ingredientes.\n"
		"4. Dividir la mezcla en dos y a una agregarle cacao en polvo.\n"
		"5. Verter un poco de mezcla sin cacao, otro poco de mezcla con cacao y as\xa1 sucesivamente hasta terminar.\n"
		"6. Con el rev\x82s de una cuchara darle el aspecto marmolado.\n"
		"7. Hornear 1 hora a 170 grados.\n"
		"8. Refrigerar.\n";
	
	for(i = 0; i<pas.length(); i++){
		CheesDuo.pasos[i] = pas[i];
	}
	listP.insertar_final(CheesDuo);
	
	
	postre PosFruRoj;
	PosFruRoj.nombre = "Postre de Frutos Rojos";
	PosFruRoj.min_preparacion = 90;
	auxI.nombre = "Merenguitos";
	auxI.medida = "Gramos";
	auxI.cantidad = 100;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Bizcochuelo";
	auxI.medida = "Capas";
	auxI.cantidad = 3;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Crema de leche";
	auxI.medida = "Mililitros";
	auxI.cantidad = 200;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Queso crema";
	auxI.medida = "Gramos";
	auxI.cantidad = 200;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Azúcar impalpable";
	auxI.medida = "Tazas";
	auxI.cantidad = 0.25;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Esencia de vainilla";
	auxI.medida = "Cucharadita";
	auxI.cantidad = 1;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Mermelada de frambuesa";
	auxI.medida = "Gramos";
	auxI.cantidad = 200;
	PosFruRoj.ingre.insertar_final(auxI);
	auxI.nombre = "Frambuesas";
	auxI.medida = "Gramos";
	auxI.cantidad = 250;
	PosFruRoj.ingre.insertar_final(auxI);
	pas = "1. Integrar en un bowl crema batida a 3/4 punto, queso crema a temperatura ambiente, azúcar impalpable y esencia de vainilla.\n"
		"2. Colocar en una budinera con papel film una capa de bizcochuelo.\n"
		"3. Continuar con una capa de la crema. Reservar 1/4.\n"
		"4. Añadir una capa de mermelada de frambuesa, otra de merenguitos y otra de frambuesas frescas.\n"
		"5. Repetir hasta cubrir todo el molde.\n"
		"6. Refrigerar 1 hora.\n"
		"7. Cubrir con la crema hecha previamente.\n"
		"8. Congelar 20 minutos.\n"
		"9. Decorar con salsa de frambuesa.\n";
		
	for(i = 0; i<pas.length(); i++){
		PosFruRoj.pasos[i] = pas[i];
	}
	listP.insertar_final(PosFruRoj);
	
	
	
	
	
	while(seguir){
		system("cls");
		cout << "Menu:" << endl;
		cout << "1. Insertar postre." << endl;
		cout << "2. Modificar postre." << endl;
		cout << "3. Eliminar postre." << endl;
		cout << "4. Insertar ingredientes postre." << endl;
		cout << "5. Modificar ingredientes postre." << endl;
		cout << "6. Eliminar ingredientes postre." << endl;
		cout << "7. Mostrar informaci\xa2n postre." << endl;
		cout << "8. Mostrar lista de postres." << endl;
		cout << "9. Salir." << endl << endl;
		cout << "Seleccione una opci\xa2n: ";
		cin >> op;
		system("cls");
		postre P;
		switch(op){
			case 1:
				continuar = false;
				do{
					cout << "Nombre del postre: ";
					cin >> P.nombre;
					cout << "N\xa3mero de minutos para su preparaci\xa2n: ";
					cin >> P.min_preparacion;
					cout << char(168) << "C\xa2mo se prepara?: ";
					cin.ignore();
					cin.getline(P.pasos, 2000);
					cout << char(168) << "Cu\xa0ntos ingredientes tiene?: ";
					cin >> num_ingre;
					while(num_ingre<=0){
						cout << "Por favor ingrese un n\xa3mero de ingredientes mayor a 0: ";
						cin >> num_ingre;
					}
					for(i = 0; i<num_ingre; i++){
						cout << "Nombre del ingrediente " << i+1 << " : ";
						cin >> auxI.nombre;
						cout << "Unidad de medida: ";
						cin >> auxI.medida;
						cout << "Cantidad: ";
						cin >> auxI.cantidad;
						P.ingre.insertar_final(auxI);
					}
					listP.insertar_final(P);
					cout << endl << char(168) << "Desea agregar otro postre? (S/N): ";
					cin >> conf;
					while(conf != 'S' && conf != 's' && conf != 'N' && conf != 'n'){
						cout << "Opci\xa2n no valida, recuerde las opciones validas son S y N, por favor ingrese una opci\xa2n valida: ";
						cin >> conf;
					}
					if(conf == 'S' || conf == 's'){
						continuar = true;
						system("cls");
					}
					else if(conf == 'N' || conf == 'n'){
						continuar = false;
					}
				}while(continuar==true);
				
				cout << endl;
				system("pause");
				break;
			case 2:
				continuar = false;
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				do{
					cout << char(168) << "Cu\xa0l postre desea modificar?: ";
					cin >> pos;
					listP.buscar(pos,&P);
					cout << "Nombre del postre " << pos << " : ";
					cin >> P.nombre;
					cout << "N\xa3mero de minutos para su preparaci\xa2n: ";
					cin >> P.min_preparacion;
					cout << char(168) << "C\xa2mo se prepara?: ";
					cin.ignore();
					cin.getline(P.pasos, 2000);
					listP.cambiar(pos,P);
					cout << "Postre modificado:" << endl;
					cout << "Nombre: " << P.nombre << endl << "Minutos de preparaci\xa2n: " << P.min_preparacion << endl << "Preparaci\xa2n: " << P.pasos << endl;
					cout << "Ingredientes:" << endl;
					pos = 1;
					while(pos<=P.ingre.get_tam()){
						P.ingre.buscar(pos, &auxI);
						cout << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl;
						pos++;
					}
					cout << endl << char(168) << "Desea modificar otro postre? (S/N)";
					cin >> conf;
					while(conf != 'S' && conf != 's' && conf != 'N' && conf != 'n'){
						cout << "Opci\xa2n no valida, recuerde las opciones validas son S y N, por favor ingrese una opci\xa2n valida: ";
						cin >> conf;
					}
					if(conf == 'S' || conf == 's'){
						continuar = true;
						system("cls");
						pos = 1;
						cout << "Lista de postres:" << endl;
						while(pos<=listP.get_tam()){
							listP.buscar(pos, &P);
							cout << pos << ". " << P.nombre << endl;
							pos++;
						}
					}
					else if(conf == 'N' || conf == 'n'){
						continuar = false;
					}
				}while(continuar==true);
				
				cout << endl;
				system("pause");
				break;
			case 3:
				continuar = false;
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				do{
					cout << "Ingrese la posici\xa2n del postre que desea eliminar: ";
					cin >> pos;
					while(listP.buscar(pos, &P) == false){
						cout << "Ha ingresado una posici\xa2n invalida, por favor ingrese una valida: ";
						cin >> pos;
					}
					listP.borrar(pos);
					cout << "Postre eliminado exitosamente" << endl;
					cout << char(168) << "Desea eliminar otro postre? (S/N): ";
					cin >> conf;
					while(conf != 'S' && conf != 's' && conf != 'N' && conf != 'n'){
						cout << "Opci\xa2n no valida, recuerde las opciones validas son S y N, por favor ingrese una opci\xa2n valida: ";
						cin >> conf;
					}
					if(conf == 'S' || conf == 's'){
						continuar = true;
						system("cls");
						pos = 1;
						cout << "Lista de postres:" << endl;
						while(pos<=listP.get_tam()){
							listP.buscar(pos, &P);
							cout << pos << ". " << P.nombre << endl;
							pos++;
						}
					}
					else if(conf == 'N' || conf == 'n'){
						continuar = false;
					}
				}while(continuar==true);
				cout << endl;
				system("pause");
				break;
			case 4:
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				cout << "Ingrese la posici\xa2n del postre que desea modificar: ";
				cin >> pos;
				listP.buscar(pos,&P);
				cout << char(168) << "Cu\xa0ntos ingredientes desea agregar?:";
				cin >> num_ingre;
				for(i = 0; i<num_ingre; i++){
					cout << "Nombre del ingrediente nuevo: ";
					cin >> auxI.nombre;
					cout << "Unidad de medida: ";
					cin >> auxI.medida;
					cout << "Cantidad: ";
					cin >> auxI.cantidad;
					P.ingre.insertar_final(auxI);
				}
				listP.cambiar(pos,P);
				cout << "El postre " << P.nombre <<" con los nuevos ingredientes quedo así:" << endl << endl;
				cout << "Minutos de preparaci\xa2n: " << P.min_preparacion << endl << "Preparaci\xa2n: " << P.pasos << endl;
				cout << "Ingredientes:" << endl;
				pos = 1;
				while(pos<=P.ingre.get_tam()){
					P.ingre.buscar(pos, &auxI);
					cout << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl;
					pos++;
				}
				cout << endl;
				system("pause");
				break;
			case 5:
				continuar = false;
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				cout << "Ingrese la posici\xa2n del postre del cual desea modificar alg\xa3n ingrediente: ";
				cin >> pos2;
				while(listP.buscar(pos2,&P) == false){
					cout << "Ha ingresado una posici\xa2n invalida, por favor ingrese una valida: ";
					cin >> pos2;
				}
				cout << "Los ingredientes del postre son:" << endl;
				pos = 1;
				while(pos<=P.ingre.get_tam()){
					P.ingre.buscar(pos, &auxI);
					cout << pos << "." << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl;
					pos++;
				}
				do{
					cout << char(168) << "Cu\xa0l ingrediente desea modificar?: ";
					cin >> pos;
					while(P.ingre.buscar(pos, &auxI) == false){
						cout << "Ha ingresado una posici\xa2n invalida, por favor ingrese una valida: ";
						cin >> pos;
					}
					system("cls");
					cout << "Nombre del ingrediente: ";
					cin >> auxI.nombre;
					cout << "Unidad de medida: ";
					cin >> auxI.medida;
					cout << "Cantidad: ";
					cin >> auxI.cantidad;
					P.ingre.cambiar(pos,auxI);
					listP.cambiar(pos2,P);
					cout << "Ingrediente modificado exitosamente" << endl;
					cout << char(168) << "Desea modificar otro ingrediente? (S/N): ";
					cin >> conf;
					while(conf != 'S' && conf != 's' && conf != 'N' && conf != 'n'){
						cout << "Opci\xa2n no valida, recuerde las opciones validas son S y N, por favor ingrese una opci\xa2n valida: ";
						cin >> conf;
					}
					if(conf == 'S' || conf == 's'){
						continuar = true;
						system("cls");
						pos = 1;
						while(pos<=P.ingre.get_tam()){
							P.ingre.buscar(pos, &auxI);
							cout << pos << ".\n" << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl;
							pos++;
						}
					}
					else if(conf == 'N' || conf == 'n'){
						continuar = false;
					}
				}while(continuar==true);
				
				cout << endl;
				system("pause");
				break;
			case 6:
				continuar = false;
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				cout << "Ingrese la posici\xa2n del postre del cual desea eliminar un ingrediente: ";
				cin >> pos2;
				while(listP.buscar(pos2,&P) == false){
					cout << "Ha ingresado una posici\xa2n invalida, por favor ingrese una valida: ";
					cin >> pos2;
				}
				cout << "Los ingredientes del postre son:" << endl;
				pos = 1;
				while(pos<=P.ingre.get_tam()){
					P.ingre.buscar(pos, &auxI);
					cout << pos << "." << "Nombre: " << auxI.nombre << endl;
					pos++;
				}
				do{
					cout << char(168) << "Cu\xa0l ingrediente desea eliminar?: ";
					cin >> pos;
					while(P.ingre.buscar(pos, &auxI) == false){
						cout << "Ha ingresado una posición invalida, por favor ingrese una valida: ";
						cin >> pos;
					}
					P.ingre.borrar(pos);
					listP.cambiar(pos2, P);
					cout << "Ingrediente eliminado exitosamente" << endl;
					cout << char(168) << "Desea eliminar otro ingrediente? (S/N): ";
					cin >> conf;
					while(conf != 'S' && conf != 's' && conf != 'N' && conf != 'n'){
						cout << "Opci\xa2n no valida, recuerde las opciones validas son S y N, por favor ingrese una opci\xa2n valida: ";
						cin >> conf;
					}
					if(conf == 'S' || conf == 's'){
						continuar = true;
						system("cls");
						pos = 1;
						while(pos<=P.ingre.get_tam()){
							P.ingre.buscar(pos, &auxI);
							cout << pos << ".\n" << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl;
							pos++;
						}
					}
					else if(conf == 'N' || conf == 'n'){
						continuar = false;
					}
				}while(continuar==true);
				cout << endl;
				system("pause");
				break;
			case 7:
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				cout << "Ingrese la posici\xa2n del postre del cual desea saber sus detalles: ";
				cin >> pos;
				listP.buscar(pos,&P);
				cout << "Nombre: " << P.nombre << endl << "Minutos de preparaci\xa2n: " << P.min_preparacion << endl << "Preparaci\xa2n:\n" << P.pasos << endl;
				cout << "Ingredientes:" << endl;
				pos = 1;
				while(pos<=P.ingre.get_tam()){
					P.ingre.buscar(pos, &auxI);
					cout << "Nombre: " << auxI.nombre << endl << "Medida: " << auxI.medida << endl << "Cantidad: " << auxI.cantidad << endl << endl;
					pos++;
				}
				cout << endl;
				system("pause");
				break;
			case 8:
				if(listP.lista_vacia() == true){
					cout << "No hay registro de alg\xa3n postre" << endl;
					system("pause");
					break;
				}
				pos = 1;
				cout << "Lista de postres:" << endl;
				while(pos<=listP.get_tam()){
					listP.buscar(pos, &P);
					cout << pos << ". " << P.nombre << endl;
					pos++;
				}
				cout << endl;
				system("pause");
				break;
			case 9:
				seguir = false;
				break;
			default:
				cout << "Opci\xa2n invalida" << endl;
				system("pause");
				break;
		}
	}
	return 0;
}
