#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	cout<<"PROGRAM KONVERSI SUHU"<<endl;
	float celcius;
	cout<<"Masukkan suhu celcius = ";
	cin>>celcius;
	cout<<endl;
	cout<<"===========================";
	cout<<endl;
	cout<<"// HASIL KONVERSI //"<<endl;
	float fahrenheit = 1.8*celcius+32; 
	cout<<"Suhu Fahrenheit = "<<fahrenheit;
	cout<<" "<<"derajat fahrenheit";
	cout<<endl;
	float kelvin = celcius + 273.15;
	cout<<"Suhu Kelvin \t= "<<kelvin;
	cout<<" "<<"derajat kelvin";
	cout<<endl;
	float reamur = 0.8 * celcius;
	cout<<"Suhu Reamur \t= "<<reamur;
	cout<<" "<<"derajat reamur";
	cout<<endl;
	cout<<"===========================";
}
	

