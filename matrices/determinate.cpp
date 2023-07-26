#include <iostream>

using namespace std;

int main(){

 float a1[2], a2[2], b1[3], b2[3], r1=0, r2=0, r3=0, r4=0, r5=0, r6=0, determinante=0;

 int i, a ;

 do{
 
 cout<<"quiere realizar una matriz de 2x2"<<endl;
 cout<<"quiere realizar una matriz de 3x3"<<endl;
 cin>> a ;

 if(a==1){

 cout<<"ingrese los valores de la primera matriz"<<endl;
 cin>> a1[0] >> a1[1];
 cout<<"ingrese los valores de la segunda matriz"<<endl;
 cin>> a2[0] >> a2[1];

 for(i=0; i<2; i++){

 r1=a1[0]*a2[1];
 r2=a2[0]*a1[0];
 determinante=a1-a2;


 }
 cout<<"el resultado de la matriz es: "<< determinante;
 
 } 

 }

}
 


