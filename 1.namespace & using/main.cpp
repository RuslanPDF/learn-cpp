#include "iostream"

namespace Dog {
    int num = 10;
}

// namespace помогает инкапсулировать что бы не было конфликтов между именами так как на стадии препроцессора все include перетягивается в этот файл вне зависимости от того используется это или нет

void main(){
    using namespace Dog;
    // using можно сказать переносить содержимое namespace в облость хранение наших переменных в этом scope
    std::cout << num << std::endl;
}