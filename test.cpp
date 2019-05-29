#include <iostream>

using namespace std;

int position    = 1;
int opt         = 1;

bool posver(){
    return position == opt;
};

int main(){
    if(posver()){
        cout << "Verdadeiro" << endl;
    }else {
        cout << "Falso" << endl;
    };
    
    return 0;
};
