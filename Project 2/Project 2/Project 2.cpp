

#include <iostream>
using namespace std;
/*
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
*/


int main()
{
    char name[20];
    int age;
    char gender;
    char adress[20];
    int married;
    int height;

    
    printf_s("Input name\n");
    scanf_s("%s", name,_countof(name));
    printf_s("Input Age\n");
    scanf_s(" %d", &age);
    printf_s("Input Gender (M/F)\n");
    scanf_s(" %c", &gender);
    printf_s("Input Adress\n");
    scanf_s(" %s", adress,_countof(adress));
    printf_s("married? (True=1/False=0)\n");
    scanf_s(" %d", &married);
    printf_s("Input Height\n");
    scanf_s(" %d", &height);




    printf_s("\nName = %s\nAge = %d\nGender = %c\nAdress =%s\nMarried = %d\nHeight = %d\n", name,age,gender,adress,married,height);
}
