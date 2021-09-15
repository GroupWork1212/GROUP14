#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

int main()
{
    int a; string b =""; double tt;
    double total_price = 0.00;

    char opt ; int itm, i;

    cout<<"****************** WELCOME TO GROUP 14 STORE POINT OF SALE ********************\n";
    cout<<"................Product Menu ...............\n";
    cout<<" Press 1. Dettol anti-bacterial = N900.00 ..\n";
    cout<<" Press 2. Megir men's wrist watch  = N7000.00 ..\n";
    cout<<" Press 3. Dell wireless mouse = N4000.00 ..\n";
    cout<<" Press 4. Condenser microphone = N1500.00 ..\n";
    cout<<" Press 5. Hair closure = N2500.00 ..\n";
    cout<<" Press 6. Nike Elemental Backpack = N14000.00 ..\n";
    cout<<" Press 7. Bang and Olfsen Earpod = N22000.00 ..\n";
    cout<<"*******************************************************************************\n";

    cout<<"\n how many item do you want to buy: \n"; cin>>a;
     string selitem[a] ={};
    double price[a] ={};

    for(i=0; i<a; i++){
        cout<<"Enter menu option: ";cin>>itm;


            switch(itm){
                case 1:{
              tt = 900.00;
              b= " Dettol anti-bacterial";
              selitem[i]= b;
              price[i]= tt;
            break;

            }
            case 2:{
                tt =  7000.00;
              b= " Megir men's wrist watch";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 3:{
                tt =  4000.00;
              b= " Dell wireless mouse";
              selitem[i]= b;
              price[i]= tt;
              break;
            }

            case 4:{
               tt =  1500.00;
              b= " Condenser microphone";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 5: {
                 tt =  2500.00;
              b= " Hair closure";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 6:{
                  tt =  14000.00;
              b= " Nike Elemental Backpack";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 7:{
                tt =  22000.00;
              b= " Bang and Olfsen Earpod";
              selitem[i]= b;
              price[i]= tt;
              break;
            }

                default:{
                    cout<<"Invalid menu option \n";
                    break;
                }
            }

    }
    cout<<"\n******************GROUP 14 STORE CUSTOMER RECEIPT ***************************\n";
    for (int k=0; k<a; k++){

        cout<<"\n"<<selitem[k]<<".............."<<price[k]<<"\n";
        cout<<"============================================================\n";
        total_price += price[k];


    }
    cout<<"******************** THANKS FOR YOUR PATRONAGE ********************************\n";
    cout<<"TOTAL PRICE: "<<total_price;
    cout<<"\n";



return 0;
}
