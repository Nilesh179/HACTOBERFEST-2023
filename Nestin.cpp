#include<iostream>
using namespace std;
class number{
public:
int a;
int square(){
return a*a;
}
int cube(){
return a*a*a;
}
void input(){
cout<<"Enter number\n";
cin>>a;
}
void display (){
int s,d;
s=square();
d=cube();
cout<<"Square is "<<s<<" and cube is "<<d<<"\n";
}};
int main(){
number n;
n.input();
n.display();
return 0;
}
