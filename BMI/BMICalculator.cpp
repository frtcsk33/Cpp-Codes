#include <iostream>

using namespace std;


float calculateBmi(float w, float h){

    return (w/(h*h));

}

int main(){

    float weight, height;

    while(true)
    {
    
    cout<<"please enter your height in meters ";
    cin>>height;

    cout<<endl;
    cout<<"please enter your weight in kg ";

    cin>>weight;
    cout<<endl;
    
    float BMI = calculateBmi(weight, height);
    cout<<"your BMI is:  "<<BMI<<endl;

    if( 18.5 > BMI )
        cout<<"you're underweight"<<endl;

    else if( BMI >= 18.5 && BMI <= 24.99 )
        cout<<"you're Normal";

    else if( BMI > 25 && BMI <= 29.99)
        cout<<"you're overweight";

    else if( BMI > 30 )
        cout<<"you're obese";
     

    cout<<endl;
    }
    



    scanf(" ");
    return 0;
}