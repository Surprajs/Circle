#include <iostream>
#include "Circle.h"
#include <conio.h>      //for getch();

int main()
{

std::cout<<"How many circles do you want to create? ";
int number = 0;
//damage control xd
bool flag = false;
do
{
    if(std::cin.fail())
    {
    std::cin.clear();
    std::cin.ignore(999,'\n');
    }
    if(flag)
    {
    std::cout<<"Please, enter a correct value: ";
    }
    std::cin>>number;
    flag = true;
}
while (std::cin.fail() or number<=0);

Circle *circ = new Circle[number];
double rad;
std::string col;
char ch;
std::cout<<"Received number: "<<number<<std::endl;
for (int i=0; i<number; i=i+1)
{
    std::cout<<"If you want to enter the characteristics of the circle number "<<i+1<<" by yourself, press 'y'. If not, press anything else.\n";
    ch = getch();
    if (ch=='y')
    {
        std::cout<<"\nEnter the radius of the circle: ";
        std::cin>>rad;
        circ[i].setRadius(rad);
        std::cout<<"Enter the color of the circle: ";
        std::cin>>col;
        circ[i].setColor(col);
    }
    else
    {
        std::cout<<"The characteristics of the circle number "<<i+1<<" will be loaded automatically.\n\n";
    }
}
std::cout<<"\n\n";
for (int i=0; i<number; i=i+1)
{
    std::cout<<"Circle number "<<i+1<<": ";
    circ[i].describe();
}
delete[] circ;
}


