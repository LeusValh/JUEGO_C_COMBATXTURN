
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

	// ESTRUCTURA DE VALORES DE CLASE

	struct clases {
		
		string nombre;
		int vida;
		int dano;
		int defen;
		
	} asesino, tanque, mago;
	
	struct enegimo {
		
		string nombre;
		int vida;
		int dano;
		int defen;
		
	} maton, ladron, coloso, archimago, dragon;
	
	struct personaje {
		
		string nombre;
		int vida;
		int dano;
		int defen;
		
	} PER;
	
	struct rival {
		
		string nombre;
		int vida;
		int dano;
		int defen;
		
	} ENE;
	
	// FUNCIONES
	
	// FUNCION DE ELEGIR A UN ENEMIGO
	
	void ElegirE(int num, int c){
		
    		srand(time(NULL));
    
        	num = 1 + rand() % (4 - 1);
    
    	if (num == 1){
    		
    		ENE.nombre = "Un Maton";
    		ENE.dano = maton.dano;
    		ENE.vida = maton.vida;
    		ENE.defen = maton.defen;
    		
		}
		else if (num == 2){
			
			ENE.nombre = "Un Ladron";
			ENE.dano = ladron.dano;
			ENE.vida = ladron.vida;
			ENE.defen = ladron.defen;
		}
		else if (num == 3){
			
			ENE.nombre = "Un Coloso";
			ENE.dano = coloso.dano;
			ENE.vida = coloso.vida;
			ENE.defen = coloso.defen;
		}
		else if (num == 4){
			
			ENE.nombre = "Un Archimago";
			ENE.dano = archimago.dano;
			ENE.vida = archimago.vida;
			ENE.defen = archimago.defen;
		}
		else {
			
			ENE.nombre = "El Dragon";
			ENE.dano = dragon.dano;
			ENE.vida = dragon.vida;
			ENE.defen = dragon.defen;
		}
		
	}
	
	// FUNCION ATAQUE DEL ENEMIGO
	
	void ENAt (int ENEat, int b){
		
		srand(time(NULL));
    
        	ENEat = 1 + rand() % (5 - 1);
		
		if (ENEat == 1){
				cout<<"\n    "<< ENE.nombre<<" Se corre directamente hacia ti queriendo Golpearte ";
				cout<<"\n    Intentas esquivar el Golpe, pero no logras hacerlo a tiempo...";
				cout<<"\n    "<< PER.nombre<<" Pierde "<< ENE.dano<<" de Vida, y el combate continua"<<endl;
				cout<<"\n";
				PER.vida = PER.vida - ENE.dano;
				PER.vida --;
				system("pause");
		}
		else if (ENEat == 2){
			cout<<"\n    "<< ENE.nombre<<" se Escudo, y evito el da�o que le causarias con tu siguiente golpe";
			cout<<"\n    Solo puedes ver como tu esfuerzo para atacarlo no tiene frutos";
			cout<<"\n    Aun no se como programar la defensa XDDDDDDDDDDDDDDDDD"<<endl;
			cout<<"\n";
			system("pause");
		}
		else if (ENEat == 3){
				cout<<"\n    "<< ENE.nombre<<", sin importarle nada saca una botella de licor para curarse";
				cout<<"\n    "<< ENE.nombre<<" Se toma la botella entera mientras "<< PER.nombre<<" solo se queda viendo";
				cout<<"\n    "<< ENE.nombre<<" Recupera 4 PS"<<endl;
				cout<<"\n";
				if (ENE.vida >= 40){
					ENE.vida = ENE.vida + 0;
				}
				else{
				ENE.vida = ENE.vida + 4;
				} 
				system("pause");
		}
		else {
				cout<<"\n    "<< ENE.nombre<<" Se corre directamente hacia ti queriendo Golpearte ";
				cout<<"\n    Intentas esquivar el Golpe, pero no logras hacerlo a tiempo...";
				cout<<"\n    "<< ENE.nombre<<" iracundo por el combate logra asestarte un GOLPE CRITICO!";
				cout<<"\n    "<< PER.nombre<<" Pierde "<< ENE.dano *2 <<" de Vida, y el combate continua"<<endl;
				cout<<"\n";
				PER.vida = PER.vida - ENE.dano *2;
				PER.vida --;
				system("pause");
		}
	}
	
	// FUNCION DE ELEGIR PERSONAJE
	
	void ElegirP(int selec, int mejora){
		
		if (selec == 1){
			
			system("cls");
			cout<<"\n";
			cout<<"\n    Elegiste Asesino como tu clase "<<endl;
			
			PER.nombre = "Asesino";
			PER.dano = asesino.dano;
			PER.vida = asesino.vida;
			PER.defen = asesino.defen;

		}
		else if (selec == 2){
			
			system("cls");
			cout<<"\n";
			cout<<"\n    Elegiste Tanque como tu clase "<<endl;
			
			PER.nombre = "Tanque";
			PER.dano = tanque.dano;
			PER.vida = tanque.vida;
			PER.defen = tanque.defen;

		}
		else {
			
			system("cls");
			cout<<"\n";
			cout<<"\n    Elegiste Mago como tu clase "<<endl;
			
			PER.nombre = "Mago";
			PER.dano = mago.dano;
			PER.vida = mago.vida;
			PER.defen = mago.defen;
			
		}
		
	}
	
	// FUNCION DE COMBATE 
	
	void Combate(int mejora, int num, int c, int ENEat, int b, int ronda, int matriz2){
		
		int menu;
		
		cout<<"\n    SELECCIONA UNA DE LAS SIGUIENTES MEJORAS: "<<endl;
		cout<<"\n 1) Runa Roja (AUMENTA TU VIDA MAXIMA +2)";
		cout<<"\n 2) Daga de Ladron (AUMENTA TU ATAQUE +1) ";
		cout<<"\n 3) Armadura Ligera (AUMENTA TU DEFENSA +2) "<<endl;
		cin>> mejora;
		
		// MEJORAS TRAS PELEAR
		
		if (mejora == 1){
			PER.vida = PER.vida + 2;
		}
		else if (mejora == 2){
			PER.dano = PER.dano +1;
		}
		else {
			PER.defen = PER.defen +2;
		}
		
		if (ronda == 10){
		
			cout<<"\n  Estas apunto de enfrentarte al JEFE de la zona, recuperas 20 PS";
			cout<<"\n  E inicia el combate mas esperado..."<<endl;
			cout<<"\n";
			system("pause");
			
			system("cls");
			int matriz[21][29]={
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,0,0,3,3,3,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,1},
			{1,0,3,3,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,1},
			{1,0,3,3,3,3,3,3,3,3,3,3,4,4,1,3,3,3,3,3,3,3,3,4,4,4,4,4,1},
			{1,0,3,3,3,3,3,3,3,3,3,1,4,4,1,3,3,3,3,3,3,3,3,3,4,4,4,4,1},
			{1,0,3,3,3,3,3,3,3,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,4,4,4,4,1},
			{1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,1},
			{1,0,0,2,0,0,0,2,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,1},
			{1,0,0,2,0,2,0,2,0,2,0,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,0,1},
			{1,0,0,0,0,2,0,0,0,2,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,1},
			{1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,1},
			{1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,1},
			{1,0,0,3,3,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,4,4,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,4,0,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
			
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
			for(int i=0; i<21; i++){
				for(int j=0; j<29; j++){
			
					if(matriz[i][j]==1) {
			
					SetConsoleTextAttribute(hConsole,15);
					cout<< char(219);
				
				}
				else if(matriz[i][j]==2){
				
					SetConsoleTextAttribute(hConsole,14);
					cout<< char(219);
				
				}
				else if(matriz[i][j]==3){
				
					SetConsoleTextAttribute(hConsole,10);
					cout<< char(219);
				
				}
				else if(matriz[i][j]==4){
				
					SetConsoleTextAttribute(hConsole,12);
					cout<< char(219);
				}
			
				else cout<<" ";
			}
		
		cout<<endl;
		}
			cout<<"\n EL DRAGON, hace su aparicion..."<<endl;
			cout<<"\n";
			system("pause");
			
			ENE.nombre = dragon.nombre;
			ENE.vida = dragon.vida;
			ENE.dano = dragon.dano;
			ENE.defen = dragon.defen;
			
			PER.vida = PER.vida + 20;
			if (PER.vida > 50){
				PER.vida = PER.vida + 0;
			}
		}
		
		do{
		
		system("cls");
		cout<<"\n    ESTAS EN COMBATE: "<< PER.nombre;
		cout<<"\n    VIDA: "<< PER.vida;
		cout<<"\n    "<<ENE.nombre<<": "<<ENE.vida;
		cout<<"\n ------------------------------------------------------------------------------ ";
		cout<<"\n 1) ATACAR.  \n";
    	cout<<"\n 2) DEFENSA. \n";
    	cout<<"\n 3) CURARSE. \n";
		cout<<"\n ------------------------------------------------------------------------------ \n";
		cin>> menu;
		
		switch (menu){
			
			case 1: 
				cout<<"\n    "<< PER.nombre<<" Se abalanza sobre "<< ENE.nombre<<" Para asestarle un Golpe ";
				cout<<"\n    "<< ENE.nombre<<" Intento esquivar el Golpe, pero no pudo hacerlo...";
				cout<<"\n    "<< ENE.nombre<<" Pierde "<< PER.dano<<" de Vida, y el combate continua"<<endl;
				cout<<"\n";
				ENE.vida = ENE.vida - PER.dano;
				ENE.vida --;
				system("pause");
			break;
	
			case 2:
				cout<<"\n    "<< PER.nombre<<" intento defenderse del Golpe de "<< ENE.nombre;
				cout<<"\n    "<< PER.nombre<<" logra defenderse con exito, y evitar el golpe de "<< ENE.nombre;
				cout<<"\n    Aun no se como programar la defensa XDDDD"<<endl;
				cout<<"\n";
				system("pause");
			break;
			
			case 3:
				cout<<"\n    "<< PER.nombre<<", herido por el combate intenta hacer distancia con "<< ENE.nombre<<" para curar sus heridas...";
				cout<<"\n    Al lograr alejarse lo suficiente, "<< PER.nombre<<" saca de su bolsillo una pocion que le curara unos PS";
				cout<<"\n    "<< PER.nombre<<" Recupera 5 PS"<<endl;
				cout<<"\n";
				PER.vida = PER.vida + 5;
				if (PER.vida > 50){
				PER.vida = PER.vida + 0;
				}
				system("pause");
			break;
		}
		
		ENAt (ENEat, b);
		
	}
	while (PER.vida > 1 && ENE.vida > 1);
		
	} 

int main (){
	
	// VARIABLE PARA EL MENU DEL JUEGO
	
	int selec;
	int opcion;
	int mejora;
	int num;
	int c;
	int ronda = 0;
	int ENEat;
	int b;
	int men;
	int volv;
	int cont = 0;
	int matriz2;
	
	// VALORES DE LAS CLASES DEL PERSONAJE
	
	asesino.nombre = "Asesino";
	asesino.vida = 30;
	asesino.dano = 7;
	asesino.defen = 6;
	
	tanque.nombre = "Tanque";
	tanque.vida = 55;
	tanque.dano = 3;
	tanque.defen = 10;
	
	mago.nombre = "Mago";
	mago.vida = 40;
	mago.dano = 5;
	mago.defen = 8;
	
	// VALORES DE LOS ENEMIGOS
	
	maton.nombre = "Maton";
	maton.vida = 35;
	maton.dano = 4;
	maton.defen = 5;
	
	ladron.nombre = "Ladron";
	ladron.vida = 30;
	ladron.dano = 7;
	ladron.defen = 6;
	
	coloso.nombre = "Coloso";
	coloso.vida = 56;
	coloso.dano = 4; 
	coloso.defen = 10;
	
	archimago.nombre = "Archimago";
	archimago.vida = 38;
	archimago.dano = 5;
	archimago.defen = 8;
	
	dragon.nombre = "El Dragon";
	dragon.vida = 100;
	dragon.dano = 9;
	dragon.defen = 15;
	
	// CARGA DE MI LOGO
	
	int matriz[21][29]={
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,2,2,3,3,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,2,2,0,3,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,4,4,0,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,4,0,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,1,1,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,1,0,0,1,1,0,1,0,0,1,0,0,1,0,1,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for(int i=0; i<21; i++){
		for(int j=0; j<29; j++){
			
			if(matriz[i][j]==1) {
			
				SetConsoleTextAttribute(hConsole,15);
				cout<< char(219);
				
			}
			else if(matriz[i][j]==2){
				
				SetConsoleTextAttribute(hConsole,2);
				cout<< char(219);
				
			}
			else if(matriz[i][j]==3){
				
				SetConsoleTextAttribute(hConsole,4);
				cout<< char(219);
				
			}
			else if(matriz[i][j]==4){
				
				SetConsoleTextAttribute(hConsole,12);
				cout<< char(219);
				
			}
			
			else cout<<" ";
			
		}
		
		cout<<endl;
	}
	
	cout<<"\n    LEU'S GAMES PRESENT"<<endl;
	
	system("pause");
	
	// INICIO DEL JUEGO

	do{
	system("cls");
		cout<<"\n ------------------------------------------------------------------------------ ";
		cout<<"\n";
    	cout<<"\n";
    	cout<<"\n                                 | JUEGUITO | ";
    	cout<<"\n";
    	cout<<"\n";
    	cout<<"\n";
    	cout<<"\n    Menu de Opciones: "<<endl;
    	cout<<"\n    1) JUGAR ";
    	cout<<"\n    2) INFORMACION ";
    	cout<<"\n    3) SALIR ";
    	cout<<"\n";
		cout<<"\n ------------------------------------------------------------------------------ \n";
		cin>> men;
		
		if (men == 1){
		}
		
	}
	while (men < 1 || men > 3);
			
	switch (men){
		case 1:		
		
		do {
				system("cls");
				cout<<"\n";
				cout<<"\n    Seleccione una clase:"<<endl;
				cout<<"\n    1) ASESINO (Mas ataque, menos vida y defensa)";
				cout<<"\n    2) TANQUE (Menos ataque, mas vida y defensa)";
				cout<<"\n    3) MAGO (Ataque medio, vida y defensa media)"<<endl;
				cin>> opcion;
				selec = opcion;
				ElegirP(selec, mejora);
			}
					while (opcion < 1 || opcion > 3);
	
					for (int i=0; i<11; i++){
					
					if (PER.vida < 1){
						
						system("cls");
						cout<<"\n    PERDISTE!";
						cout<<"\n    Mejor suerte a la proxima "<<endl;
						cout<<"\n";
						system("pause");
						return 0;
						
					}
					
					ronda++;
	
				system("cls");
				cout<<"\n    ESTAS EN LA RONDA NRO "<< ronda;
		
				if (ronda == 11){
			
				system("cls");
				cout<<"\n    FELICIDADES!!! COMPLETASTE EL JUEGO";
				system("pause");
			
				}
				else{
			
				ElegirE(num, c);
	
				Combate(mejora, num, c, ENEat, b, ronda, matriz2);
				
					}
				}		
		break;

		case 2:	system("cls");
			cout<<"\n";
			cout<<"\n    INSTRUCCIONES: "<<endl;
			cout<<"\n   Al iniciar el juego se te preguntara por una de las siguientes clases: ";
			cout<<"\n   Asesino, Mago o Tanque, cada una de ellas tiene caracteristicas diferentes";
			cout<<"\n   La vida, ataque y defensa cambia entre cada clase";
			cout<<"\n    ";
			cout<<"\n   Ya seccionada tu clase, tendras que elegir un item para mejorarte antes de empezar";
			cout<<"\n   Al principio tendras unicamente 3 opciones, pero a medida que avances obtendras mas";
			cout<<"\n   Estos items aumentan tus caracteristicas como vida, ataque o defensa";
			cout<<"\n";
			cout<<"\n   Empezaras a pelear contra enemigos por 10 rondas, 9 de ellas enemigos aleatorios";
			cout<<"\n   En la ultima ronda (10) te enfrentaras a un JEFE, que posee mas vida y ataque";
			cout<<"\n   Una vez vencido el jefe, desbloquearas mas contenido jugable";
			cout<<"\n   Este contenido puede ser nuevas rondas, jefes, items, mapas, personajes"<<endl;
			system("pause");	
		break;
		
		case 3:
			
			return 0;
			
		break;
	}
	
		return 0;
	
	}
