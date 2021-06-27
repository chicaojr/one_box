#include<iostream>
#include<locale> 
#include<iomanip>
using namespace std;

int main ()
{
  cout<<"*** MEDIDOR DE IMC E CONSUMO DE AGUA MÍNIMO ***\n\n";
  
  bool sair = false;
  
  do
  {
  setlocale (LC_ALL, "Portuguese");
  double altur, pezo, resultado, agua;

    std::cout<<fixed<<setprecision(2);
    cout<<"- Informe sua altura: ";
    cin>>altur;
    cout<<"- Informe seu peso: ";
    cin>>pezo;
    resultado=pezo/(altur*altur);
    agua=(35*pezo)/1000; 
    cout<<"\n\n";

if (resultado<18.5)
{
cout<<"Seu IMC é: "<<resultado<<".\nVocê está abaixo do peso.\nE você deve consumir diariamente ao menos "<<agua<<"0 litros de água.\n\n";
}
else if (resultado>=18.5 && resultado<=24.9)
{
cout<<"Seu IMC é: "<<resultado<<".\nVocê está com o peso ideal. PARABÉNS!\nE você deve consumir diariamente ao menos "<<agua<<"0 litros de água.\n\n";
}
else if (resultado>=25 && resultado<=29.9)
{
cout<<"Seu IMC é: "<<resultado<<".\nVocê está levemente acima do peso.\nE você deve consumir diariamente ao menos "<<agua<<"0 litros de água.\n\n";
}
else if (resultado>=25 && resultado<=34.9)
{
cout<<"Seu IMC é: "<<resultado<<"./nVocê está com Obesidade Grau I. DEVE SE CUIDAR!/nE você deve consumir diariamente ao menos "<< agua<<"0 litros de água.\n\n";
}
else if (resultado>=35 && resultado<=39.9)
{
cout<<"Seu IMC é: "<<resultado<<"/nVocê está com Obesidade Grau II (severa). DEVE SE CUIDAR! /nE você deve consumir diariamente ao menos"<<agua<<"l de água.\n\n";
}
else if (resultado>39.9)
{
cout<<"Seu IMC é: "<<resultado<<"/nVocê está com Obesidade Grau III (mórbida). DEVE SE CUIDAR DE IMEDIATO!! /nE você deve consumir diariamente ao menos "<<agua<<"ml de água.\n\n";
}
  }
  while (sair == false);
return 0;
}