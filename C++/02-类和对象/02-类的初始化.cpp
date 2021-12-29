#include <iostream>
#include <string.h>
using namespace std;
/**
 * 通过class关键字定义类
 * @return
*/
// 定义类student
class Student{
public:
    // 成员变量
    string name;
    int age;
    float score;

    void display() {
        // 输出结果
        cout << "姓名:"<< name << endl << "年龄:"<< age << endl << "分数:"<< score << endl;
    }
};

int main() {
    // 定义类Student对象
     Student stu;
    // 给结构体成员变量赋值
    stu.name = "curry";
    stu.age = 10;
    stu.score = 98.00;
    // 调用函数
    stu.display();
    return 0;
}