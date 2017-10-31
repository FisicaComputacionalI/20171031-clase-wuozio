//rocio flores hernandez
//clase del 31 de octubre
//promedios de felicidad =)
#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    size_t talla=16;
    cout<<"¿cuantos estudiantes van a terminar de estudiar?"<<endl;
    cin>>talla;
    int *edad=new int[talla];

  for (int i=0; i<talla; i++){
    cout<<"¿que edad tienen?"<<endl;
    cin>>edad[i];
  }
  for (int j=0; j<talla; j++)
    sum+=(edad[j]+3);
  for (int j=0; j<talla; j++)
    cout<<edad [j]<<" , ";
  cout<<endl;
  cout<<"el promedio de la edad de su felicidad es "<<sum/talla<<endl;
  return 0;
}
