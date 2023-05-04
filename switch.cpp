#include<iostream>
using namespace std;

int main(){
char choice = 'r';
// switch(choice){
//     case 'r':
//     cout<<"I want to go for a run";
//     break;
//     case 's':
//     cout<<"I want to swim";
//     break;
// }

int a,b;
char op;
cout<<"enter number a and b";
cin>>a>>b;

cout<<"enter the operator you want to perform";
cin>>op;
switch(op){
    case '+':
    cout<<"sum of the number is "<<a+b<<endl;
    break;

    case '-':
    cout<<"difference of the number is "<<a-b<<endl;
    break;

    case '*':
    cout<<"product of the number is "<<a*b<<endl;
    break;

    case '/':
    cout<<"division of the number is "<<a/b<<endl;
    break;

    case '%':
    cout<<"remainder of the number is "<<a%b<<endl;
    break;

    default:
    cout<<"you entered wrong operator";
}
return 0;
}