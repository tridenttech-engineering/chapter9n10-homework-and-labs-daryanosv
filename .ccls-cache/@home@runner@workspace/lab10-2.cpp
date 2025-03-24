//Lab10-2.cpp - displays total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void displayOptions();
void getRegular(int windows, double price, double &total);
void getBoGo(int windows, double price, double &total);

int main()
{
    //declare variables
    int option=0;
    int numOrder=0;
    double winPrice=0.0;
    double total=0.0;

    cout<<fixed<<setprecision(2);

    cout<<"Enter option: ";
        cin>>option;

    //if statement
    if (option == 1 || option == 2)
        {
            cout<<"Number of windows: ";
                cin>>numOrder;
            cout<<"Price per window: ";
                cin>>winPrice;

            if (option == 1)
                getRegular(numOrder, winPrice, total);
            else
                getBoGo(numOrder, winPrice, total);
            //end if
            cout << "Total owened: $" << total << endl;

        }
    else 
        cout<< "invalide option"<<endl;
    //end if
    
    return 0;
} //end of main function

//*****function definitions*****
void displayOption()
{
    cout << "Pricing options:" << endl;
    cout << "1 Regular pricing" << endl;
    cout << "2 Bogo pricing" << endl;
}//end display option

void getRegular(int windows, double price, double &total)
{
    total = windows * price;
    //end regular
}
void getBoGo(int windows, double price, double &total)
{
    total = (windows / 2 + windows % 2) * price;
    //end Bogo 
}