#include <iostream>
using namespace std;

int random1()//生成[0，100]随机整数
{

}

int random2()//生成[0，10000]随机整数
{

}

float random3()//生成[0，10000]随机小数
{

}

void test_a(int num)//第一等级
{
    //调用random1()生成[0，100]随机整数
    /*
    #include <cstdlib>
    #include <ctime>
    */
    int _num = num;//用户输入要做的题目数
    srand((int)time(0));  // 产生随机种子
    char str1[4] = { '+','-','=','?'};//加减等于问号 字符串数组
    for (int j = 0; j < _num; j++)
    {
        int num_random = rand() % 10;//随机出每个算式的数字有多少个
        for (int i = 0; i <num_random ; i++)
        {
            int str1_random = rand() % 2;//随机生成0或1，为0生成加号，为1生成减号
            cout << random1() << " ";
            if (str1_random == 0 && i != num_random - 1)
            {
                cout << str1[0]<<" ";//输出+号
            }
            if (str1_random == 1 && i != num_random - 1)
            {
                cout << str1[1] << " ";//输出-号
            }
            if (i == num_random - 1)
            {
                cout << str1[2] <<" "<< str1[3] << endl;//输出=和?号
            }
        }
    }
}

void test_b(int num)//第二等级
{
    
    //调用random2()生成[0，10000]随机整数
}

void test_c(int num)//第三等级
{
    
    //调用random3()生成[0，10000]随机小数 float
}

int main()
{
    int grade;
    cout<<"请输入你的年级"<<endl;//输入一到六
    cin>>grade;
    int num=0;
    cout<<"请输入你想要的题数"<<endl;
    cin>>num;
    
    switch(grade)
    {
        case 1 :
        case 2 :  test_a(num); break;
        case 3 :
        case 4 :  test_b(num); break;
        case 5 :
        case 6 :  test_c(num); break;
    }

    
}