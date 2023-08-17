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
double cosine(double x)
{
    double result = 0.0;
    for (int n = 0; n < 10; ++n) 
    {
        result += pow(-1, n) * pow(x, 2 * n) / fact(2 * n);
    }
    return result;
}
double exponent(double x)
{
    double result=0.0;
    for (int n=0;n<10;n++)
    {
        result+= pow(x,n) / fact(n);
    
    }
    return result;
}

int main(){
char choice;
char trig;
double angle;
double rad;
char ch;
int n,i,a,b,basen,pown,num;
cout<< "Type of operation(Algebraic- A/Trignometric-T/Factorial-F/Exponent-E)";
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
if(b==0)
{
    cout<<"Error!Division by zero";
}
break;
case '^':
cout<<"Base to the power is: " ;
cout << pow(basen,pown);
break;


default:
cout<<"Invalid operator";
}
}
else if(choice=='E' || choice == 'e')
{
    double num;
    cout<<"Enter the exponent:";
    cin>>num;
    cout<<exponent(num);
}
else if(choice == 'F' || choice == 'f')
{
    cout << "Enter the number of which you want factorial:";
    cin>> num;
    cout<<"The factorial of the given number is";
    cout<< fact(num);
}
else if(choice == 'T' || choice == 't'){
cout<< "select the trignometric function(sin-s/cos-c): ";
cin>> trig;
cout<< "Enter the angle in degrees: ";
cin >> angle;
rad=(3.14*angle)/180;}
double x;
  x=rad;
if (trig == 's'){
for(i=3;i<15;i+=2){
if (i%4==1){
rad=(pow(x,i)/fact(i))+rad;
}
else
{
    rad=rad-(pow(x,i)/fact(i));
}
}
cout<< rad;
}
else if(trig=='c')
{
    cout<<cosine(rad)<<endl;
}


return 0;
}
