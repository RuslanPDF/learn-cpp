#include "iostream"
#include "vector"

int main()
{
    // vector это container в котором можно хранить данные одного типа
    std::vector<int /* какой тип у нас будет */> MyFirstVector = {95, 96, 97, 98, 99, 100};

    // варианты init vector
    std::vector<int> v1; // пустой vector
    std::vector<int> v2(v1); // v2 копия - vector v1
    std::vector<int> v3 = v1; // v3 копия - vector v1
    std::vector<int> v4(5); // vector v4 - состоит из 5 чисел и каждое число равна 0
    std::vector<int> v5(5 /*сколько элементов*/, 2 /*начальное значение место 0*/);
    std::vector<int> v6{1, 2, 3, 4, 5, 6}; // vector v6 состоит из 1,2,3,4,5,6
    std::vector<int> v7 = {1, 2, 3, 4, 5, 6}; // vector v7 состоит из 1,2,3,4,5,6

    //обращение к элементам vector
    MyFirstVector[0]; // по index (как и в массивах index начинается с 0)
    MyFirstVector.at(2); // по index но с помощью безопасного метода at(index)
    MyFirstVector.front(); // отдает первый элемент
    MyFirstVector.back(); // отдает последний элемент

    // перебор vector
    for (size_t i = 0; i < MyFirstVector.size(); i++)
    {
        std::cout << MyFirstVector.at(i) << std::endl;
    }

    // обработка ошибки
    try
    {
        int num = MyFirstVector.at(10);
    }
    catch (std::out_of_range e)
    {
        std::cout << e.what() << std::endl;
    }
}

// vector - автоматом выделяет память если нужно
// массив - имеет жесткую фиксированную память