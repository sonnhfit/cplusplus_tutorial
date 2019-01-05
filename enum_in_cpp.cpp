#include<iostream>

using namespace std;

enum DaysOfWeek{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

enum Color{
    RED = 4,
    GREEN= 1,
    BLUE,
    WHITE
};

enum Animal{
    CAT,
    DOG,
    HORSE,
    MONKEY,
    CHICKEN
};

int main(){
    
    //print the default value of enum
    cout<<"default value of enum Animal"<<endl;
    cout<<"CAT = "<<CAT<<endl;
    cout<<"DOG = "<<DOG<<endl;
    cout<<"HORSE = "<<HORSE<<endl;
    cout<<"MONKEY = "<<MONKEY<<endl;
    cout<<"CHICKEN = "<<CHICKEN<<endl;

    //if you assign default values for enum. for example Color enum above 
    // BLUE value will start from previous element + 1
    // BLUE = GREEN + 1 = 1 + 1 = 2 
    cout<<"if you assign default value for enum"<<endl;
    cout<<"RED is "<<RED<<endl;
    cout<<"GREEN is "<<GREEN<<endl;
    cout<<"BLUE is "<<BLUE<<endl;
    cout<<"WHITE is "<<WHITE<<endl;

    //you can assign value to enum object  when you want to use unum
    
    DaysOfWeek CHU_NHAT = SUNDAY;
    cout<<"SUNDAY= "<<SUNDAY<<endl;
    cout<<"MONDAY= "<<MONDAY<<endl; 
    return 0;
}
