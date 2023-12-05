#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

// 7

// функция для преобразования символа к нижнему регистру 
char tolowerR(char ch)
{
    if (ch >= 'А' && ch <= 'Я')
    {
        return ch - 'А' + 'а';
    }

    return tolower(static_cast<unsigned char>(ch));
}

// функция для преобразования символа к верхнему регистру
char toupperR(char ch)
{
    if (ch >= 'а' && ch <= 'п') {
        return ch - 'а' + 'А';
    }
    else if (ch >= 'р' && ch <= 'я') {
        return ch - 'р' + 'Р';
    }
    return toupper(static_cast<unsigned char>(ch));
}

// функция для проверки, является ли символ буквой
bool isalphaR(char ch)
{
    return (ch >= 'А' && ch <= 'я') || (ch >= 'A' && ch <= 'z');
}

// функция для проверки, является ли символ строчной буквой
bool islowerR(char ch)
{
    return (ch >= 'а' && ch <= 'я') || (ch >= 'a' && ch <= 'z');
}

// функция для проверки, является ли символ заглавной буквой
bool isupperR(char ch)
{
    return (ch >= 'А' && ch <= 'Я') || (ch >= 'A' && ch <= 'Z');
}

// функция для проверки, является ли символ буквой или цифрой
bool isalnumR(char ch)
{
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 10

int Per(int length, int width)
{
    return 2 * (length + width);
}



// 12

int Divide(int num, int denom)
{
    if (denom == 0)
    {
        return -1;
    }
    else
    {
        return num / denom;
    }
}



// 14

bool IsChar(char x)
{
    x = tolower(x);  // перевод к нижнему регистру символа
    return (x == 'y' || x == 'д');
}



// 15

inline int CharToNumber(char charac)
{
    return charac - '0';
}



// 16

void DoubleNumber(int num)    // передаем параметр по значению
{
    num *= 2;  
}


// 17

void InputAddress(string &element)    // передача парметра по ссылке
{
    cout << "Введите " << element << ": ";
    cin >> element;
}


// 18

int FakeDodavannya(int a, int b = 0)    // дефолтный параметр
{
    return a + b;
}


// 19

bool Comp(int a, int b)     // перегружаем фун-ии
{
    return a == b;
}

bool Comp(double a, double b)
{
    return a == b;
}

bool Comp(const string &a, const string &b) {
    return a == b;
}



int main()      // MAIN
{
    setlocale(LC_ALL, "ru");

    // 5
    const int arraySize = 3;
    int generatedNums[arraySize];   // создание массива и его длина

    int i = 0;   // переменная цикла

    for (i; i < arraySize; ++i)   // цикл для генерации случайных чисел и добавления их в массив
    {
        generatedNums[i] = rand() % 10 + 1;
    }

    int j = 0;   // переменная цикла

    for (j; j < arraySize; ++j) {         // цикл для вывода чисел
        cout << generatedNums[j] << " ";
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    // 6 
    string inputString;

    cout << "Введите число: ";
    cin >> inputString;

    int intValue = atoi(inputString.c_str());
    long longValue = atol(inputString.c_str());
    float floatValue = atof(inputString.c_str());

    cout << intValue << ", " << longValue << ", " << floatValue << endl;


    // 7 ФУН-ИИ до main


    // 8

    char city[50] = "";    // Объявляем и инициализируем символьные массивы для сохранения элементов адреса
    char district[50] = "";
    char street[50] = "";
    char house[10] = "";
    char apartment[10] = "";

   
    cout << "Введите город: ";  // Ввод значений элементов адреса с консоли
    cin >> city;

    cout << "Введите район: ";
    cin >> district;

    cout << "Введите улицу: ";
    cin >> street;

    cout << "Введите дом: ";
    cin >> house;

    cout << "Введите квартиру: ";
    cin >> apartment;

    string fullAddress = city;              // Формируем значение полного адреса, конкатенируя строки
    fullAddress += ", " + string(district);
    fullAddress += ", " + string(street);
    fullAddress += ", дом. " + string(house);
    fullAddress += ", кв. " + string(apartment);

    int cityLength = strlen(city);              // Определяем длину элементов адреса и полного адреса
    int districtLength = strlen(district);
    int fullAddressLength = fullAddress.length();

    cout << fullAddressLength << endl;

    if (cityLength > districtLength)
    {                                           // Сравниваем длину города и района
        cout << "Город длиннее района.\n";
    }
    else if (cityLength < districtLength)
    {
        cout << "Район длиннее города.\n";
    }
    else
    {
        cout << "Город и район имеют одинаковую длину.\n";
    }


   // 9

    unsigned long Perimeter(int length, int width);


    // 10 до main


    // 11

    // 1) Невірна назва бібліотеки, правильно: <iostream>
    // 2) функція main потрібна бути int, щоб повертати значення 0 в кінці (гарний тон програмування)
    // 3) у функцію myFunc ми не можемо передати просто тип int, але можемо наприклад передати змінну
    // 4) функція myFunc хоче викликати return, але вона оголошена як void, тому не повинна нічого повертати
    

    // 12 до main


    // 14

    char userInput;

    cout << "Введите 'Y', 'y', 'д' или 'Д': ";
    cin >> userInput;

    if (IsChar(userInput))
    {
        cout << "Вы ввели 'Y', 'y', 'д' или 'Д'." << endl;
    }
    else
    {
        cout << "Вы ввели другой символ." << endl;
    }


    // 15 до main


    // 16

    int number = 5;

    cout << "Начальное число: " << number << endl;      

    DoubleNumber(number);

    cout << "После вызова: " << number << endl;    // функция не изменяет значение переменной, поскольку ей параметр передан
                                                            // не по адресу, а по значению, тоесть переменная number осталась той же
        
    // 17

    string city1, district1, street1, house1, apartment1;

    InputAddress(city1);
    InputAddress(district1);
    InputAddress(street1);
    InputAddress(house1);
    InputAddress(apartment1);

    string fullAddress1 = city1;
    fullAddress1 += ", " + district1;
    fullAddress1 += ", " + street1;
    fullAddress1 += ", дом. " + house1;
    fullAddress1 += ", кв. " + apartment1;

    int cityLength1 = city1.length();
    int districtLength1 = district1.length();
    int fullAddressLength1 = fullAddress1.length();

    cout << "Длина полного адреса: " << fullAddressLength1 << endl;

    if (cityLength1 > districtLength1)
    {
        cout << "Город длиннее района.\n";
    }
    else if (cityLength1 < districtLength1)
    {
        cout << "Район длиннее города.\n";
    }
    else
    {
        cout << "Город и район имеют одинаковую длину.\n";
    }


    // 18 до main


    // 19 до main

    return 0;
}
