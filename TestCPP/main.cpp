//
//  main.cpp
//  TestCPP
//
//  Created by 周鑫 on 2018/2/1.
//  Copyright © 2018年 上海远匠网络科技有限公司. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

typedef void (*p_func)(int);

void show(int num, p_func pf) {
    pf(num);
}

void show2() {
    
}

class User {
    
public:
    string name;
    int sex;
    long code;
    int age;
    
    void toString() {
        cout << "name：" << name << ",sex：" << sex << ",code：" << code << ",age：" << age << endl;
    };
    
//    virtual string testVF();
    
};

class Animal {
public:
    string type;
    double weight;
    double height;
    
    void dump() {
        cout << "animal信息:" << "type=" << type << ",weight=" << weight << ",height=" << height << endl;
    };
};

class Virtual {
public:
    void kill();
    void sleep();
    void talk();
};

class Person: public User {
public:
    Person() {
        
    }
    
    Person(const string &name,const int &sex,const long &code,const int &age) {
        this->name = name;
        this->sex = sex;
        this->code = code;
        this->age = age;
    }
    
    void speak() {
        cout << "人说话" << endl;
    };
};

class zz: public Virtual {
public:
    double age;
    double tellName() {
        return age;
    };
    
    void talk() {
        cout << "虚函数说话" << endl;
    };
    
    void sleep() {
        cout << "虚函数睡觉" << endl;
    };
};

long factoria(long count) {
    long tempNum = 1;
    for (long i = 0; i < count; i++) {
        tempNum = tempNum * (i + 1);
    }
    return tempNum;
}

void pfunc(int num) {
    cout << "测试函数指针:" << num << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    User user;
//    user.name = "测试name";
//    user.sex = 1;
//    user.code = 100000;
//    user.age = 10;
//
//    user.toString();
//
//    Animal animal;
//    animal.height = 100.2;
//    animal.weight = 230.12;
//    animal.type = "东北虎";
//    animal.dump();
//
//    Person person;
//    person.name = "测试personName";
//    person.sex = 0;
//    person.code = 123123123;
//    person.age = 20;
//    person.toString();
//    person.speak();
    
    Person *person = new Person();
    person->name = "测试personName";
    person->sex = 0;
    person->code = 1212121;
    person->age = 30;
    person->toString();
    person->speak();
    delete person;
    
    Person *person2 = new Person("自行车",1,10000,12);
    person2->toString();
    delete person2;
    
    zz z;
    z.age = 100;
    double tempAge = z.tellName();
    cout << "测试tempAge值:" << tempAge << endl;
    z.talk();
    z.sleep();
    
    
    show(100, pfunc);
    
    //阶乘
//    long result = factoria(20);
//    cout << "测试阶乘:" << result << endl;
    
    //测试math
//    cout << "测试绝对值:" << abs(-10) << endl;
//    cout << "测试cos:" << cos(12) << endl;
//    cout << "测试sin:" << sin(10) << endl;
//    cout << "测试tan:" << tan(10) << endl;
    
    //测试随机数函数
//    srand((unsigned)time(NULL));
//
//    cout << "测试随机浮点数-----" << endl;
//    for (int i = 0; i < 10; i++) {
//        cout << rand()/double(RAND_MAX) * 100.0 << " ";
//    }
//    cout << endl;
//
//    cout << "测试随机整数(100以内)------" << endl;
//    for (int i = 0; i < 10; i++) {
//        cout << rand()%(100 - 1) << " ";
//    }
//    cout << endl;
    
    return 0;
}

