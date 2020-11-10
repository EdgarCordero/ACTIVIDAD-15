#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> cadenas;
    string op;

    while(true){

        cout << "1.- AGREGAR AL FINAL" << endl;
        cout << "2.- MOSTRAR" << endl;
        cout << "3.- INICIALIZAR" << endl;
        cout << "4.- FRENTE" << endl;
        cout << "5.- ULTIMO" << endl;
        cout << "6.- ORDENAR" << endl;
        cout << "7.- INSERTAR" << endl;
        cout << "8.- ELIMINAR" << endl;
        cout << "9.- ELIMINAR ULTIMO" << endl;
        cout << "0.- SALIR" << endl;

        getline(cin, op);
        cout << endl;

        if (op == "1"){
            string cadena;

            cout << "CADENA A INTRODUCIR: ";
            getline(cin, cadena);

            cadenas.push_back(cadena);
            cout << endl;
        }
        else if (op == "2"){
                for(size_t i = 0; i < cadenas.size(); i++){
                    cout << cadenas[i] << ", ";
                }
                cout << endl << endl;
        }
        else if (op == "3"){
            size_t n;
            string cadena;

            cout << "TAM: ";
            cin >> n;
            cout << "CADENA: ";
            fflush(stdin);
            getline(cin, cadena);

            cadenas = vector<string>(n, cadena);
            cout << endl;

        }
        else if (op == "4"){
            if(cadenas.empty()){
                cout << "VECTOR VACIO" << endl;
            }
            else{
                cout << cadenas.front() << endl;
            }
            cout << endl;
        }
        else if (op == "5"){
            if(cadenas.empty()){
                cout << "VECTOR VACIO" << endl;
            }
            else{
                cout << cadenas.back() << endl;
            }
            cout << endl;
        }
        else if (op == "6"){
            sort(cadenas.begin(), cadenas.end());
        }
        else if(op == "7"){
            size_t p;
            string cadena;

            cout << "POSICION: ";
            cin >> p;
            cout << "CADENA: ";
            fflush(stdin);
            getline(cin, cadena);

            if (p >= cadenas.size()){
                cout << "POSICION NO VALIDA" << endl;
            }
            else{
                cadenas.insert(cadenas.begin()+p, cadena);
            }
        }
        else if(op == "8"){
            size_t p;

            cout << "POSICION: ";
            cin >> p;
            cin.ignore();

            if (p >= cadenas.size()){
                cout << "POSICION NO VALIDA" << endl;
            }
            else{
                cadenas.erase(cadenas.begin()+p);
            }

        }
        else if (op == "9"){
            if(cadenas.empty()){
                cout << "VECTOR VACIO" << endl;
            }else{
                cadenas.pop_back();
            }

        }
        else if (op == "0"){
            break;
        }

    }
    return 0;
}
