#include <iostream>
#include "arbol.h"
#include "helper.h"

using namespace std;

void MenuPrincipal()
{
    int opcion;    
    bool creado = false;
    int creado_cant = 0;
    arbolb arbolito = NULL;

    while(opcion!=0)
    {      
        cout << " -> ";
        cin >> opcion;
        cout << " Opcion ingresada -> " << opcion << endl;

        if(opcion == 1)
        {
            if(creado==false)
            {
                arbolito = crear();
                creado = true;
                
                PrintSucess("Arbolito creado con amor <3");
            }
            else
            {   
                PrintWarning("Arbol ya creado, puedes continuar.");
            }

            cout << endl;
        }
        else if(opcion == 2)
        {
            if(creado)
            {
                creado_cant++;
                
                if(creado_cant > 1)
                {
                    string entrada;

                    PrintWarning("El arbol ya tiene una raiz, si desea modificarlo debe ingresar a la opcion de modificar.");
                }
                else
                {
                    int dato;
                    
                    cout << "Ingrese dato : " << endl;
                    cin >> dato;

                    arbolito = insertar(dato, NULL, NULL); 
                    cout << "RAIZ: DATO >> " << raiz(arbolito) <<  endl;
                }
                
            }
            else
            {
               PrintError("Debes crear el arbol primero");
            }

            cout << endl;
        }
        else if(opcion == 3)
        {
            if(creado)
            {
                if(vacio(arbolito))
                {
                    PrintSucess("Arbol vacio. ");
                }
                else
                {
                    PrintError("El Arbol no esta vacio.");
                }
            }
            else
            {
                PrintWarning("Debes crear el arbol primero");
            }

            cout << endl;
        }
        else if(opcion == 4)
        {
            if(creado)
            {
                arbolb sub_izq = subiz(arbolito);
                cout << "El arbol ya esta creado" << endl;
            }
            else
            {
               PrintError("Debes crear el arbol primero");
            }
 
            //  arbolb sub_izq = subiz(arbolito);
            // if(sub_izq==NULL)
            // {
            //     PrintSucess("El sub arbol izquierdo no tiene elementos");
            // }
            // else
            // {
            //     cout << "Sub arbol izquierdo -> " << raiz(sub_izq) << endl;
            //     cout << endl;
            // }           
        }
        else if(opcion == 0)
        {
            cout << "Saliendo.. " << endl;
        }
        else
        {
            cout << "Opcion invalida" << endl;
        }
    }
};

int main()
{
    cout << endl;
    cout << "Bienvenidos a el menu de -> ARBOLES. " << endl;   
    cout << "1. Crear Arbol." << endl;
    cout << "2. Ingresar Raiz." << endl;
    cout << "3. Esta vacio?." << endl;
    cout << "4. SubArbol izquierdo." << endl;
    cout << "5. SubArbol derecho." << endl;
    
    cout << "0. Salir." << endl;
    
    MenuPrincipal();
    return 0;
}

