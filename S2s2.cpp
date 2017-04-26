#include <iostream> 

using namespace std;

/*La función muestra el menú y valida entrada 
-que sea un valor correcto
retorna la opción elegida por el usuario
*/
int menu();


int main(){

 bool salir = false;
 while(!salir){
   
   switch( menu() ){
    case 1:{
      int num1,num2;
      cout<<"Escriba un número: ";
      cin>>num1;
      cout<<"Escriba un número: ";
      cin>>num2;
      cout<<"El resultado es: "<<num1 * num2<<endl;    
    
      break;
    }
    case 2:{
       int num1, num2; 
       cout<<"Escriba un número: ";
       cin>>num1;
       cout<<"Escriba un número: ";
       cin>>num2;
       cout<<"El resultado es: "<<num1 + num2<<endl;    
       break;
    }
    case 3:{
       
       break;
    }
    case 4:
       salir=true;  
    break;

   }

 }

 return 0;
}

int menu(){
  int opcion; 
  bool valido=false;
  do{

    cout<<"      MENU"<<endl
        <<"1.- Multiplicar dos números"<<endl
        <<"2.- Sumar dos números"<<endl
        <<"3.- Calcular Factorial"<<endl
        <<"4.- Salir"<<endl;

     cout<<" Ingrese una opción: ";
     cin>>opcion;
 
     if(opcion > 0 && opcion < 5)
        valido=true;
     else{
         cout<<"Opción no válida, intente de nuevo ..."<<endl;
     }

  }while(!valido);
 
  return opcion;
}
