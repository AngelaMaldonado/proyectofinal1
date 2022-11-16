#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define PI 3.1416

using namespace std;
float n1,n2,r,resulgrad,resulrad;

void sumar()
 {
 	char opc;
 	do{
		system("cls");
		cout<<"SUMAR NUMEROS"<<endl;
		cout<<endl;
		cout<<"digite un numero: ";
		cin>>n1;
		cout<<"digite un numero: ";
		cin>>n2;
		cout<<"la suma es = "<<n1+n2<<endl<<endl;
		cout<<"Otra suma? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
}


void resta()
 {
 	char opc;
 	do{
		system("cls");
		cout<<"RESTAR NUMEROS"<<endl;
		cout<<endl;
		cout<<"digite un numero: ";
		cin>>n1;
		cout<<"digite un numero: ";
		cin>>n2;
		cout<<"la resta es:"<<n1-n2<<endl;
		cout<<"Otra resta? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
}

void multiplicaion()
 {
 	char opc;
 	do{
		system("cls");
		cout<<"MULTIPLICAR NUMEROS"<<endl;
		cout<<endl;
		cout<<"digite un numero: ";
		cin>>n1;
		cout<<"digite un numero: ";
		cin>>n2;
		cout<<"la multiplicación es:"<<n1*n2<<endl;
		cout<<endl;
		cout<<"Otra multiplicación? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
}
void divicion ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"DIVIDIR NUMEROS"<<endl;
		cout<<endl;
		cout<<"digite un numero: ";
		cin>>n1;
		cout<<"digite un numero: ";
		cin>>n2;
		while(n2==0)
		{
			cout<<"error el divisor no puede ser 0"<<endl;
			cout<<"digite un numero: ";
			cin>>n2;
		}
		cout<<"las divicion es:"<<n1/n2<<endl;
		cout<<endl;
		cout<<"Otra division? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');

}
void seno ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"SENO DE UN NUMERO"<<endl;
		cout<<endl;
		cout<<"ingrese un valor: ";
		cin>>n1; cout <<endl;
		resulrad = sin(n1);
		resulgrad = sin(n1 * PI/180);
		
		cout <<"\n el seno de "<<n1<<" es :"<<endl;
		cout <<"\n en grado es:"<<resulgrad<<endl;
		cout <<"\n en radianes :"<<resulgrad<<endl;
		cout<<endl;
		cout<<"Otro seno? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
}
void coseno ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"COSENO DE UN NUMERO"<<endl;
		cout<<endl;
		cout<<"ingrese un valor: ";
		cin>>n1; cout <<endl;
		resulrad = cos(n1);
		resulgrad = cos(n1 * PI/180);
		
		cout <<"\n el coseno de "<<n1<<"es :"<<endl;
		cout <<"\n en grado es:"<<resulgrad<<endl;
		cout <<"\n en radianes :"<<resulgrad<<endl;
		cout<<endl;
		cout<<"Otro coseno? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
  
}
void tangente ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"TANGENTE DE UN NUMERO"<<endl;
		cout<<endl;
		cout<<"ingrese un valor: ";
		cin>>n1; cout <<endl;
		resulrad = tan(n1);
		resulgrad = tan(n1 * PI/180);
		
		cout <<"\n el tangente de "<<n1<<"es :"<<endl;
		cout <<"\n en grado es: "<<resulgrad<<endl;
		cout <<"\n en radianes :"<<resulgrad<<endl;
		cout<<endl;
		cout<<"Otro tangente? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
}
void cuadrado()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"CUADRADO DE UN NUMERO"<<endl;
		cout<<endl;
		cout<<"ingrese un valor: ";
		cin>>n1; cout <<endl;
		r = pow(n1, 2);
		cout<<"\n la evalacion al cuadrado de: "<<n1<<" es: "<<r<<endl;
		cout<<endl;
		cout<<"Otro cuadrado? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
  
}
void elevacion ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"ELEVACION DE UNA BASE A UNA POTENCIA"<<endl;
		cout<<endl;
		cout<<"ingrese la base: ";
		cin>>n1; cout <<endl;
		cout<<"ingrese el exponente: ";
		cin>>n2; 
		cout <<endl;
		r=  pow(n1,n2);
		cout<<"el resultado de "<<n1<<" elevada a la potencia "<<n2<<" es: "<<r<<endl;
		cout<<endl;
		cout<<"Otra potencia? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
  
}
void raiz ()
 {
 	char opc;
 	do{
 		system("cls");
		cout<<"RAIZ CUADRADA DE UN NUMERO"<<endl;
		cout<<endl;
		cout<<"ingrese un  valor: ";
		cin>>n1; cout <<endl;
		r=sqrt(n1);
		cout<<"\n la raiz cuadrada de "<<n1<<" es: "<<r<<endl;
		cout<<endl;
		cout<<"Otra raiz? Si(s) o No(n) ";
		cin>>opc;
	} while (opc != 'n' && opc != 'N');
  
}

void salir ()
 {
  cout<<"////hasta pronto///";system("cls"); 
  
  }
  
int main()
{
    	int opc;
    	do{ 
		system("cls");
    	cout<<"menu"<<endl;
    	cout<<"1.suma"<<endl;
    	cout<<"2.resta"<<endl;
    	cout<<"3.multiplicaion"<<endl;
    	cout<<"4.divicion"<<endl;
    	cout<<"5 seno"<<endl;
    	cout<<"6 tangente"<<endl;
    	cout<<"7 elevacion al cuadrado"<<endl;
    	cout<<"8 elevacion de un numero"<<endl;
    	cout<<"9 raiz cuadrada"<<endl;
    	cout<<"10 salir"<<endl;
    	cin>>opc;
 		switch(opc){
	        case 1: sumar();break;
			case 2: resta();break;
			case 3: multiplicaion();break;
			case 4: divicion();break; 
			case 5: seno();break;
			case 6: tangente();break;
			case 7: cuadrado();break;
			case 8: elevacion();break;
	        case 9: raiz();break;		
	        case 10: salir();break;
	 	}
	 	system("cls");
	}while(opc!=10);
 system("pause");          
 return 0; 	
}
