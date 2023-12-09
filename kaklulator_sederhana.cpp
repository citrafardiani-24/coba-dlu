#include <iostream>

using namespace std;


int main() {
    float num1, num2, hsl;
    char operasi;
    
    cin>>num1;
    cin>>num2;
    
    switch(operasi){
        case '+' :
            hsl = num1 + num2;
            break;
        case '-' :
            hsl = num1 - num2;
            break;
        case '*' :
            hsl = num1 * num2;
            break;
        case '/' :
            hsl = num1 / num2;
            break;
    return 0;
}
}
