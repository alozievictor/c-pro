#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
 


int calculate_Electricity(int);
void unit()
{
    cout << "price to purchase unit \n" << endl;
    cout << "1: #1000 " << endl;
    cout << "2: #1200 " << endl;
    cout << "3: #1500 " << endl;
    cout << "3: #2000 " << endl;
    cout << "4: #2500 " << endl;
    cout << "5: #3000 " << endl;
    cout << "6: #3500 " << endl;
    cout << "7: #4000 " << endl;
    cout << "8: #4500 " << endl;
    cout << "9: #5000 " << endl;

    cout << "what do you want to do" << endl;
    cout << "option 1 to purchase unit \n  option 2 to check amount of unit used " <<endl;
    int option1;
    int option2;
    cout << "what option are you entering " <<endl;
    cin>> option;
    

}
int calculate_Electricity(int unit){
    double unit;
    int price=0;
while(option == 1)
    cout<<"Enter amount to purchase: ";
    cin>>price;
    if(price == 1000)
    {
        unit=price * 1.55 ;
    }
    else if(price == 1200){
        unit=price * 2.10;
    }
    else if(price == 1500)
    {
        unit=price * 2.75;
    }
    else if((unit == 2000)){
        unit=price * 3.45;
    } 
    else if((unit == 2500)){
        unit=price * 4.10;
    }
    else if((unit == 3000)){
        unit=price * 4.75;
    }
    else if((unit == 3500)){
        unit=price * 5.32;
    }
    else if((unit == 4000)){
        unit=price * 5.97;
    }
    else if((unit == 4500)){
        unit=price * 6.63;
    }
    else if((unit == 5000)){
        unit=price * 7.40;
    }
    else{
        cout << "Enter the correct amount." <<endl;

    }
    cout<<"Electricity unit purchased = Rs.***"<< amount << "****";

}

void bill()
{
int unit; 
 
while(option == 2)
   cout<<"Enter the amount of unit used: " << endl;
    cin>>unit;
if(unit <= 10.51){
    cout<<"Bill amount is: ";
    cout<<unit * 0.22;
}
else if(unit <= 15.55){
    cout<<"Bill amount is: ";
    cout<<unit * 0.27;
}
else if(unit <= 20.44){
    cout<<"Bill amount is: ";
    cout<< unit * 0.32;
}
else if(unit <= 28.10){
    cout<<"Bill amount is: ";
    cout<< unit * 0.37;
}
else if(unit 37.32){
    cout<<"Bill amount is: ";
    cout<<unit * 0.42;
}
else if(unit <= 45.22){
    cout<<"Bill amount is: ";
    cout<<unit * 0.47; 
}
else if(unit <= 50.35){
    cout<<"Bill amount is: ";
    cout<< unit * 0.52;
}
else if(unit 57.61){
    cout<<"Bill amount is: ";
    cout<<unit * 0.57;
}
else if(unit<=62.17){
    cout<<"Bill amount is: ";
    cout<< unit * 0.62;
}
else if(unit <= 67.00){
    cout<<"Bill amount is: ";
    cout<< unit * 0.67;
}
else{
    cout<<"Bill amount is: ";
    cout<<"No value entered for uint :::"; 
}
cout << "All charges combined together collectively :" << 
}

int main{
    unit();
    calculate_Electricity(unit);
    getch();
    return 0;

    bill();
}
 