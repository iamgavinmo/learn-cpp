//----- 2022.10 T37 --begin

// #include <iostream>
// using namespace std;
// class Sample
// {
// private:
//     int x, y;

// public:
//     Sample(int a, int b);
//     void display()
//     {
//         cout << "x=" << x << "y=" << y << endl;
//     }
// };

// Sample::Sample(int a, int b)
// {
//     x = a;
//     y = b;
// }

// int main()
// {
//     Sample s(2, 3);
//     Sample *p = &s;
//     p->display();
//     return 0;
// }

//----- 2022.10 T37 --end

//----- 2022.10 T38 --begin

// #include <iostream>
// using namespace std;
// class Data
// {
// private:
//     int year, month, day;

// public:
//     Data(int y, int m, int d);
//     friend void Print(Data &);
// };

// void Print(Data &d)
// {
//     cout << d.year << "/" << d.month << "/" << d.day << endl;
// }

// Data::Data(int y, int m, int d)
// {
//     year = y;
//     month = m;
//     day = d;
// }

// int main()
// {
//     Data d1(2023, 4, 1), d2(2023, 10, 1);
//     Print(d1);
//     Print(d2);
//     return 0;
// }

//----- 2022.10 T38 --end

//----- 2022.10 T39 --begin

// #include <iostream>
// using namespace std;
// class Position
// {
// public:
//     int x, y;

// public:
//     Position(int px, int py)
//     {
//         x = px;
//         y = py;
//     };
//     Position operator+(const Position &p)
//     {

//         return Position(x + p.x, y + p.y);
//     };
// };
// int main()
// {
//     Position s1(2,  0);
//     cout << s1.x << "/" << s1.y << endl;
//     return 0;
// }

//----- 2022.10 T39 --end

// Point L1, L2(3, 4);
// Line(L1, L2);

// class Point
// {
// private:
//     double x, y;
//     friend class Line;

// public:
//     Point(double i = 0, double j = 0)
//     {
//         x = i;
//         y = j;
//     };
//     Point(Point &p)
//     {
//         x = p.x;
//         y = p.y;
//     };
// };

// class Line
// {
// private:
//     Point p1, p2;

// public:
//     Line(Point &xp1, Point &xp2);
//     p1(xp1){};
//     p2(xp2){};
//     double GetLength()
//     {
//         double dx = p2.x - p1.x;
//         double dx = p2.y - p1.y;
//         return sqrt(dx * dx + dy * dy);
//     }
// };

//----- v2 - T6-类的使用 ------
// #include <iostream>
// #include <string>

// using namespace std;

// class Pet
// {
// protected:
//     string type;
//     int no;

// public:
//     Pet(string _type, int _no)
//     {
//         type = _type;
//         no = _no;
//     };
// };

// class Dog : public Pet
// {
// private:
//     string name;
//     int size;
//     string tp;

// public:
//     Dog(string _type, int _no, string _name, int _size) : Pet(_type, _no)
//     {
//         name = _name;
//         size = _size;
//         if (
//             _no == 1)
//         {
//             tp = "big";
//         }
//         if (_no == 2)
//         {
//             tp = "medium";
//         }
//         if (_no == 3)
//         {
//             tp = "small";
//         }
//     };
//     void printf()
//     {
//         cout << "Dog's"
//              << " "
//              << "ID=" << no << endl;
//         cout << name << " "
//              << "is"
//              << " " << tp << endl;
//     };
// };

// class Cat : public Pet
// {
// private:
//     string name;
//     string food;

// public:
//     Cat(string _type, int _no, string _name, string _food) : Pet(_type, _no)
//     {
//         name = _name;
//         food = _food;
//     };
//     void printf()
//     {
//         cout << "Cat's"
//              << " "
//              << "ID=" << no << endl;
//         cout << name << " "
//              << "like"
//              << " " << food << endl;
//     };
// };

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string type;
//         int no;
//         string name;
//         cin >> type;

//         if (type == "C")
//         {
//             string food;
//             cin >> type >> no >> name >> food;
//             Cat cc(type, no, name, food);
//             cc.printf();
//         };
//         if (type == "D")
//         {
//             int size;
//             cin >> type >> no >> name >> size;
//             Dog dd(type, no, name, size);
//             dd.printf();
//         };
//     }
// };

#include <iostream>
using namespace std;
class Ctype
{
private:
    int r;
    int w;

public:
    Ctype()
    {
        r = 0;
        w = 0;
    };
    Ctype(int _r, int _w)
    {
        r = _r;
        w = _w;
    };
    int getR()
    {
        return r;
    };
    int getW()
    {
        return w;
    };
};

class CCar
{
private:
    int price;
    Ctype lun;

public:
    CCar()
    {
        price = 0;
        lun = Ctype();
    };
    CCar(int _price, Ctype _lun)
    {
        price = _price;
        lun = _lun;
    };

    int getPrice()
    {
        return price;
    };

    Ctype getLun()
    {
        return lun;
    };
};

int main()
{
    int price, r, w;
    cin >> price >> r >> w;

    Ctype it(r, w);
    CCar ic(price, it);
    cout << ic.getPrice() << " :" << ic.getLun().getW() << " :" <<  ic.getLun().getR() << endl;

    CCar n;
    cout << " :" << n.getLun().getR() << n.getLun().getW() << " :" << n.getPrice() << endl;

    return 0;
};
