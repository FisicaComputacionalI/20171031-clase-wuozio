//rocio flores hernandez
//clase del 31 de octubre
//promedios de felicidad =)
#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int edad[16];
  for (int i=0; i<16; i++){
    cout<<"¿que edad tienes?"<<endl;
    cin>>edad[i];
  }
  for (int j=0; j<16; j++)
    sum+=(edad[j]+3);
  for (int j=0; j<16; j++)
    cout<<edad [j]<<" , ";
  cout<<endl;
  cout<<"el promedio de la edad de nuestra felicidad grupal es "<<sum/16<<endl;
  return 0;
}
