
#include <iostream>
using namespace std;

int main()
{
    int num, * dir_num;
    num = 20;
    dir_num = &num;

    cout << "Numero: " << num << endl;//muestra el numero
    cout << "Direccion de memoria del numero: " << &num << endl;//muestra la posicion de memoria

    cout << "Numero: " << *dir_num << endl;//muestra el numero
    cout << "Direccion de memoria del numero: " << dir_num << endl;//muestra la posicion de memoria
    //La direccion y  puntero deben ser el mismo tipo de variable
    //------------------------Ejercicio 1: el numero es par?--------------------------------

    int awa, * dir_awa;

    cout << "Introduce un numero: " << endl;

    cin >> awa;
    dir_awa = &awa;

    /*if (*dir_awa % 2 == 0)
    {
        cout << "El numero: " << *dir_awa << " es par" << endl;
        cout << "Guardado en: " << dir_awa << endl;
    }
    else
    {
        cout << "El numero: " << *dir_awa << " es impar" << endl;
        cout << "Guardado en: " << dir_awa << endl;
    }
    */


    //------------------------Ejercicio 2: el numero es primo?--------------------------------
    int div=0, *dir_div;
    

    for (int i = 1; i <= *dir_awa; i++)
    {
        if (*dir_awa % i == 0)
        {
            div++;
            if (div > 2)
            {
                break;
            }

        }
    }


    if (div == 2)
    {
        cout << "El numero: " << *dir_awa << " es primo " << endl;
        cout << "Guardado en: " << dir_awa << endl;
    }
    else
    {
        cout << "El numero: " << *dir_awa << " no es primo " << endl;
        cout << "Guardado en: " << dir_awa << endl;
    }

        
  


}