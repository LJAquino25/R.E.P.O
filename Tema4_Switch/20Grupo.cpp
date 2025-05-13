#include <iostream>
using namespace std;
int main(){
  char NAME,OPCION;

  cout <<"Ingrese la inicial de su apellido: ";
  cin >>NAME;

  if(NAME >= 'A' && NAME <= 'M'){
    OPCION = 'A';
  }else{
    OPCION = 'N';
  }
  switch(OPCION)
  {
    case 'A':
    cout <<"Usted fue asignado al grupo 1 = A-M";
    break;
    case 'N':
    cout <<"Usted fue asignado al grupo 2 = N-Z";
    break;
  }
  return 0;
}








//*Asignación de Grupos en una Universidad**  
  //  Pide la inicial del apellido de un estudiante y usa `switch` para asignarlo a un grupo (A-M = Grupo 1, N-Z = Grupo 2).