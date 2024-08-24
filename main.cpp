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

#include <iostream>
using namespace std;
class Position
{
public:
    int x, y;

public:
    Position(int px, int py)
    {
        x = px;
        y = py;
    };
    Position operator+(const Position &p)
    {

        return Position(x + p.x, y + p.y);
    };
};
int main()
{
    Position s1(2,  0);
    cout << s1.x << "/" << s1.y << endl;
    return 0;
}

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
