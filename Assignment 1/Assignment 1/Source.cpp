#include <iostream>
using namespace std;


//Print hello world n times for
/*
int main()
{
    cout << "Enter amount of times hello world shall be typed" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "hello world" << endl;
    }

}
*/


//Print hello world n times while

/*
int main()
{
    cout << "Enter amount of times hello world shall be typed" << endl;
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << "hello world" << endl;
        n--;
    }

}
*/



//Print hello world n times do while

/*
int main()
{
    cout << "Enter amount of times hello world shall be typed" << endl;
    int n;
    cin >> n;
    int i = 0;
    do
    {
        cout << "hello world" << endl;
        n--;
    } while (i < n);

}
*/


// Print values with right data type using cout and cin
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

//Print values with right data type using printf_s and scanf_s

/*
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
*/

// Print n primenumbers

/*
int main()
{
    int nOfPrimes;
    int currentPrime=2;

    cout << "Enter the amount of primes you wish to see"<<endl;
    cin >> nOfPrimes;
    for (int i=0; i < nOfPrimes; i++)
    {
        for (;;)
        {
            for(int a = 2; currentPrime >= a; a++)
                if (currentPrime%a==0 && currentPrime==a)
                {
                    cout << "Prime nr: "<<i+1<<" = " << currentPrime << endl;
                    currentPrime++;
                    goto nextprime;
                }
                else if (currentPrime % a == 0)
                {
                    break;
                }


            currentPrime++;


        }
    nextprime:;

    }
}
*/


//Bounce

/*
int main()
{
    int bounce;
    int bounceback=0;
    cout << "Enter a value to bounce\n";
    cin >> bounce;
    if (bounce < 0)
    {
        cout << "Error cannot bounce negative numbers";
    }
    else
    {
        for (int i = 0; i < bounce; bounce--)
        {
            cout << bounce;
            bounceback++;
        }
        for (bounceback; bounceback >= bounce; bounce++)
        {
            cout << bounce;
        }
    }

}

*/


//half pyramid


/*
int main()
{
    char pyramid;
    int currentC = 0;
    printf_s("Input an uppercase letter or a single digit number to make a half pyramid\n");
    scanf_s(" %c", &pyramid);
    printf_s("\n");
    if (pyramid >= 65 && pyramid <= 90)
    {

        for (;;)
        {
            int x = 0;
            for (int i=0; i < pyramid-64; i++)
            {
                x++;
                for(int n=0+x;0<n;n--)
                printf_s("%c", i+65);

                printf_s("\n");
            }
            printf_s("\n");
                break;
        }

    }
    else if (pyramid >= 49 && pyramid <= 57)
    {
        for (;;)
        {
            int x = 0;
            for (int i = 0; i < pyramid - 48; i++)
            {
                x++;
                for (int n = 0 + x; 0 < n; n--)
                    printf_s("%c", i + 49);

                printf_s("\n");
            }
            printf_s("\n");
            break;
        }
    }



}
*/