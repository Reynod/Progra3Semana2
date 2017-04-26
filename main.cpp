#include <iostream> 

using namespace std;
//prototipos de funciones
void ejemplo();
//funcion que compara dos enteros y dice cual es mayor o si son iguales
void comparar(int,int);


int main(){


  cout<<"Hola Mundo"<<endl;
  int salir=1;
  while(salir == 1){

    int arreglo[5];
    //leer valores
    for( int i = 0; i<5; i++){
      cout<<"Escriba un número: ";
      cin>>arreglo[i];
    }

    //imprimir valores
    cout<<endl<<"Los valores leidos son: "<<endl;
    for(int i=0; i<5;i++  ){
      cout<<arreglo[i]<<endl;
    }

    cout<<endl<<"Ingrese 1 para continuar, 0 para salir: ";
    cin>>salir;

  }//while
  //imprimir un mensaje en una función
  ejemplo();
 //leer dos números y compararlos en una función
  int numero1, numero2;

  cout<<"Ingrese un número: ";
  cin>>numero1;
  cout<<"Ingrese otro número: ";
  cin>>numero2;
  
  comparar(numero1,numero2);

  //
  return 0;
}

void comparar(int a, int b){

  if( a > b){
    cout<<a<<" es mayor que "<<b<<endl;
  } else if( a == b)
      cout<<a<<" es igual a "<<b<<endl;
  else {
    cout<<b<<" es mayor que "<<a<<endl;
  }

}



void ejemplo(){

  cout<<"Saliendo del ciclo..."<<endl;

}


