               //Programa que suma Varios numeros
//nombre: Montaño Jaen Fausto
//Curso :Tics "B"
                                   //docente:Ing.Stalin Francis

#include<iostream>  //se dice que son componentes de c++ utilizados para que se permita la entrada y salida
using namespace std; // se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias                                   estandar
int main() //representa el punto de inicio de su ejecucion
{

	float x=0,s=0;   //El float sirve como representacion de coma flotante de un numero

	// se declaran variables para poder iniciar con la ejecucion del programa
	int i=0,l;
	cout<<"ingrese el valor de l:  ";   //se prodece a detallar que al momento que se ejecute se ingrese el                                                    valor
	cin>>l;
	do{                                 // el do-while permite una instruccion o una instruccion compuesta                                                 hasta que una expresion especificada sea false

	cout<<"ingrese el valor de x:  ";                 
	cin>>x;
	i=i+1;
	s=s+x;                                         //se utiliza el acumulador por que sirve para incrementar                                                            su valor de forma variable dentro de un ciclo
	                                                 
	}while(i<l);         
	cout<<"la suma de los numeros fue:  "<<s<<endl;        //en la suma de varios numeros se puede utilizar los                                                                    numeros que sean necesarios para poder                                                                                 satisfacer al usuario
	return 0;
                                                     //Una vez haber resuelto todo y haber declarado se procede a                                                        dar por finalizado y ejecutar el programa
}

//Programa Finalizado

