#include <iostream>



// 1--------------------------------------------------------------------------------------------

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

    std::cout << "Result is:" << std::endl;
    for (int i = 0; i<n; i++)
        std::cout << mas[i] << " ";


    return 0;
}


//2---------------------------------------------------------------------------------------
/*
int main()
{
    const int N_max = 1000; 
    int mas[N_max]; 
    int n; 
    std::cout << "Enter the number of array elements: " << std::endl;
    std::cin >> n; 
    std::cout << "Start typing each element of the array" << std::endl;
    for (int i = 0; i<n; i++) 
        std::cin >> mas[i];

    for (int i=0;i<n-1; i++)
        for (int j=i+1;j<n; j++)
        {
            int firstI = mas[i];
            int firstJ = mas[j];

            while (firstI > 9)
            {
                firstI /= 10;
            }

            while (firstJ > 9)
            {
                firstJ /= 10;
            }


            int sumOfDigitsI = 0;
            int digitI = mas[i];
            int digitJ = mas[j];
            while (digitI>0)
            {
                sumOfDigitsI += digitI%10;
                digitI /= 10;
            }

            int sumOfDigitsJ = 0;
            while (digitJ>0)
            {
                sumOfDigitsJ += digitJ%10;
                digitJ /= 10;
            }


            if (firstI > firstJ)
                {
                    int tmp = mas[i];
                    mas[i] =  mas[j];
                    mas[j] = tmp;

                }

            else if (firstI == firstJ && sumOfDigitsI>sumOfDigitsJ)
            {
                int tmp = mas[i];
                    mas[i] =  mas[j];
                    mas[j] = tmp;
            }

            else if (firstI == firstJ && sumOfDigitsI==sumOfDigitsJ && mas[i]>mas[j])
            {
                int tmp = mas[i];
                    mas[i] =  mas[j];
                    mas[j] = tmp;
            }
        }

    std::cout << "Result is:" << std::endl;        
    for (int i = 0; i<n; i++) 
        std::cout << mas[i] << " ";
        
        return 0;
}


//3--------------------------------------------------------------------------------


int main() 
{
    const int N_Max = 100; 
    const int M_Max = 100;
    int matrix[N_Max][M_Max];

    int n = 0;
    int m = 0;
    std::cout << "Enter number of rows (n) and columns (m): ";
    std::cin >> n >> m;

    std::cout << "Enter matrix elements:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int min = INT_MAX;
    int indexmin = -1;

    for (int i = 0; i < n; i++) 
    {
        int Sum = 0;

        for (int j = 0; j < m; j++) 
        {
            Sum += matrix[i][j];
        }

        std::cout << "Sum of elements " << i << ": " << Sum << std::endl;

        
        if (std::abs(Sum) < std::abs(min))
        {
            min = Sum;
            indexmin = i;
        }
    }


    if (indexmin != -1) 
    {
        for (int j = 0; j < m; j++) 
        {
            matrix[indexmin][j] = 0;
        }
    }

    std::cout << "Updated Matrix:" << std::endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }    

    return 0;
}


//4--------------------------------------------------------------------------------

int main()
{
    const int N_Max = 20000;
    int mas[N_Max];
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++)
        std::cin >> mas[i];

    for (int i = n - 1; i >= 0; i--) 
    {
        int Num = mas[i];
        bool hasSeven = false;
        bool hasSix = false;

        
        while (Num > 0) 
        {
            int digit = Num % 10;

            if (digit == 7)
                hasSeven = true;

            if (digit == 6)
                hasSix = true;

            Num /= 10;
        }

        
        if (hasSeven && !hasSix) 
        {
            for (int j = i; j < n - 1; j++) 
            {
                mas[j] = mas[j + 1];
            }
            n--;
        }
    }   

    for (int i = 0; i < n; i++) 
    {
        int Num = mas[i];
        bool isPrime = true;

        
        if (Num < 2) 
        {
            isPrime = false; 
        } 
        else 
        {
            for (int j = 2; j * j <= Num; j++) 
            {
                if (Num % j == 0) 
                {
                    isPrime = false; 
                    break;
                }
            }
        }

        
        if (isPrime) 
        {
            for (int j = n; j > i; j--)
            {
                mas[j] = mas[j - 1]; 
            }
            i++; 
            n++; 
        }
    }

    
    std::cout << "Modified array: ";
    for (int i = 0; i < n; i++) 
    {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/