#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

string anna,youssef,ainoa;
int dinero = 50,tesoros = 0;
int opcion,opcionInstrucJuego, opcionEntrada,opcionCueva,opcionEntradaPrincipal, opcionInfoEntrada;
int opcionAreaTrabaja,opcionInfoEntrada2, opcionInfoEntrada1, opcionLadron,num,c,opcionPasillos,opcionSalida;

int main(){
	string jugador;
	string anna;
	anna="Anna";
	string youssef;
	youssef="Youssef";
	string ainoa;
	ainoa="Ainoa";
	string ladron;
	ladron="Ladron";
	
	while(2){
	do{
	do{
	do{
	system("cls");
	cout<<" The Great Adventure In The Mine"<<endl;
cout<<"\n Menu de principal"<<endl;
cout<<"\n 1. Iniciar juego"<<endl;
cout<<"\n 2. Instrucciones de juego"<<endl;
cout<<"\n 3. Acerca del juego"<<endl;
cout<<"\n 4. Creditos"<<endl;
cout<<"\n 5. Salir"<<endl;
cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
scanf("%d", &opcion);
switch(opcion){
	case 1: 
	 system("cls");
     cout<<" El juego esta iniciando"<<endl;
     cout<<"\n Presione enter para avanzar"<<endl;
     getch();
     break;
	int opcion;
	case 2:
     system("cls");
	 cout<<" 1. Instrucciones del juego"<<endl;
     cout<<"\n 2. Regresar al menu"<<endl;
     cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (1)]"<<endl;
     cin>>opcionInstrucJuego; 
	 system("cls");
	 switch(opcionInstrucJuego){
 	     
		  case 1: 
		     cout<<"\n En este juego deberas adentrarte en la busca del tesoro\n en una mina abandonada de Egipto superando los distintos \n obstaculos que habra sin evitar que tu dinero llegue a cero\n o perderas y consiguiendo la mayor cantidad de dinero y tesoros\n en tu aventura"<<endl;
			 cout<<"\n Presione enter para regresar al menu"<<endl;
			 getch();
			 break;
	     case 2:
		     cout<<" Estas regresando al menu"<<endl;
		     cout<<"\n Presione enter para regresar al menu"<<endl;
		     getch();
		     break;
		 default:
		 	system("cls");
	         cout<<"No es una opcion valida"<<endl;
	         cout<<"\n Presione enter para regresar al menu"<<endl;
	         getch();
	         system("cls");
		     break;
	}
	break;
	case 3:
	 	system("cls");
     	cout<<" Se ubica en la era actual donde un aventurero (tu) va a la busqueda de un tesoro"<<endl;
     	cout<<"\n tomando diferentes decisiones que te ayudaran ,te dificultaran o en el peor case"<<endl;
     	cout<<"\n moriras.\n\n Crees estar listo para esto?"<<endl;
     	cout<<"\n Presione enter para regresar al menu"<<endl;
     	getch();
     break;
    case 4:
     system("cls");
	 cout<<" Creditos"<<endl;
	 cout<<"\n Este juego fue hecho por: Juan Antonio Ramirez Cazares \n\n Para la realizacion del proyecto de la materia de introduccion a la ingenieria"<<endl;
	 cout<<"\n Gracias por jugar el juego"<<endl;
	 cout<<"\n Presione enter para regresar al menu"<<endl;
	 getch();
	 break;
	case 5:
	 system("cls");
     cout<<"\n Gracias por jugar"<<endl;
     return 0;
     default:
         system("cls");
	     cout<<"No es una opcion valida"<<endl;;
	     cout<<"\n Presione enter para regresar al menu"<<endl;
	     getch();
		 break;
}

}while( opcion !=1);
 system("cls");
 cout<<" Introduce tu nombre: "<<endl;
 cin>>jugador;
 system("cls");
 cout<<" Recientemente se ha descubierto una mina abandonada hace mucho tiempo"<<endl;
 cout<<"\n Por lo que el aventurero "<<jugador<<" ira a descubrir los tesoros"<<endl;
 cout<<"\n que se dicen hay ahi, sin embargo tambien cuenta con una gran cantidad"<<endl;
 cout<<"\n de PELIGROS"<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 system("cls");
 cout<<"\n "<<jugador<<": Hey que han descubierto hoy?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n "<<anna<<": Algo que te encantara oir."<<endl;
 cout<<"\n "<<youssef<<": Asi es, esto podria ser lo mejor que podriamos decirte."<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 cout<<"\n "<<jugador<<": Venga digan que es lo tan importante que me tienen que decir.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n "<<anna<<": Lo importante es que recientemente se encontro una mina abandonada en Egipto\n\n que segun lo que hemos investigado alberga un gran tesoro"<<endl;
 cout<<"\n "<<youssef<<":S in embargo dicen que hay una gran cantidad de peligros ahi que protegen el tesoro."<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 cout<<"\n "<<jugador<<": Pues tendre que ir a por ese tesoro, y tranquilo no hay peligro que haya derrotado a "<<jugador<<"		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 system("cls");
 cout<<" Y asi despues de tres dias de un largo viaje "<<jugador<<" llego a Egipto"<<endl;
 cout<<"\n "<<jugador<<": Vaya si que esta lejos este lugar.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n "<<anna<<": Si pero valdra la pena venir hasta aca."<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 cout<<"\n "<<jugador<<": Venga hay que apurarnos si no nunca lo encontraremos.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n "<<anna<<": Mira ahi esta la mina, vamos alla."<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 system("cls");
 do{
 
 cout<<"\n "<<anna<<": Yo no podre entrar pero estare afuera esperandote."<<endl;
 cout<<"\n "<<jugador<<": Vale vale, yo me encargo.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n Por donde entraras a la mina"<<endl;
 cout<<"\n 1. Entrar por la cueva a un costado de la mina."<<endl;
 cout<<"\n 2. Entrar por la entrada principal."<<endl;
 cout<<"\n 3. Investigar acerca de las entradas."<<endl;
 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 cin>>opcionEntrada;

 	switch(opcionEntrada){
 		while(1){
 		case 1:
 			system("cls");
 			cout<<"\n "<<jugador<<": Vaya esto esta lleno de telaranhas.\n\n Hey hay algo por ahi		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 			cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
 			break;
 		case 2:
 			system("cls");
 			cout<<"\n "<<jugador<<": Vaya eso fue facil. Sigamos avanzando.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 			cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
 			break;
 		case 3:
 			system("cls");
 			cout<<"\n "<<jugador<<": Creo que lo mejor sera recaudar informacion sobre las entradas.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 			cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
 			break;
 		default:
 			system("cls");
 			cout<<"La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
			 getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
 }
system("cls");
 }
 }while(opcionEntrada != 1 && opcionEntrada != 2 && opcionEntrada != 3);
 if (opcionEntrada ==1){
 	 cout<<"\n "<<jugador<<": Vaya vaya 2 escaleras, 1 hacia arriba, otra hacia abajo y el pasillo principal."<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<": Â¿Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Subir escaleras"<<endl;
 	 cout<<"\n 2. Bajar escaleras"<<endl;
 	 cout<<"\n 3. Ir por el pasillo principal"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionCueva;
 	 switch(opcionCueva){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			dinero +=30;
			tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste un nido de araÃ±as"<<endl;
 	 		cout<<"\n "<<jugador<<"Que es esto!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Al escapar perdiste 30 dolares"<<endl;
 	 		dinero -=30;
 	 		cout<<"\n "<<jugador<<":He perdido 20 dolares		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
 	 		getch();
 	 		break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro."<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 	 		cout<<"La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
			 getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }
 }while(opcionCueva != 1 && opcionCueva != 2 && opcionCueva != 3);
 }
 if (opcionEntrada==2) {
 	
 	 cout<<"\n "<<jugador<<": vaya vaya, y aqui tenemos 3 puertas."<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<":Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Puerta con estrella"<<endl;
 	 cout<<"\n 2. Puerta con circulo"<<endl;
 	 cout<<"\n 3. Puerta con cuadrado"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionEntradaPrincipal;
 	 switch(opcionEntradaPrincipal){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			dinero+=30;
			tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro"<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Perdiste 30 dolares."<<endl;
 	 		dinero-=30;
 	 		cout<<"\n "<<jugador<<": Venga ya!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
			 getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }system("cls");
 }while(opcionEntradaPrincipal != 1 && opcionEntradaPrincipal != 2 && opcionEntradaPrincipal != 3);
 }
if (opcionEntrada==2) {
 	
 	 cout<<"\n "<<jugador<<": vaya vaya, y aqui tenemos 3 puertas.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<": Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Puerta con estrella"<<endl;
 	 cout<<"\n 2. Puerta con circulo"<<endl;
 	 cout<<"\n 3. Puerta con cuadrado"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionEntradaPrincipal;
 	 switch(opcionEntradaPrincipal){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			dinero+=30;
			tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro"<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Perdiste 30 dolares."<<endl;
 	 		dinero-=30;
 	 		cout<<"\n "<<jugador<<": Venga ya!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
			 getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }system("cls");
 }while(opcionEntradaPrincipal != 1 && opcionEntradaPrincipal != 2 && opcionEntradaPrincipal != 3);
}
 if (opcionEntrada==3) {
 	do{
	 
 	 cout<<"\n "<<jugador<<": Buscare informacion sobre las entradas de las minas.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n "<<jugador<<": Hola dusculpa tu sabes algo acerca sobre la mina?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n "<<ainoa<<": Claro que necesitas saber?"<<endl;
 	 cout<<"\n "<<jugador<<": Que entrada es mejor?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n "<<ainoa<<": Esa informacion vale 20 dolares."<<endl;
 	 cout<<"\n 1. Pagar 20 dolares"<<endl;
 	 cout<<"\n 2. no pagar nada."<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
	 cin>>opcionInfoEntrada;
 	 switch(opcionInfoEntrada){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
 	 		cout<<" Has pagado 20 dolares"<<endl;
 	 		dinero-=20;
			cout<<"\n "<<ainoa<<": La mejor entrada es la principal ya que no hay tantas trampas pero no quiere decir que no haya"<<endl;
 	 		cout<<"\n "<<jugador<<": Vale, muchas gracias		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<"\n "<<ainoa<<": Lo siento asi no te puedo ayudarte."<<endl;
 	 		cout<<"\n "<<jugador<<": Pues ya que.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
			 getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }system("cls");
 }while(opcionInfoEntrada != 1 && opcionInfoEntrada != 2 );
 }if(opcionInfoEntrada == 1){
 cout<<"\n Entraste por entrada principal."<<endl;
 cout<<"\n "<<jugador<<":vaya vaya, y aqui tenemos 3 puertas.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<": Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Puerta con estrella"<<endl;
 	 cout<<"\n 2. Puerta con circulo"<<endl;
 	 cout<<"\n 3. Puerta con cuadrado"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionEntradaPrincipal;
 	 switch(opcionEntradaPrincipal){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			dinero+=30;
			tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
			break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro"<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
			break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Perdiste 30 dolares."<<endl;
 	 		dinero-=30;
 	 		cout<<"\n "<<jugador<<": Venga ya!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
			break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
             getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }system("cls");
 }while(opcionEntradaPrincipal != 1 && opcionEntradaPrincipal != 2 && opcionEntradaPrincipal != 3);
 } 
 if (opcionInfoEntrada==2){
 	do{
 	cout<<"\n Por donde entraras a la mina"<<endl;
 	cout<<"\n 1. Entrar por la cueva a un costado de la mina."<<endl;
 	cout<<"\n 2. Entrar por la entrada principal."<<endl;
 	cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	cin>>opcionInfoEntrada1;

 	switch(opcionInfoEntrada1){
 		while(1){
 		case 1:
 			system("cls");
 			cout<<"\n "<<jugador<<": Vaya esto esta lleno de telaranhas.\n\n Hey hay algo por ahi		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 			cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
 			break;
 		case 2:
 			system("cls");
 			cout<<"\n "<<jugador<<": Vaya eso fue facil. Sigamos avanzando.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 			cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
 			break;
 		default:
 			system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
             getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
 }
system("cls");
 }
}while(opcionInfoEntrada1 != 1 && opcionInfoEntrada1 != 2 );
 }
 if (opcionInfoEntrada1 ==1){
 	 cout<<"\n "<<jugador<<": Vaya vaya 2 escaleras, 1 hacia arriba, otra hacia abajo y el pasillo principal.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<": Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Subir escaleras"<<endl;
 	 cout<<"\n 2. Bajar escaleras"<<endl;
 	 cout<<"\n 3. Ir por el pasillo principal"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionCueva;
 	 switch(opcionCueva){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			 cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			 dinero+=30;
			 tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste un nido de araÃ±as"<<endl;
 	 		cout<<"\n"<<jugador<<": Que es esto!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Al escapar perdiste 30 dolares"<<endl;
 	 		dinero-=30;
 	 		cout<<"\n "<<jugador<<": Al menos logre escapar 		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<jugador<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro."<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
             getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }
 }while(opcionCueva != 1 && opcionCueva != 2 && opcionCueva != 3);
 }
 if (opcionInfoEntrada1 ==2) {
 	
 	 cout<<"\n "<<jugador<<": vaya vaya, y aqui tenemos 3 puertas.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 do{
	  
	 cout<<"\n "<<jugador<<": Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 cout<<"\n 1. Puerta con estrella"<<endl;
 	 cout<<"\n 2. Puerta con circulo"<<endl;
 	 cout<<"\n 3. Puerta con cuadrado"<<endl;
 	 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 	 cin>>opcionInfoEntrada2;
 	 switch(opcionInfoEntrada2){
 	 	while(1){
 	 	case 1:
 	 		system("cls");
			cout<<" Encontraste 30 dolares y 5 tesoros"<<endl;
			dinero+=30;
			tesoros+=5;
 	 		cout<<"\n "<<jugador<<": Esta ya es otra cosa.\n\n Veamos que mas hay por ahi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 2:
 	 		system("cls");
 	 		cout<<" Encontraste 10 dolares y 1 tesoro"<<endl;
 	 		dinero+=10;
 	 		tesoros+=1;
 	 		cout<<"\n "<<jugador<<": Bueno puedo haber sido peor, veamos si hay algo mas por aqui.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	case 3:
 	 		system("cls");
 	 		cout<<" Perdiste 30 dolares."<<endl;
 	 		dinero-=30;
 	 		cout<<"\n "<<jugador<<": Venga ya!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 	 		cout<<"\n Presione enter para avanzar"<<endl;
			  getch();
 	 		break;
 	 	default:
 	 		system("cls");
 			cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 			cout<<"\n Presione enter para regresar a la decision.";
             getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 			break;
		  }
	  }system("cls");
      }while(opcionInfoEntrada2 != 1 && opcionInfoEntrada2 != 2 && opcionInfoEntrada2 != 3);
 }
 while(dinero<=0){
	cout<<" Se te acabo el dinero para seguir buscando"<<endl;
	cout<<"\n Fin de la partida"<<endl;
	cout<<"\n Presione enter para avanzar"<<endl;
	getch();
	return 0;
}
 system("cls");
 cout<<" Despues de avanzar por la mina llegas a la zona de descanso de los trabajadores"<<endl;
 cout<<"\n "<<jugador<<": Vaya si que este lugar es grande, espera hay varias cosas ahi		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n Presione enter para avanzar"<<endl;
 getch();
 do{
 cout<<"\n "<<jugador<<": Que deberia hacer?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n 1. Investigar las cajas"<<endl;
 cout<<"\n 2. Investigar los casilleros"<<endl;
 cout<<"\n 3. Seguir avanzando por la mina."<<endl;
 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 cin>>opcionAreaTrabaja;
 switch(opcionAreaTrabaja){
 	case 1:
 		system("cls");
 		cout<<" Encontraste 3 tesoros en las cajas"<<endl;
 		tesoros+=3;
 		cout<<"\n "<<jugador<<": Esto se vendera bien.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 		cout<<"\n Presione enter para avanzar"<<endl;
		 getch();
 		break;
 	case 2:
 		system("cls");
 		cout<<" Encontraste 30 dolares"<<endl;
 		dinero+=30;
 		cout<<"\n "<<jugador<<": Esto servira mucho para seguiur buscando tesoros.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 		cout<<"\n Presione enter para avanzar"<<endl;
		 getch();
 		break;
 	case 3:
 		system("cls");
 		cout<<" Decidiste mejor seguir tu camino"<<endl;
 		cout<<"\n "<<jugador<<": Sera mejor avanzar y encontrar ese tesoro.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 		cout<<"\n Presione enter para avanzar"<<endl;
		 getch();
 		break;
 	default:
 		system("cls");
 		 cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 		 cout<<"\n Presione enter para regresar a la decision.";
         getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 		 break;
 	}
} while(opcionAreaTrabaja != 1 && opcionAreaTrabaja != 2 && opcionAreaTrabaja != 3);
 system("cls");
 cout<<" Despues de eso seguiste avanzando sin esperar que te fueras encontrar algo asi..."<<endl;
 cout<<"\n "<<ladron<<": Quien anda ahi?"<<endl;
 cout<<"\n "<<jugador<<": Quien eres tu?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 cout<<"\n "<<ladron<<": Estoy aqui buscando tesoros y vaya veo que tienes algunos"<<endl;
 cout<<"\n "<<jugador<<": Alejate de mi.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 do{
 
 cout<<"\n "<<ladron<<": Te dare 2 opciones podemos hacerlo por las buenas o por las malas tu decides"<<endl;
 cout<<"\n 1. Hacerlo por las malas (pelear)"<<endl;
 cout<<"\n 2. Hacerlo por las buenas (darle la mitad de tus cosas)"<<endl;
 cout<<"\n 3. Escapar"<<endl;
 cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
 cin>>opcionLadron;
 switch(opcionLadron){
 	case 1:
 		system("cls");
 		cout<<"\n "<<jugador<<": Pues entonces sera por las malas		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
 		cout<<"\n "<<ladron<<": Tu lo pediste"<<endl;
 		cout<<"\n Comienza la pelea"<<endl;
 		cout<<"\n Presione enter para avanzar"<<endl;
		 getch();
 		for(c=1; c<=1; c++){
 			num= 1 + rand()%(3-1);
		 }
		 if(num==1){
		 	cout<<" Has derrotado al ladron"<<endl;
		 	cout<<"\n "<<ladron<<": Como es posible esto?"<<endl;
		 	cout<<"\n "<<jugador<<": Venga largate		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		 	cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
		 }else(num==2);{
		 	cout<<" Has perdido"<<endl;
		 	cout<<"\n "<<jugador<<": Como es posible esto?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		 	cout<<"\n "<<ladron<<": Jajaja, ahora dame tus cosas"<<endl;
		 	cout<<"\n El ladron se llevo la mitad de tus cosas."<<endl;
		 	dinero = dinero / 2;
		 	tesoros = tesoros / 2;
		 	cout<<"\n "<<jugador<<": Si que era fuerte 		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		 	cout<<"\n Presione enter para avanzar"<<endl;
			 getch();
		 }
		 break;
	case 2:
		system("cls");
		cout<<"\n "<<jugador<<": Vale toma esto y dejame en paz.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		cout<<"\n "<<ladron<<": Un gusto hacer tratos contigo, jajaja."<<endl;
		cout<<"\n El ladron se fue con la mitad de tus cosas"<<endl;
		dinero= dinero/2;
		tesoros= tesoros/2;
		cout<<"\n "<<jugador<<": Ni modo sigamos. 		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		cout<<"\n Presione enter para avanzar"<<endl;
		getch();
		break;
	case 3:
		system("cls");
		cout<<" Lograste escapar por lo que esto te llevo a otros pasillos"<<endl;
		getch();
		cout<<"\n Presione enter para avanzar"<<endl;
		break;
	default:
		system("cls");
 		 cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 		 cout<<"\n Presione enter para regresar a la decision.";
         getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 		 break;
		
 }
} while(opcionLadron != 1 && opcionLadron != 2 && opcionLadron != 3);
if(opcionLadron==3){
	cout<<"\n "<<jugador<<": Vaya y aqui tenemos 3 pasillos.		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
	do{
	cout<<"\n "<<jugador<<": Que ruta tomare?		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
	cout<<"\n 1. Primer pasillo"<<endl;
	cout<<"\n 2. Segundo pasillo"<<endl;
	cout<<"\n 3. Tercer pasillo"<<endl;
	cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
	cin>>opcionPasillos;
	switch(opcionPasillos){
		case 1:
			system("cls");
			cout<<" Habia trampas pero sobreviviste, perdiste la mitad de tus cosas."<<endl;
			dinero = dinero / 2;
			tesoros = tesoros / 2;
			cout<<"\n"<<jugador<<": Uff casi no la cuento		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
			cout<<"\n Presione enter para avanzar"<<endl;
			getch();
			break;
		case 2:
			system("cls");
			cout<<" Se cerro la puerta del pasillo y te aplasto"<<endl;
			cout<<"\n Moriste."<<endl;
			cout<<"\n Fin de la partida"<<endl;
			cout<<"Presiona una tecla para regresar al menu"<<endl;
			cout<<"\n Presione enter para avanzar"<<endl;
			getch();
			break;
		case 3:
			system("cls");
			cout<<" Lograste llegar al tesoro sin problemas"<<endl;
			cout<<"\n "<<jugador<<": Venga ya aqui esta el tesoro		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
			cout<<"\n Presione enter para avanzar"<<endl;
			getch();
		default:
			system("cls");
 		 cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 		 cout<<"\n Presione enter para regresar a la decision.";
         getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 		 break;
			
	}
}while(opcionPasillos != 1 && opcionPasillos != 2 && opcionPasillos != 3);
}
}while(opcionPasillos==2);
system("cls");
cout<<" Lograste llegar al tesoro pero la mina se esta cayendo"<<endl;
do{
cout<<"\n Tienes que escapar rapido"<<endl;
cout<<"\n 1. Escapar subiendo las escaleras."<<endl;
cout<<"\n 2. Escapar por el pasillo."<<endl;
cout<<"\n 3. Escapar por la cueva."<<endl;
cout<<"\n Selecciona la opcion que quieras realizar [Ingresa la opcion con valor numerico ejemplo: (3)]"<<endl;
cin>>opcionSalida;
switch(opcionSalida){
	case 1:
		system("cls");
		cout<<" Lograste escapar pero perdiste la mitad de tus cosas."<<endl;
		dinero = dinero / 2;
		tesoros = tesoros / 2;
		cout<<"\n "<<jugador<<": Al menos sali vivo 		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
		cout<<"\n Presione enter para avanzar"<<endl;
		getch();
		break;
	case 2:
		system("cls");
		cout<<" Lograste escapar con todas tus cosas."<<endl;
		getch();
		cout<<"\n Presione enter para avanzar"<<endl;
		break;
	case 3:
		system("cls");
		cout<<" Las araÃ±as estaban ahi y te impidieron escapar"<<endl;
		cout<<"\n Moriste"<<endl;
		cout<<"\n Fin de la partida"<<endl;
		cout<<"\n Presiona enter para regresar al menu"<<endl;
		getch();
		break;
	default:
	    system("cls");
 		cout<<" La opcion es invalida, vuelve a elegir una opcion valida."<<endl;
 		cout<<"\n Presione enter para regresar a la decision.";
        getch();//Funcion que pausa el programa hasta que una tecla sea presionada.2
 		break;
}
}while(opcionSalida != 1 && opcionSalida != 2 && opcionSalida != 3);
}while(opcionSalida==3);
system("cls");
cout<<" Lograste salir vivo de la aventura en la mina"<<endl;
cout<<"\n "<<anna<<":"<<jugador<<" lograste salir!!		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
cout<<"\n "<<jugador<<": Te lo dije, no hay aventura que no pueda hacer 		Objetos= dinero:"<<dinero<<"	tesoros:"<<tesoros<<""<<endl;
cout<<"\n Fin"<<endl;
cout<<"\n Presione enter para avanzar"<<endl;
getch();
cout<<" Gracias por jugar el juego: The great adventure in the mine"<<endl;
cout<<"\n Presiona una tecla para regresar al menu principal"<<endl;
getch();
}

}