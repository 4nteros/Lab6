#include <iostream>

int main()
{
    const int N_Max = 10000;
    int mas[N_Max];

    int n;
    std::cout << "Enter the number of array elements: " << std::endl;
    std::cin >> n;
    std::cout << "Start typing each element of the array" << std::endl;
    for (int i=0; i<n; i++)
        std::cin >> mas[i];


    bool FirstDigitExists = false;
    for (int i = 0; i<n; i++)
    {
        int firstDigit = mas[i];
        while (firstDigit > 9)
            firstDigit = firstDigit / 10;
        if (firstDigit == 1)
        {
            FirstDigitExists = true;
            break;
        }
    }


    if(FirstDigitExists)
    {
        for (int i=0;i<n-1; i++)
            for (int j=i+1;j<n; j++)
                if (mas[i] > mas[j])
                {
                    int tmp = mas[i];
                    mas[i] =  mas[j];
                    mas[j] = tmp;

                }

    }

    std::cout << "Result is: " << std::endl;
    for (int i = 0; i<n; i++)
        std::cout << mas[i] << " ";


    return 0;
}