//vamos a realizAR UN EJEMPLO DE ARRAY PARA ACCEDER
//Y MODIFICAR ELEMENTOS DEL ARRAY

#include <iostream>

using namespace std;

int main (){
	int n, m=5;
	int a[] = {3,4,5,8,1};
	
	// voy a asignar a n el valor de la posicion 0
	n=a[0];
	cout<<n<<endl;
	
	a[0]=a[1]+a[2];
	
	cout<<a[0]<<endl;
	
	a[1]++;
	
	cout<<a[1]<<endl;
	
	a[n]=m +10;
	
	cout<<a[n]<<endl;
	
	a[n+1]=7;
	
	cout<<a[n+1]<<endl;
	
	if(a[0]>=a[1]){
		
		a[4]=a[0];
			cout<<a[4]<<endl;
	}
	
	
	
		cout<<a[0]<<" "<<a[1]<<" "<< a[2]<< " "<<a[4];
		
		cout<<endl;
	
}
