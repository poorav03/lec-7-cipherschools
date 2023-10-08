// Lecture 7 - Do while and Infinite Loops

#include <iostream>
using namespace std;

int main(){

    //while loop
    int password;

    cout << "Enter the Password : " ;
    cin >> password;

    while(password<999999){
        cout << "The password does not meet the required conditions, Please enter the password again." <<  endl;
        cin >> password;
    }

    cout << "The user has now entered a correct passwrod." << endl;

    
    cout <<  endl;


    //do-while loop
    int pass;
    cout << "Enter the Password : " <<  endl;
    do{
        cin >> pass;

    }while(pass<999999);
    cout << "The user has now entered a correct passwrod." << endl;

    cout << endl;

    //infinite loop - while loop
    int count = 0;
    while(1){
        cout << "Chocolates";
        // count++;
        // if(count > 100) break; //if want to stop the infinite loop
    }

    cout << endl <<  endl;

    // infinite loop - for loop
    for(int i=0; ;i++){
        cout << i << " ";
        if(i>100) break;
    }

    return 0;
}