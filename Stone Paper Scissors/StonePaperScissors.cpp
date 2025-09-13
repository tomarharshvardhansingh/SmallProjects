#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout<<"Stone - Paper - Scissors"<<endl;
    cout<<"Enter your Name: ";
    std::string name;
    cin>>name;
    start_point:
     std::this_thread::sleep_for(std::chrono::seconds(1));
    int i;
    cout<<"Choose your Option by typing the corresponding input \n Stone - 1 \n Paper - 2 \n Scissors - 3 \n Exit - 4 \n \n"<<endl;
    cin>>i;
    if(i != 1 && i != 2 && i!= 3 && i!=4 ){
        cout<<"Invalid input :( \n \nTry Again!\n"<<endl;
        goto start_point;
    }
    else{
        cout<<"Stone... Paper... Scissors... \n \n \n"<<endl;
    }
    // Seed the random number generator
    srand(time(0));

    // Generate a random number from 1 to 3
    int randomNumber = (rand() % 3) + 1;
    
     std::this_thread::sleep_for(std::chrono::seconds(1));

    if(randomNumber==1){
        cout<<"Harsh Chooses : Stone \n"<<endl;
        if(randomNumber == i ){
            cout<<"Looks like we think the same way :) /n /n"<<endl;
        }
            else if(i == 2){
                cout<<"You won "<<name<<"!!! :) \n"<<endl;
                goto start_point;
            }
            else if(i == 3){
                cout<<"YAYYYY I WON ;) \n"<<endl;
                goto start_point;
            }
            else if(i == 4){
                return 0;
            }
            else{
                cout<<"IDK got into an error :("<<endl;
                goto start_point;
            }
        }
    
    
    if(randomNumber==2){
        cout<<"Harsh Chooses : Paper \n"<<endl;
        if(randomNumber == i ){
            cout<<"Looks like we think the same way :) \n \n"<<endl;
        }
            else if(i == 3){
                cout<<"You won "<<name<<"!!! :) \n"<<endl;
                goto start_point;
            }
            else if(i == 1){
                cout<<"YAYYYY I WON ;) \n"<<endl;
                goto start_point;
            }
            else if(i == 4){
                return 0;
            }
            else{
                cout<<"IDK got into an error :("<<endl;
                goto start_point;
            }
        }
    
    
    if(randomNumber==3){
        cout<<"Harsh Chooses : Scissors \n"<<endl;
        if(randomNumber == i ){
            cout<<"Looks like we think the same way :) \n \n"<<endl;
        }
            else if(i == 1){
                cout<<"You won "<<name<<"!!! :) \n"<<endl;
                goto start_point;
            }
            else if(i == 2){
                cout<<"YAYYYY I WON ;) \n"<<endl;
                goto start_point;
            }
            else if(i == 4){
                return 0;
            }
            else{
                cout<<"IDK got into an error :("<<endl;
                goto start_point;
            }
        }
    goto start_point;

    return 0;
}