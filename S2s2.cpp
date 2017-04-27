#include <iostream> 

using namespace std;

/*La función muestra el menú y valida entrada 
-que sea un valor correcto
retorna la opción elegida por el usuario

*/
int menu();
/*funcion que calcula factorial de un número*/
int factorial(int);

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
      int num;
      cout<<"Escriba un número: ";
      cin>>num;
      cout<<"El factorial de "<<num<<" es:"
          <<factorial(num)<<endl; 
       break;
    }
    case 4:
       salir=true;  
    break;

   }

 }

 return 0;
}

int factorial(int i){
  if( i<0 )//validar input
    return -1;
  else if( i==0 ){ // fondo de la recursión
    return 1;
  }else{
   return i * factorial(i-1); 
  } 
}

//función menu
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
