#include<iostream>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};

int main(){
    EMP EMPLEADOS[100];
    int n;
    cout<<"numeros de empleados: ";
    cin>>n;
    for(int i=0; i<n; i++){
    	cout<<"Numero de empleado : ";
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"Nombre del empleado: ";
        getline(cin,EMPLEADOS[i].nom);
        cout<<"Ventas por mes: ";
        for(int j=0; j<12; j++){
            cin>>EMPLEADOS[i].ven[j];
        }
        cout<<"Salario: ";
        cin>>EMPLEADOS[i].sal;
    }
    return 0;
}