#include <iostream>

using namespace std;

int main()
{
 int N;  // Число, с которым мы работаем
 int i=0; // Переменная-счетчик
     cout<<"Write N number";
     cin>>N;
            while(N>0)
     {
       N /=10;    // отсекаем последнюю цифру
       i++;  // увеличиваем счетчик цифр
               }
               cout<<"This number has got"<<" "<<i<<" "<<"digits";
 
    system("PAUSE");
    
}
