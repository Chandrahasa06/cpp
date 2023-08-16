#include <iostream>

using namespace std;

int exp(int basen,int pown){
int i,result=1;
for(i=0;i<pown;i++){
result=result*basen;
}
return result;
}
double pow(double basen,int pown){
double result=1.0;
for(int i=0;i<pown;i++){
result=result*basen;
}
return result;
}


int fact(int num){
int f,c;
for(f=c=1;num>=c;num--){
f=f*num;
}
return f;
}

int main(){
char choice;
char trig;
int angle;
int rad;
char ch;
int n,i,a,b,basen,pown,num;
cout<< "Type of operation(Algebraic- A/Trignometric-T/Factorial-F)";
cin>> choice;
if (choice == 'A' || choice == 'a'){
cout << "enter the operator(+,-,*,/,^)";
cin>> ch;
if(ch=='+' || ch=='-' || ch=='*'|| ch=='/'){
cout << "Enter the value of a: ";
cin >> a;
cout << "Enter the value of b: ";
cin >> b;}
else if(ch=='^'){
cout << "Enter the base number: ";
cin >> basen;
cout << "Enter the power number: ";
cin >> pown;}
switch(ch){
case '+':
cout << "Sum of the numbers is: " << a+b <<endl;
break;
case '-':
cout << "Diffrence of the numbers is: " << a-b << endl;
break;
case '*':
cout << "Product of the numbers is: " << a*b << endl;
break;
case '/':
cout << "Division of the numbers is: " << a/b <<endl;
break;
case '^':
cout<<"Base to the power is: " ;
cout << exp(basen,pown);}

}
else if(choice == 'F' || choice == 'f'){
cout << "Enter the number of which you want factorial:";
cin>> num;
cout<<"The factorial of the given number is";
cout<< fact(num);}
else if(choice == 'T' || choice == 't'){
cout<< "select the trignometric function(sin/cos/tan): ";
cin>> trig;
cout<< "Enter the angle in degrees: ";
cin >> angle;
rad=(3*angle)/180;}
if (trig == 's'){
for(i=1;i<50;i+=2){
if (i%4==1){
rad=(exp(rad,i)/fact(i))+rad;
}
else{
rad=rad-(exp(rad,i)/fact(i));
}}
cout<< rad;}

return 0;
}
