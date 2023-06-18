#include <iostream>
using namespace std;

int main(){

    int numb1, numb2;

    cout<<"Enter First Number: "<< endl;
    cin>>numb1;

    char operation;
    cout<<"Enter the operation you want to perform: "<< endl;
    cin>>operation;

    cout<<"Enter Second Number: "<< endl;
    cin>>numb2;

    switch (operation)
    {
    case '+':
        cout<< numb1+numb2 << endl;
        break;

        case '-':
        cout<< numb1-numb2 << endl;
        break;

        case '*':
        cout<< numb1*numb2 << endl;
        break;

        case '/':
        cout<< numb1/numb2 << endl;
        break;
    
    default:
        cout<<"Please Choose Another Operation"<< endl;
        break;
    }
}