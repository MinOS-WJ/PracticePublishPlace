#include <iostream>
using namespace std;

/********* Begin *********/
// 在此处实现一个汽车类
class Car
{
private:
    bool door;   // 车门状态，true表示ON，false表示OFF
    bool light;  // 车灯状态，true表示ON，false表示OFF
    int speed;   // 速度

public:
    // 构造函数，初始化成员变量
    Car() : door(false), light(false), speed(0) {}

    // 打开车门
    void OpenDoor()
    {
        door = true;
    }

    // 关闭车门
    void CloseDoor()
    {
        door = false;
    }

    // 打开车灯
    void TurnOnLight()
    {
        light = true;
    }

    // 关闭车灯
    void TurnOffLight()
    {
        light = false;
    }

    // 加速
    void Accelerate()
    {
        speed += 10;
    }

    // 减速
    void Decelerate()
    {
        speed -= 10;
        if (speed < 0)  // 速度不能为负
            speed = 0;
    }

    // 获取车门状态
    bool GetDoorStatus() const
    {
        return door;
    }

    // 获取车灯状态
    bool GetLightStatus() const
    {
        return light;
    }

    // 获取速度
    int GetSpeed() const
    {
        return speed;
    }
};
/********* End *********/

int main()
{
    /********* Begin *********/
    // 在此处解析执行输出汽车的整体状态
    char cmds[25];  // 存储输入的命令
    cin >> cmds;

    Car car;  // 创建汽车对象

    // 遍历每个命令字符
    for (int i = 0; cmds[i] != '\0'; i++)
    {
        char cmd = cmds[i];
        switch (cmd)
        {
            case '1':  // 打开车门
                car.OpenDoor();
                break;
            case '2':  // 关闭车门
                car.CloseDoor();
                break;
            case '3':  // 打开车灯
                car.TurnOnLight();
                break;
            case '4':  // 关闭车灯
                car.TurnOffLight();
                break;
            case '5':  // 加速
                car.Accelerate();
                break;
            case '6':  // 减速
                car.Decelerate();
                break;
            default:  // 无效命令
                break;
        }
    }

    // 输出汽车的最终状态
    cout << "车门 " << (car.GetDoorStatus() ? "ON" : "OFF") << endl;
    cout << "车灯 " << (car.GetLightStatus() ? "ON" : "OFF") << endl;
    cout << "速度 " << car.GetSpeed() << endl;

    return 0;
    /********* End *********/
}

