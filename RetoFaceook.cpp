//
//  main.cpp
//  RetoFacebook
//
//    Created by Itzel  Negrete Sosa on 25/08/18.
//  Copyright © 2018 Itzel  Negrete Sosa. All rights reserved.
//

#include <iostream>
#include <conio.h> //Esperar un enter
#include <string.h>
#include <fstream>
#include <stdlib.h>

//Para limpiar la pantalla
#ifdef_WIN32
#else
#error "No soportado para limpiar la pantalla"
#endif

using namespace std;

class inicio
{
private:
    char nombre [30];
    char apellido [30]
    char domicilio [30];
    char correo [30];
    char celular [30];
    char code [30];
    char usuario [30];
    char admin [30];
    char edificio [30];
    char cuarto [30];
 
public:
    void signUp ();
    void logIn ();
    void cambiarEdif ();
    void menuPrincipal ();
    void mostrarRegistro (char codigo [30]);
    void listaUsuarios ();
    void detallesDeUser ();
} ;

void pausa ();

void error();

void inicio :: menuPrincipal
{
int opcion;
do
  {
    cout <<"\t\t\t\t____Welcome to Makobu____\t\t\t\t\n\n";
    cout << "1. Log in";
    cout << "2. Sign up";
    cout << "3. Salir\n\n";
    
    cin >> opcion;
    system (CLEAR);
    switch (opcion)
        {
        default:
            cout << "Ha ingresado una opcion no valida";
            break;
            
        case 1:
            logIn ();
            break;
        case 2:
            signUp ();
            break;
        case 3:
            break;
        }
      }
      while (opcion != 3);
}
    
      void  inicio :: logIn ()
      {
          ofstream escritura;
          ifstream verificador;
          char auxCodigo [30];
          bool coincide = false;
          verificador.open ("users.txt", ios:: in);
          escritura.open ("users.txt", ios :: app);
          
          if (escritura.is_open()&&verificador.is_open())
          {
              cout << "\t\t\t\t____LOGIN____\t\t\t\t\n\n";
              fflush (stdin);
              cout << " Username ";
              cin.getline (auxCodigo, 30);
              if (strcmp (auxCodigo, "")==0)
                  do
                  {
                      cout <<" codigo de usuario invalido, intente de nuevo: ";
                      cin.getline (auxCodigo, 30);
                  }
              
              while (strcmp(auxCodigo, " ") == 0);
              do
              {
                  
              }
          }
      }
      
      int main () {
          system ("color f0");
          menu inicio;
          inicio.menuPrincipal ();
          return 0;
      }
