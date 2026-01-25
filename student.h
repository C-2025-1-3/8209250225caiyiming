#include <cstring> 
class Student {
public:
    void set_value(int n, const char* nam, char s); 
    void display();

private:
    int num;        // 学号
    char name[20];  // 姓名
    char sex;       // 性别
};