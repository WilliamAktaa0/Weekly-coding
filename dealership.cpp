#include <iostream>
using namespace std;

    struct car{
        string brand;
        string model;
        int year;
        double price;
        double km;
    };

        int main(){
            car cars[6];
            double mostexpensive=0;
            double leastkm=cars[0].km;
            string carbrand;
            double total;
            for(int i=0;i<6;i++){                
                cout<<"Enter the brand \n";
                cin>>cars[i].brand;
                cout<<"Enter the model \n";
                cin>>cars[i].model;
                cout<<"Enter the year \n";
                cin>>cars[i].year;
                cout<<"Enter the price \n";
                cin>>cars[i].price;
                cout<<"Enter the km \n";
                cin>>cars[i].km;
            }
            for(int i=0;i<6;i++){
                cout<<cars[i].brand<<cars[i].model<<cars[i].year<<cars[i].price<<cars[i].km;
            }

            for(int i=0; i<6;i++){
                if(cars[i].price>mostexpensive){
                    cars[i].price==mostexpensive;
                }
                if(cars[i].km<leastkm){
                    cars[i].km==leastkm;
                }
                if(cars[i].year>2020){
                    cout<<"Post2020 Car:" << cars[i].year<<cars[i].brand<<cars[i].model;
                }
            }
            cout<<"The most expensive in stock is mostexpensive";
            cout<<"The least km in stock is leastkm"; 
            cin>>carbrand;
            for(int i=0;i<6;i++){
                if(cars[i].brand==carbrand){
                    cout<<cars[i].year<<cars[i].brand<<cars[i].model << "matches your search \n";
                }
            }
            for(int i=0; i<6; i++){
            total = cars[i].price;
            }
            int average = total/6;
            cout<<average<<"is the average price of the cars \n";
            for(int i=0; i<6; i++){
                if (cars[i].price > average){
                    cout<<cars[i].year<<cars[i].brand<<cars[i].model << "exceedes the average price \n";
                }
            }
            for(int i=0; i<6; i++){
                if(cars[i].km>15000){
                    cars[i].km*=0.8;
                }
                else if(cars[i].km>79999 and cars[i].km<14999){
                    cars[i].km*=0.9;
            }
                else{
                    break;
                }
        }
            
    return 0;
}