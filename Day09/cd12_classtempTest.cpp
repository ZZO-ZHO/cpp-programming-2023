#include <iostream>

template <typename T>
class CTest {
private:
    T data;
public:
    CTest(T adata) : data(adata) {}
    T getData() {
        return data;
    }
};

//template<>
//class CTest<char> {
//private:
//    char data;
//public:
//    CTest(char adata) : data(adata) {}
//    char getData() {
//        return data;
//    }
//};

int main() {
    CTest<int> obj(10);
    std::cout << obj.getData() << std::endl;

    CTest<char> obj1('a');
    std::cout << obj.getData() << std::endl;

    return 0;
}