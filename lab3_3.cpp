#include<iostream>

int main(){
    float x = 5, y = 0;
    
    while(x<19){
        x = x+1;
        y=y+1/x;
    }
    std::cout << y;
    return 0;
}
