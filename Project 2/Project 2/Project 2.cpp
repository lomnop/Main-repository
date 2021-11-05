

#include <iostream>
using namespace std;

int main()
{
    cout << "Input name\n";
    string name;
    cin >> name;
    cout << "Input age\n";
    int age;
    cin >> age;
    cout << "Input gender m/f\n";
    char gender;
    cin >> gender;
    cout << "Input adress\n";
    string adress;
    cin >> adress;
    cout << "Married? (True=1/False=0)\n";
    bool married;
    cin >> married;
    cout << "Input height\n";
    int height;
    cin >> height;


    cout << endl <<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl<<"Adress: "<<adress<<endl<<"Married?: "<<married<<endl<<"Height: "<<height<<"cm"<<endl;

    
}

