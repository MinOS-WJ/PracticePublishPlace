//本关卡对应文件夹为step2。
/********* Begin *********/
class Rectangle
{
private:
    int height; // 长方形的高度
    int width;  // 长方形的宽度

public:
    // 设置长方形的高和宽
    void Set(int h, int w)
    {
        height = h;
        width = w;
    }

    // 获取长方形的面积
    int GetArea()
    {
        return height * width;
    }
};
/********* End *********/

Rectangle GetRect(int h, int w)
{
    /********* Begin *********/
    // 创建一个 Rectangle 对象
    Rectangle rect;
    // 调用 Set 函数设置高度和宽度
    rect.Set(h, w);
    // 返回这个对象
    return rect;
    /********* End *********/
}

int GetRectArea(Rectangle rect)
{
    /********* Begin *********/
    // 调用 GetArea 函数获取面积
    return rect.GetArea();
    /********* End *********/
}