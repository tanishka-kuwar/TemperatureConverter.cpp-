// Temperature Converter Program
// Converts between Celsius, Fahrenheit, and Kelvin
// Written in C++ by Tanishka Kuwar

#include <iostream>
using namespace std;
void CelToFer(double val)
{
  double Fer=val*(9.0/5) + 32;
  cout<<val <<" C ="<<Fer<<" F"<<endl;
}
void CelToKel(double val)
{
     double Kel = val + 273.15;
     cout<<val<<" C ="<<Kel<<" K"<<endl;
}
void FerToCel(double val)
{
    double Cel = (val - 32)* 5/9;
     cout<<val <<" F ="<<Cel<<" C "<<endl;
}
void KelToCel(double val)
{
    double Cel = val - 273.15;
    cout<<val<<" K ="<<Cel<<" C "<<endl;
}
void KelToFer(double val)
{
    double Fer = (val - 273.15) * 9/5 + 32;
    cout<<val<<" K ="<<Fer<<" F "<<endl;
}
void FerToKel(double val)
{
    double Kel = (val - 32) * 5/9 + 273.15;
    cout<<val<<" F ="<<Kel<<" K "<<endl;

}
int main()
{
    int choice;
     double val;
    do{
       cout<<"\t---Temperature Conversion Menu---"<<endl;
       cout<<"1. Celsius to Fahrenheit"<<endl;
       cout<<"2. Fahrenheit to Celsius"<<endl;
       cout<<"3. Celsius to Kelvin"<<endl;
       cout<<"4. Kelvin to Celsius"<<endl;
       cout<<"5. Fahrenheit to Kelvin"<<endl;
       cout<<"6. Kelvin to Fahrenheit"<<endl;
       cout<<"7.Exit"<<endl;
        
       cout<<"Enter the choice:"; cin>>choice;
    
       switch(choice)
       {
        case 1:
           cout<<"Enter the temperature:"; cin>>val;
           CelToFer(val);
           break;
        case 2:
           cout<<"Enter the temperature:"; cin>>val;
           FerToCel( val);
           break;
        case 3:
           cout<<"Enter the temperaure:"; cin>>val;
           CelToKel(val);
           break;
        case 4:
           cout<<"Enter the temperature:"; cin>>val;
            KelToCel(val);
           break;
        case 5:
           cout<<"Enter the temperature:"; cin>>val;
           FerToKel(val);
           break;
        case 6:
           cout<<"Enter the temperature:"; cin>>val;
            KelToFer(val);
           break;
        case 7:
           break;
        default:
          cout<<"❌Invalid Input!!!"<<endl;   
          break;                                                                   
       }
    }while(choice!=7);
    return 0;
}