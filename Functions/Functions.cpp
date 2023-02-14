//Ведение в функции

#include <iostream>
// Создаем функцию
// Функция, не возвращающая никаких значений и выводящая сообщения

void sayHello() {
    std::cout << "Hello World!\n";
    std::cout<<"Bye World!\n";
}

//Функция, не возвращающая никаких значений, но принемающая два числа и выводящая их сумму
void printSum(int num1, int num2) {
    std::cout << num1 << "+" << num2 << "=" << num1 + num2 << '\n';
}

int sum(int num1, int num2) {
    //int tmp = num1 + num2;
    //return tmp; //вернуть значение переменной tmp
    return num1 + num2;//вернуть сумму num1 + num2
}
//Вывод массива в консоль
void printArr(int array[], const int lenghts) {
    std::cout << '[';
    for (int i = 0; i < lenghts; i++)
        std::cout << array[i] << ", ";
    std::cout << "\b\b]\n";
}
//Поиск суммы элементов массива
int sumArr(int array[], const int lenghts) {
    int sum = 0;
    for (int i = 0; i < lenghts; i++) {
        sum += array[i];
    }
    return sum;
}

/*int x2(int num) {
    num *= 2;
    return num;
}*/

void x2(int num) {  //num - ПАРАметр ф-ции
    num *= 2;
    }

void arr_x2(int arr[]) {
    arr[3] *= 2;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;
    
    //Ф-ции void
    //sayHello(); //ВЫЗОВ ФУНЦКИИ С ТИПОМ ВОЙД И БЕЗ ПАРАМЕТРОВ
    //std::cin >> n >> m;
    //printSum(n, m);//вызов ф-ции с типом войд с двумя параметрами
    //printSum(10, 7);

    //Ф-ция, возвращ сумму двух переданных в нее чисел
    //std::cin >> n >> m;
    //int result = sum(n, m);//запись в переменную result результат работы ф-ции sum
    //std::cout << result << '\n';
    /*const int SIZE = 5;
    int arr[SIZE]{ 7, 2, 1, 10, 8 };
    std::cout << "Массив:\n";
    printArr(arr, SIZE);
    //Сумма всех элементов массива

    std::cout << sumArr(arr, SIZE) << std::endl;*/

    n = 10;
   // std::cout << x2(n) << '\n';
    x2(n);//n - Аргумент ф-ции
    std::cout << n << '\n';// 10

    int mass[5]{ 10, 20, 30, 40, 50 };
    x2(mass[3]);
        std::cout << mass[3] << '\n';
        arr_x2(mass);
        std::cout << mass[3] << '\n';

    return 0;    
}

