#include<iostream>
#include<string>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal, sv;
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
        cin>>EMPLEADOS[i].sv;
        EMPLEADOS[i].sv=0;
        for(int j=0; j<12; j++){
            cin>>EMPLEADOS[i].ven[j];
            EMPLEADOS[i].sv= EMPLEADOS[i].sv+EMPLEADOS[i].ven[j];
        }
        cout<<"Salario: ";
        cin>>EMPLEADOS[i].sal;
        if(EMPLEADOS[i].sv > 100){
		    EMPLEADOS[i].sal= EMPLEADOS[i].sal*1.10;
		    cout<<"----------------------------------------------------------"<<endl;
	        cout<<"salario aumentado para empleado numero "<<EMPLEADOS[i].num<<endl;
	        cout<<"salario actualizado: "<<EMPLEADOS[i].sal<<endl;
        }
        if(EMPLEADOS[i].ven[11] < 30){
		    cout<<"----------------------------------------------------------"<<endl;
		    cout<<"empleado/os con ventas menor de 30"<<endl;
	        cout<<"empleado numero: "<<EMPLEADOS[i].num<<endl;
	        cout<<"nombre: "<<EMPLEADOS[i].nom<<endl;
	    }
    }
    int vm;
    vm=0;
    for(int i=1; i<n; i++){
    	if(EMPLEADOS[i].sv > EMPLEADOS[vm].sv){git commit -m "aumento 10% de salario"
    		vm= i;
		}
	}
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"empleado con el mayor numero de ventas en el año: "<<endl;
	cout<<"numero: "<<EMPLEADOS[vm].num<<endl;
	cout<<"nombre: "<<EMPLEADOS[vm].nom<<endl;
    return 0;
}