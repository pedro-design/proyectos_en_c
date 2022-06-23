#include <iostream>
using namespace std;
//funciones de ayuda
float suma(){
	float a;
	float b;
	cout<< "introduce un numero \n";
	cin>> a ;
	cout<< "introduce otro numero \n";
	cin>> b ;
	return a+b;
	
}
	
	
float resta(){
	float a;
	float b;
	cout<< "introduce un numero \n";
	cin>> a ;
	cout<< "introduce otro numero \n";
	cin>> b ;
	return a-b;
		
}
float multiplicacion(){
	float a;
	float b;
	cout<< "introduce un numero \n";
	cin>> a ;
	cout<< "introduce otro numero \n";
	cin>> b ;
	return a*b;
			
}
float division(){
	float a;
	float b;
	cout<< "introduce un numero \n";
	cin>> a ;
	cout<< "introduce otro numero \n";
	cin>> b ;
	return a/b;
				
}



class menu{
	public:
		string  titulo = "";
		string* selecciones;
		int elementos = 0;
		int sel = 0;
	//	string* mensaje_de_menu;
		void cambiar_menu(string* a,int indices){
			this -> selecciones = a;
			this -> elementos = indices;
			//this -> mensaje_de_menu = ayuda;
		}
		
		int leer_y_mostrar(){
			bool ok = false;
			cout << "\n";
			cout<<titulo<<"\n";
			cout << "\n";
			int seleccion = 0;
			for(int i=0;i<elementos;i++){
				cout<<i <<" -> " << selecciones[i] <<"\n";
			}
			
			cout << "\n";
			cout << "elige un numero a continuacion \n";
			while (ok == false){
			cin >> seleccion;
			if(seleccion >(elementos-1) ){
				cout << "elige una opcion valida \n";
			}else{
				ok = true;
				this -> sel = seleccion;
			}
			
			}
			cout << "escogio : "<<selecciones[seleccion]<<"\n";
			
			return seleccion;
		}
};



string opciones[6] = {"ayuda", "suma", "resta", "divicion","multiplicacion","salir"};

bool finalizar = false;



int main(int argc, char *argv[]) {
	
	menu menu_principal;
	menu_principal.titulo = "Calculadora basica";
	
	menu_principal.cambiar_menu(opciones, 6);
	int funcion = 0;
	while (finalizar== false){
		funcion = menu_principal.leer_y_mostrar();
		if(funcion == 0){
			cout << "este es un ejemplo de la clase menu, a forma de calculadora";
		}
		if(funcion == 1){
			cout << "la suma es  " <<suma();
		}
		if(funcion == 2){
			cout << "la resta es  " <<resta();
		}
		if(funcion == 3){
			cout << "la divicion es  " <<division();
		}
		if(funcion == 4){
			cout << "la multiplicacion es  " <<multiplicacion();
		}
		if(funcion == 5){
			finalizar=true;
		}
		
		cout<<"\n";
	}
	return 0;
}

