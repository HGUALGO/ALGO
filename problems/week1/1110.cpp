#include<iostream>

int main(){
    
    int input, origin_input;
    int front, behind;
    int temp, temp_behind;
    int count = 0;
    
    std::cin >> input;
    origin_input = input;

    if(input < 0 || input > 99){
        std::cout << "precondition : 0 <= input <= 99" << "\n";
        exit(0);
    }

    do{
        count++;
        behind = input % 10;
        front  = input / 10;
        temp = front + behind;
        temp_behind = temp % 10;
        input = (behind * 10) + temp_behind;
    }while(input != origin_input);
    
    std::cout << count;
}