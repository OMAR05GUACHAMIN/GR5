#include <iostream>
#include <fstream>
using namespace std;
#include <iomanip>

string archivo;
void inserccion(int a[], int n);
void imprimir (int a[], int n);

int main()
{

    int a[]={8,6,3,2,1,99,56,13,-89,-5,15};
    cout<<endl;
    inserccion(a,11);

    return 0;
}




void inserccion(int a[], int n)
{
  int aux;

  ofstream escritura;
  escritura.open("C:/Users/USER/Desktop/inserccion/inserccion.txt", ios::out);

  cout<<"Elementos:"<<endl;
  escritura<<"________________________________________________________________"<<endl;
  escritura<<setw(35)<<"Elementos: "<<endl;
  escritura<<"________________________________________________________________"<<endl;

   for(int i=0; i<10; i++){
      cout<<"[ "<<a[i]<<" ]";
      escritura<<"[ "<<a[i]<<" ]";
    }

    cout<<endl;
    escritura<<endl;



  cout<<"Elementos ordenados por el algoritmo de inserccion: "<<endl;
  escritura<<"________________________________________________________________"<<endl;
  escritura<<setw(60)<<"Elementos ordenados por el algoritmo de inserccion: "<<endl;
  //escritura<<endl;
  escritura<<"________________________________________________________________"<<endl;
    for (int i=0; i<n; i++)
    {
        aux=a[i];
        int p=i;
        while (p>0)
        {
           if (a[p-1]>aux)
            {
                a[p]=a[p-1];
                a[p-1]=aux;
            }
            p--;
        }

    }

    for (int i=0; i<n; i++)
    {
        cout<<"[ "<<a[i]<<" ]";
        escritura<<"[ "<<a[i]<<" ]";
    }
    escritura.close();
}
