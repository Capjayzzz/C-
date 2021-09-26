#include <iostream>
using namespace std;
//设计一个圆类，求圆的周长
const double pi = 3.14;
//代表要设计一个类，后面紧跟着类的名称
class Circle {
    //访问权限
public:
//公共权限

    //属性
    int m_r;//banjing

    //行为
    double calculateZC(){
            return 2*pi*m_r;
    }
};


int main()
{
    //通过圆类创建具体的圆（对象）
    Circle c1;
    //给元的属性进行赋值
    c1.m_r =10;
    cout<<"元的周长为"<<c1.calculateZC()<<endl;

    system("pause");

    return 0;
}