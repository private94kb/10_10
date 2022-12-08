#include <iostream>
using namespace std; 
 
int main() 
{ 
   int n, m, b=0,i=0; 
    cin >> n; 
    while (n > 0) 
    { 
        m = n % 10;//розкладаємо число на цифри
        b = b * 10 + m ;
        n = n / 10; 
        if((b%10)>5){//рахуємо к-сть цифр більші за 5 
          i++;       
        }
    } 
 
    while (b > 0) 
    { 
        cout <<b%10<<","; 
        b = b / 10; 
    } 
    cout<<endl<<i;
    
}