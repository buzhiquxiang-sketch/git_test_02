// 父类
class Parent
{
public:
    int a;
    int b;
};

// 子类
class Child : public Parent
{
public:
    int c;
    int d;
};

int add(int a)
{
    return a;
}
add(1);
