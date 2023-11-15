#include <iostream>
void funcWhile(){
    std::cout<<"While loop 50 to 100" << std::endl;
    int i = 5;
    while(i <= 10) {
        std::cout << i << std::endl;
        i++;
    }
}

void funcWhileMinus(){
    std::cout << "While loop 5 to 0" << std::endl;
    int i = 5;
    while(i >= 0){
        std::cout << i << std::endl;
        i--;
    }
}

int main() {
    funcWhile();
    funcWhileMinus();

    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    if(v1 > v2){
        std::cout << "Please make v1 less than v2" << std::endl;
        std::cin >> v1;
    }
    while(v1 <= v2){
        std::cout << v1 << std::endl;
        v1++;
    }
    return 0;
}
