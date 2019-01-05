#include <iostream>

using namespace std;

int main(){
    
    int a = 0; //i have a variable named  a, i assign it equal 0
    int b = 3; //the second variable is b, i assign it equal 3
    
    if(a > b){
    //if a > b i will print to the console "a bigger than b"
        cout<<"a bigger than b"<<endl;
    } 
    else if(a < b){
        //if a < b i will print to the console "a smaller than b"
        cout<<"a smaller than b"<<endl;
    }
    else{
        //in the other case, i will print to the console "a equal b"
        cout<<"a equal b";
    }
    return 0;

}
