//mi juego
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
	
}

int main(){

	int e; //e= eleccion del jugador
	gotoxy(5,5);
	cout<<"\nMINIGAMES"<<endl;
   	cout<<"Elige el juego de tu preferencia"<<endl;
   	cout<<"-El adivinador = 1"<<endl;
   	cout<<"-Piedra papel o tigera = 2"<<endl;
	cout<<"-Quest = 3"<<endl;
	cout<<"\n¿Que juego desea jugar?: ";cin>> e;

	if(e==1){
		
		int i=0;
		cout<<"\nEL ADIVINADOR"<<endl;
   		cout<<"REGLAS"<<endl;
   		cout<<"-Adivine un nuero del 1 al n"<<endl;
   		cout<<"-tienes k intentos"<<endl;
		cout<<"-Ganas si logras adivinar el nuero en los k intentos"<<endl;

		while(1){
		//h=eleccion del humano;  r=eleccion de la computadora;   k=numero de intentos
		int n, k, r, num, sc_c = 0;

		cout<<"-Ingrese el valor de n"<<endl;cin>>n;
		cout<<"-Ingrese la cantidad de intentos que desea: ";cin>> k;

		r=(rand()%n)+1;

		cout<<"-Ingrese el numero correcto: ";cin>> num;

		if(num!=r){
		cout<<"\nINTENTALO DE NUEVO";
		sc_c++;
		cout<<"\nIntentos gastados: "<<sc_c<<endl;
		}

		if(num>=10){
		cout<<"\nERROR";
		cout<<"\nLos numeros permitidos son del 1 al "<<n<<endl;
		cout<<"\nVuelva a ingresar un numero >:v";
		}

		if(num<1){
		cout<<"\nERROR";
		cout<<"\nLos numeros permitidos son del 1 al "<<n<<endl;
		cout<<"\nVuelva a ingresar un numero >:v";
		}

		if(num==r){
		cout<<"\n¡GANASTE!";
		sc_c++;
		
		cout<<"\nIntentos gastados en adivinar el numero: "<<sc_c;
		cout<<"\nIntentos retantes para adivinar el numero: "<<k-sc_c<<endl;
		}

		if(sc_c==k){
		cout<<"\nGASTASTE TODOS TUS INTENTOS";
		cout<<"\nPERDISTE EL JUEGO";
		cout<<"\nVUELVE A INTENTARLO";
		cout<<"\nEl numero es:"<<r;
		}
		}
	}

	if(e==2){

		int cant;
		cout<<"\nPIEDRA PAPEL O TIJERA"<<endl;
   		cout<<"REGLAS"<<endl;
   		cout<<"-Piedra = 1"<<endl;
   		cout<<"-Papel = 2"<<endl;
		cout<<"-Tijera = 3"<<endl;
		cout<<"-Ingrese solo numeros"<<endl;
		cout<<"-Ingrese la cantidad de puntos que desea para ganar: ";cin>> cant;
		while(1){
		//h=eleccion del humano;  r eleccion de la computadora
		int h, r;
		int sc_h=0;
		int sc_r=0;

		cout<<"\nPiedra papel o tijera: ";cin>> h;
		if(h==1){
		cout<<"\nJUGADOR:PIEDRA";
		}
		if(h==2){
		cout<<"\nJUGADOR:PAPEL";
		}
		if(h==3){
		cout<<"\nJUGADOR:TIJERA";
		}
		if(h>=4){
		cout<<"\nERROR";
		cout<<"\nVuelva a ejecutar el programa >:v";

		return 0;
		}

		r=(rand()%3)+1;

		if(r==1){
		cout<<"\nCOMPUTADORA:PIEDRA";
		}
		if(r==2){
		cout<<"\nCOMPUTADORA:PAPEL";
		}
		if(r==3){
		cout<<"\nCOMPUTADORA:TIJERA";
		}

		if(h==r){
		cout<<"\nEMPATE";
		}
		if((h==1&&r==3) || (h==2&&r==1) || (h==3&&r==2)){
		cout<<"\nGANASTE";
		sc_h++;
		}
		if((h==1&&r==2) || (h==2&&r==3) || (h==3&&r==1)){
		cout<<"\nPERDISTE";
		sc_r++;
		}
		cout<<"\nJugador: "<<sc_h<<" Computadora: "<<sc_r<<endl;
		}

		}
	

	if(e==3){
		
		while(1){
		//h=numero de preguntas;  r eleccion de la pregunta al azar sc_h= cantidad de preguntas correctas
		int h, r;
		int sc_h=0;
		cout<<"\nQUEST"<<endl;
		cout<<"\nREGLAS";
		cout<<"-Responda las preguntas de cultura general"<<endl;
   		cout<<"-Tienes n preguntas que responder"<<endl;
		cout<<"-Ganas si logras responder mas de la mitad de las n preguntas"<<endl;
		cout<<"-Tienen que ser entre 5 o 15 preguntas"<<endl;
		cout<<"\nNumero de preguntas que desea: ";cin>> h;
		if(h<6){
		cout<<"\nTienen que ser entre 5 o 15 preguntas ";
		}
		if(h>15){
		cout<<"\nTienen que ser entre 5 o 15 preguntas";
		}
		if(h==6){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 6 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En que continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<6-sc_h<<endl;
		
		}
		if(h==7){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 7 preguntas";
		cout<<"\nA elegido 6 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En que continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<7-sc_h<<endl;
		}
		if(h==8){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 8 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En que continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Qué tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<8-sc_h<<endl;
		}
		if(h==9){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 9 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Qué tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		}
		if(h==10){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 10 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Qué tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<10-sc_h<<endl;
		}
		if(h==11){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 11 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Qué tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		cout<<"\nPREGUNTA 11"<<endl;
		cout<<"\n¿De que colores es la bandera de Mexico?"<<endl;
		cout<<"\n1. Verde, blanco y rojo";
		cout<<"\n2. Verde, amarillo y rojo";
		cout<<"\n3. Verde, amarillo y azul";
		cout<<"\nLa alternativa correcta es: ";cin>> k;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		if(k==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<11-sc_h<<endl;
		}
		if(h==12){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 12 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Que tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		cout<<"\nPREGUNTA 11"<<endl;
		cout<<"\n¿De que colores es la bandera de Mexico?"<<endl;
		cout<<"\n1. Verde, blanco y rojo";
		cout<<"\n2. Verde, amarillo y rojo";
		cout<<"\n3. Verde, amarillo y azul";
		cout<<"\nLa alternativa correcta es: ";cin>> k;
		
		cout<<"\nPREGUNTA 12"<<endl;
		cout<<"\n¿Quien pinto “la ultima cena”?"<<endl;
		cout<<"\n1. Leonardo Davinci";
		cout<<"\n2. Frida Calo";
		cout<<"\n3. Mario Vargas Llosa";
		cout<<"\nLa alternativa correcta es: ";cin>> l;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		if(k==1){
		sc_h++;	
		}
		if(l==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<12-sc_h<<endl;
		}
		if(h==13){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 13 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En que continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Que tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		cout<<"\nPREGUNTA 11"<<endl;
		cout<<"\n¿De que colores es la bandera de Mexico?"<<endl;
		cout<<"\n1. Verde, blanco y rojo";
		cout<<"\n2. Verde, amarillo y rojo";
		cout<<"\n3. Verde, amarillo y azul";
		cout<<"\nLa alternativa correcta es: ";cin>> k;
		
		cout<<"\nPREGUNTA 12"<<endl;
		cout<<"\n¿Quien pinto “la ultima cena”?"<<endl;
		cout<<"\n1. Leonardo Davinci";
		cout<<"\n2. Frida Calo";
		cout<<"\n3. Mario Vargas Llosa";
		cout<<"\nLa alternativa correcta es: ";cin>> l;
		
		cout<<"\nPREGUNTA 13"<<endl;
		cout<<"\n¿En que pais se encuentra la torre de Pisa?"<<endl;
		cout<<"\n1. Italia";
		cout<<"\n2. Francia";
		cout<<"\n3. Inglaterra";
		cout<<"\nLa alternativa correcta es: ";cin>> m;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		if(k==1){
		sc_h++;	
		}
		if(l==1){
		sc_h++;	
		}
		if(m==1){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<13-sc_h<<endl;
		}
		if(h==14){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 14 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Qué tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		cout<<"\nPREGUNTA 11"<<endl;
		cout<<"\n¿De que colores es la bandera de Mexico?"<<endl;
		cout<<"\n1. Verde, blanco y rojo";
		cout<<"\n2. Verde, amarillo y rojo";
		cout<<"\n3. Verde, amarillo y azul";
		cout<<"\nLa alternativa correcta es: ";cin>> k;
		
		cout<<"\nPREGUNTA 12"<<endl;
		cout<<"\n¿Quien pinto “la ultima cena”?"<<endl;
		cout<<"\n1. Leonardo Davinci";
		cout<<"\n2. Frida Calo";
		cout<<"\n3. Mario Vargas Llosa";
		cout<<"\nLa alternativa correcta es: ";cin>> l;
		
		cout<<"\nPREGUNTA 13"<<endl;
		cout<<"\n¿En que pais se encuentra la torre de Pisa?"<<endl;
		cout<<"\n1. Italia";
		cout<<"\n2. Francia";
		cout<<"\n3. Inglaterra";
		cout<<"\nLa alternativa correcta es: ";cin>> m;
		
		cout<<"\nPREGUNTA 14"<<endl;
		cout<<"\n¿Cuando acabo la II Guerra Mundial?"<<endl;
		cout<<"\n1. En 1925";
		cout<<"\n2. En 1935";
		cout<<"\n3. En 1945";
		cout<<"\nLa alternativa correcta es: ";cin>> n;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		if(k==1){
		sc_h++;	
		}
		if(l==1){
		sc_h++;	
		}
		if(m==1){
		sc_h++;	
		}
		if(n==3){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<14-sc_h<<endl;
		}
		if(h==15){
		int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
		cout<<"\nA elegido 15 preguntas";
		cout<<"\nPREGUNTA 1"<<endl;
		cout<<"\n¿Cuales son los cinco tipos de sabores primarios?"<<endl;
		cout<<"\n1. Dulce, amargo, acido, salado y umami";
		cout<<"\n2. Dulce, agrio, salado, neutro, umami";
		cout<<"\n3. Dulce, verde, acido, salado y agrio";
		cout<<"\nLa alternativa correcta es: ";cin>> a;
		
		cout<<"\nPREGUNTA 2"<<endl;
		cout<<"\n¿Cual es el lugar mas frio de la tierra?"<<endl;
		cout<<"\n1. La Antartida";
		cout<<"\n2. Asia";
		cout<<"\n3. El everest";
		cout<<"\nLa alternativa correcta es: ";cin>> b;
		
		cout<<"\nPREGUNTA 3"<<endl;
		cout<<"\n¿Cual es el rio mas largo del mundo?"<<endl;
		cout<<"\n1. El nilo";
		cout<<"\n2. El amazonas";
		cout<<"\n3. Eufrates";
		cout<<"\nLa alternativa correcta es: ";cin>> c;
		
		cout<<"\nPREGUNTA 4"<<endl;
		cout<<"\n¿Quien escribio La Odisea?"<<endl;
		cout<<"\n1. Sofocles";
		cout<<"\n2. Homero";
		cout<<"\n3. Socrates";
		cout<<"\nLa alternativa correcta es: ";cin>> d;
		
		cout<<"\nPREGUNTA 5"<<endl;
		cout<<"\n4. ¿Como se llama la capital de Mongolia?"<<endl;
		cout<<"\n1. Paris";
		cout<<"\n2. Ulan Bator";
		cout<<"\n3. Mongoia";
		cout<<"\nLa alternativa correcta es: ";cin>> e;
		
		cout<<"\nPREGUNTA 6"<<endl;
		cout<<"\n¿En qué continente esta Ecuador?"<<endl;
		cout<<"\n1. America del sur";
		cout<<"\n2. America del norte";
		cout<<"\n3. Asia";
		cout<<"\nLa alternativa correcta es: ";cin>> f;
		
		cout<<"\nPREGUNTA 7"<<endl;
		cout<<"\n¿Como se llama la Reina del Reino Unido?"<<endl;
		cout<<"\n1. Isabel II";
		cout<<"\n2. Sofia";
		cout<<"\n3. Isabel III";
		cout<<"\nLa alternativa correcta es: ";cin>> g;

		cout<<"\nPREGUNTA 8"<<endl;
		cout<<"\n¿Que tipo de animal es la ballena?"<<endl;
		cout<<"\n1. Mamifero";
		cout<<"\n2. Reptil";
		cout<<"\n3. Ave";
		cout<<"\nLa alternativa correcta es: ";cin>> h;
		
		cout<<"\nPREGUNTA 9"<<endl;
		cout<<"\n¿Donde originaron los juegos olimpicos?"<<endl;
		cout<<"\n1. Roma";
		cout<<"\n2. Mexico";
		cout<<"\n3. Grecia";
		cout<<"\nLa alternativa correcta es: ";cin>> i;
		
		cout<<"\nPREGUNTA 10"<<endl;
		cout<<"\n¿Quien es el autor de el Quijote?"<<endl;
		cout<<"\n1. Miguel de Cervantes Sabedra";
		cout<<"\n2. Cesar vallejo";
		cout<<"\n3. Pablo Neruda";
		cout<<"\nLa alternativa correcta es: ";cin>> j;
		
		cout<<"\nPREGUNTA 11"<<endl;
		cout<<"\n¿De que colores es la bandera de Mexico?"<<endl;
		cout<<"\n1. Verde, blanco y rojo";
		cout<<"\n2. Verde, amarillo y rojo";
		cout<<"\n3. Verde, amarillo y azul";
		cout<<"\nLa alternativa correcta es: ";cin>> k;
		
		cout<<"\nPREGUNTA 12"<<endl;
		cout<<"\n¿Quien pinto “la ultima cena”?"<<endl;
		cout<<"\n1. Leonardo Davinci";
		cout<<"\n2. Frida Calo";
		cout<<"\n3. Mario Vargas Llosa";
		cout<<"\nLa alternativa correcta es: ";cin>> l;
		
		cout<<"\nPREGUNTA 13"<<endl;
		cout<<"\n¿En que pais se encuentra la torre de Pisa?"<<endl;
		cout<<"\n1. Italia";
		cout<<"\n2. Francia";
		cout<<"\n3. Inglaterra";
		cout<<"\nLa alternativa correcta es: ";cin>> m;
		
		cout<<"\nPREGUNTA 14"<<endl;
		cout<<"\n¿Cuando acabo la II Guerra Mundial?"<<endl;
		cout<<"\n1. En 1925";
		cout<<"\n2. En 1935";
		cout<<"\n3. En 1945";
		cout<<"\nLa alternativa correcta es: ";cin>> n;
		
		cout<<"\nPREGUNTA 15"<<endl;
		cout<<"\n¿Cual es el oceano mas grande?"<<endl;
		cout<<"\n1. Atlantico";
		cout<<"\n2. Indico";
		cout<<"\n3. Pacifico";
		cout<<"\nLa alternativa correcta es: ";cin>> o;
		
		if(a==1){
		sc_h++;	
		}
		if(b==1){
		sc_h++;	
		}
		if(c==2){
		sc_h++;	
		}
		if(d==2){
		sc_h++;	
		}
		if(e==2){
		sc_h++;	
		}
		if(f==1){
		sc_h++;	
		}
		if(g==1){
		sc_h++;	
		}
		if(h==1){
		sc_h++;	
		}
		if(i==3){
		sc_h++;	
		}
		if(j==1){
		sc_h++;	
		}
		if(k==1){
		sc_h++;	
		}
		if(l==1){
		sc_h++;	
		}
		if(m==1){
		sc_h++;	
		}
		if(n==3){
		sc_h++;	
		}
		if(o==3){
		sc_h++;	
		}
		cout<<"\nCantidad de preguntas respondidas correctamente: "<<sc_h<<endl;
		cout<<"\nCantidad de preguntas respondidas erroneamente: "<<15-sc_h<<endl;
		}
		}
	 }

}
