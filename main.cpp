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

//----- v2 - T4-无参构造以及引用类（非派生） ------
// #include <iostream>
// using namespace std;
// class Ctype
// {
// private:
//     int r;
//     int w;

// public:
//     Ctype()
//     {
//         r = 0;
//         w = 0;
//     };
//     Ctype(int _r, int _w)
//     {
//         r = _r;
//         w = _w;
//     };
//     int getR()
//     {
//         return r;
//     };
//     int getW()
//     {
//         return w;
//     };
// };

// class CCar
// {
// private:
//     int price;
//     Ctype lun;

// public:
//     CCar()
//     {
//         price = 0;
//         lun = Ctype();
//     };
//     CCar(int _price, Ctype _lun)
//     {
//         price = _price;
//         lun = _lun;
//     };

//     int getPrice()
//     {
//         return price;
//     };

//     Ctype getLun()
//     {
//         return lun;
//     };
// };

// int main()
// {
//     int price, r, w;
//     cin >> price >> r >> w;

//     Ctype it(r, w);
//     CCar ic(price, it);
//     cout << ic.getPrice() << " :" << ic.getLun().getW() << " :" <<  ic.getLun().getR() << endl;

//     CCar n;
//     cout << " :" << n.getLun().getR() << n.getLun().getW() << " :" << n.getPrice() << endl;

//     return 0;
// };

// v1 -3 数组与类的创建
// #include <iostream>
// using namespace std;

// class Student{

// };

// int main()
// {
//     int t;
//     cin >> t;
//     Student *p = new Student[t];

//     for (int i = 0; i < t; i++)
//     {
//         stu[i] = Student stu()
//     }

//     return 0;
// };

/* ------------------------------------*/
// #include <iostream>
// #include <string>
// using namespace std;
// class Student
// {
// private:
//   string name;
//   string number;
//   string xb;
//   string xy;
//   string tele;

// public:
//   void set(string _name, string _number, string _xb, string _xy, string _tele)
//   {
//     name = _name;
//     number = _number;
//     xb = _xb;
//     xy = _xy;
//     tele = _tele;
//   }
//   void print()
//   {
//     cout << name << endl;
//   }
// };

// void studentArray()
// {
//   int t;
//   string name, number, xb, xy, tele;
//   cin >> t;

//   Student *p = new Student[t];

//   for (int i = 0; i < t; i++)
//   {
//     cin >> name >> number >> xb >> xy >> tele;
//     p[i].set(name, number, xb, xy, tele);
//     p[i].print();
//   }
// };

// int main()
// {
//   studentArray();
//   return 0;
// }

// #include <cstdio>

// #include <iostream>
// // 计算需要
// #include <iomanip>
// #include <cmath>

// #include <string>
// using namespace std;

// void MM()
// {
//   cout << "switch 1022220" << endl;
// }

/* ------------------------------------*/

// #include <iostream>

//
// class Student
// {
//   string name, num, xueyuan;
//   string zhuanye, xinbie, address, phone;

// private:
// public:
//   void set()
//   {
//     cin >> name >> num >> xueyuan >> zhuanye >> xinbie >> address >> phone;
//   }
//   void print()
//   {
//     cout << name << " " << num << " " << xueyuan << " "
//          << zhuanye << " " << xinbie << " " << address << " " << phone << endl;
//   }
// };

// void students()
// {
//   int t;
//   cin >> t;

//   while (t--)
//   {
//     Student stu;
//     stu.set();
//     stu.print();
//   }

//   return;
// };
// int main()
// {
//   students();
//   return 0;
// }
// /* ------------------------------------*/

// #include <iostream>
// #include <string>
// using namespace std;
// class Teacher
// {
//   string name, sex, sub, zhiwei, zhiwu, xueli, addr, pho;

// public:
//   void set(string name1, string sex1, string sub1, string zhiwei1, string zhiwu1, string xueli1, string addr1, string pho1)
//   {
//     name = name1;
//     sex = sex1;
//     sub = sub1;
//     zhiwei = zhiwei1;
//     zhiwu = zhiwu1;
//     xueli = xueli1;
//     addr = addr1;
//     pho = pho1;
//   }
//   void print()
//   {
//     cout << name << " " << sex << " " << sub << " " << zhiwei << " "
//          << zhiwu << " " << xueli << " " << addr << " " << pho << endl;
//   }

// private:
// };

// void teacher()
// {
//   int t;
//   Teacher tt;
//   string ch1, ch2, ch3, ch4, ch5, ch6, ch7, phon;
//   cin >> t;

//   while (t--)
//   {
//     cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5 >> ch6 >> ch7 >> phon;
//     tt.set(ch1, ch2, ch3, ch4, ch5, ch6, ch7, phon);
//     tt.print();
//   }

//   return;
// };

// int main()
// {
//   ;
//   teacher();

//   return 0;
// }

/* ------------------------------------*/

// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// class Circle
// {
// private:
//   double x, y, r, m, n;

// public:
//   void set(double _x1, double _y1, double _r1, double _m1, double _n1)
//   {
//     x = _x1;
//     y = _y1;
//     r = _r1;
//     m = _m1;
//     n = _n1;
//   };

//   double getArea()
//   {
//     return 3.14 * r * r;
//   };

//   double getLength()
//   {
//     return 2 * 3.14 * r;
//   };

//   void contain()
//   {
//     if (sqrt((x - m) * (x - m) + (y - n) * (y - n)) <=r)
//       {
//         cout << "yes" << endl;
//       }
//     else
//     {
//       cout << "no" << endl;
//     }
//   }
// };

// void circleFunction()
// {
//   double x, y, r, m, n;
//   cin >> x >> y >> r >> m >> n;
//   Circle p;
//   p.set(x, y, r, m, n);
//   cout << fixed << setprecision(2)
//        << p.getArea() << " " << p.getLength()
//        << endl;
//   p.contain();
// }

/* ------------------------------------*/

// #include <iostream>
// #include <string>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// class Point
// {
// private:
//   double x, y;

// public:
//   Point(double v1, double v2)
//   {
//     x = v1;
//     y = v2;
//   };

//   double getX()
//   {
//     return x;
//   };

//   double getY()
//   {
//     return y;
//   };

//   double distance(Point p)
//   {
//     double x2 = p.getX();
//     double y2 = p.getY();
//     return sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
//   };
// };

// void pointFunction()
// {
//   int t;
//   double p1x, p1y, p2x, p2y;
//   cin >> t;
//   for (int i = 0; i < t; i++)
//   {
//     cin >> p1x >> p1y >> p2x >> p2y;
//     Point p1(p1x, p1y);
//     Point p2(p2x, p2y);
//     double v = p2.distance(p1);
//     cout << "Distance of Point("
//          << fixed << setprecision(2)
//          << p1.getX() << "," << p1.getY()
//          << ") to Point("
//          << p2.getX() << "," << p2.getY()
//          << ") is " << v << endl;
//   };
// };

/* ------------------------------------*/

// #include <iostream>
// // #include <string>
// #include <iomanip>
// // #include <cmath>

// using namespace std;

// class Date
// {
// private:
//   int year, month, day;

// public:
//   Date(int y, int m, int d);
//   int getYear()
//   {
//     return year;
//   };
//   int getMonth()
//   {
//     return month;
//   };
//   int getDay()
//   {
//     return day;
//   };
//   void addOneDay();
//   void print();
//   // void print()
//   // {
//   //   cout << year << "/" << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << endl;
//   // };
// };

// Date::Date(int y, int m, int d)
// {
//   year = y;
//   month = m;
//   day = d;
// };
// void Date::addOneDay()
// {
//   int days0[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//   int days1[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//   int *dp = days0;
//   if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//   {
//     dp = days1;
//   }

//   day++;
//   if (day > dp[month])
//   {
//     day = day - dp[month];
//     month++;
//   }
//   if (month > 12)
//   {
//     month = month - 12;
//     year++;
//   }
// }
// void Date::print()
// {
//   cout << year << "/" << setw(2) << setfill('0') << month
//        << "/" << setw(2) << setfill('0') << day << endl;
// };

// void dateFunction()
// {
//   int n;
//   int year, month, day;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> year >> month >> day;
//     Date currentDay(year, month, day);

//     cout << "Today is ";

//     currentDay.print();
//     currentDay.addOneDay();

//     cout << "Tomorrow is ";
//     currentDay.print();
//   }
// };

// int main()
// {
//   // MM();
//   // students();
//   // teacher();
//   // studentArray();
//   // circleFunction();
//   // pointFunction();

//   dateFunction();

//   return 0;
// }

/*--v2---------------------------------------------------------------*/
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//   int num1, num2;
//   string zimu, str1;
//   float float1;
//   cin >> num1 >> num2 >> zimu >> str1 >> float1;
//   cout << str1 << endl;
//   cout << num1 << " " << num2 << endl;
//   cout << zimu << endl;
//   cout << float1 << endl;
//   return 0;
// }

/*--v2---------------------------------------------------------------*/
// #include <iostream>
// #include <string>

// using namespace std;

// class Date
// {
// private:
//   int year, month, day;

// public:
//   Date()
//   {
//     year = 1970;
//     month = 1;
//     day = 1;
//   };
//   Date(int _year, int _month, int _day)
//   {
//     year = _year;
//     month = _month;
//     day = _day;
//   };

//   void set(int _year, int _month, int _day)
//   {
//     year = _year;
//     month = _month;
//     day = _day;
//   };

//   void modifyYear(int _year)
//   {
//     year = _year;
//   };

//   void print()
//   {
//     cout << year << "/" << month << "/" << day << endl;
//   }
// };

// int main()
// {
//   int year, month, day;
//   Date defaultDate;
//   defaultDate.print();

//   cin >> year >> month >> day;
//   Date custom(year, month, day);
//   custom.print();

//   cin >> year >> month >> day;
//   Date defaultAndSet;
//   defaultAndSet.set(year, month, day);
//   defaultAndSet.print();

//   Date defaultAndReset;
//   cin >> year;
//   defaultAndReset.modifyYear(year);
//   defaultAndReset.print();

//   return 0;
// };

/*--v2---------------------------------------------------------------*/
// #include <iostream>
// #include <string>

// using namespace std;

// class myDate
// {
// private:
//   int year, month, day;

// public:
//   myDate()
//   {
//     year = 1970;
//     month = 1;
//     day = 1;
//   };
//   myDate(int _year, int _month, int _day)
//   {
//     year = _year;
//     month = _month;
//     day = _day;
//   };

//   void set(int _year, int _month, int _day)
//   {
//     year = _year;
//     month = _month;
//     day = _day;
//   };

//   void modifyYear(int _year)
//   {
//     year = _year;
//   };

//   void print()
//   {
//     cout << year << "/" << month << "/" << day << endl;
//   }
// };

// class Student
// {
// private:
//   string name;
//   myDate birthday;

// public:
//   void set(string _name, myDate _birthday)
//   {
//     name = _name;
//     birthday = _birthday;
//   };

//   string getName()
//   {
//     return name;
//   };
//   void setName(string _name)
//   {
//     name = _name;
//   };

//   myDate getBirthday()
//   {
//     return birthday;
//   };
//   void setBirthday(myDate _birthday)
//   {
//     birthday = _birthday;
//   };

//   void print()
//   {
//     // 注意 有 print 要看看 分行 不然 << 重叠报错
//     cout << name << " ";
//     birthday.print();

//   };
// };
// int main()
// {
//   string name;
//   Student ss;
//   myDate sDate;
//   int year, month, day;

//   cin >> name >> year >> month >> day;
//   sDate.set(year, month, day);
//   ss.set(name, sDate);
//   ss.print();

//   cin >> year >> month >> day;
//   sDate.set(year, month, day);
//   ss.setBirthday(sDate);
//   ss.print();

//   cin >> name;
//   ss.setName(name);
//   ss.print();
//   return 0;
// }
/*--v2---------------------------------------------------------------*/

// #include <iostream>
// #include <string>

// using namespace std;

// class CType
// {
// private:
//   int radius, width;

// public:
//   CType()
//   {
//     radius = 0;
//     width = 0;
//   };
//   CType(int _radius, int _width)
//   {
//     radius = _radius;
//     width = _width;
//   };
//   int getRadius()
//   {
//     return radius;
//   };
//   int getWidth()
//   {
//     return width;
//   };
// };

// class CCar
// {
// private:
//   int price;
//   CType type;

// public:
//   CCar()
//   {
//     price = 0;
//     type = CType();
//   };
//   CCar(int _price, CType _type)
//   {
//     price = _price;
//     type = _type;
//   };
//   int getPrice()
//   {
//     return price;
//   };
//   CType getType()
//   {
//     return type;
//   };
// };

// int main()
// {
//   int price, radius, width;

//   cin >> price >> radius >> width;
//   CType type1(radius, width);

//   CCar car1(price, type1);

//   cout << "price=" << car1.getPrice() << " CTyre.Radius=" << car1.getType().getRadius() << " CTyre.Width=" << car1.getType().getWidth() << endl;

//   CCar car2;
//   cout << "price=" << car2.getPrice() << " CTyre.Radius=" << car2.getType().getRadius() << " CTyre.Width=" << car2.getType().getWidth() << endl;
//   return 0;
// }

/*--v2-------------------------------------------------------d--------*/

// #include <iostream>
// #include <string>
// using namespace std;

// class Pet
// {
// protected:
//   string type;
//   int no;

// public:
//   Pet(string _type, int _no)
//   {
//     type = _type;
//     no = _no;
//   }
// };

// class Cat : public Pet
// {
// private:
//   string name;
//   string food;

// public:
//   Cat(string _type, int _no, string _name, string _food) : Pet(_type, _no)
//   {
//     name = _name;
//     food = _food;
//   };

//   void print()
//   {
//     cout << type << "'s ID=" << no << endl;
//     cout << name << " likes " << food << endl;
//   };
// };

// class Dog : public Pet
// {
// private:
//   string name;
//   int size;
//   string sizeString;

// public:
//   Dog(string _type, int _no, string _name, int _size) : Pet(_type, _no)
//   {

//     name = _name;
//     if (_size == 1)
//     {
//       sizeString = "small";
//     }
//     if (_size == 2)
//     {
//       sizeString = "medium";
//     }
//     if (_size == 3)
//     {
//       sizeString = "big";
//     }
//   };

//   void print()
//   {
//     cout << type << "'s ID=" << no << endl;
//     cout << name << " is " << sizeString<< endl;
//   };
// };

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string petType;
//     cin >> petType;
//     if (petType == "C")
//     {
//       int no;
//       string type, name, food;
//       cin >> type >> no >> name >> food;
//       Cat cat1(type, no, name, food);
//       cat1.print();
//     };
//     if (petType == "D")
//     {
//       int size, no;
//       string type, name;
//       cin >> type >> no >> name >> size;
//       Dog dog1(type, no, name, size);
//       dog1.print();
//     };
//   }

//   return 0;
// };.
/*--v2---------------------------------------------------------------*/

// #include <iostream>
// #include <string>
// using namespace std;

// class Food
// {
// private:
//   int no;
//   float price;
//   string pai;

// public:
//   Food(int _no, float _price, string _pai)
//   {
//     no = _no;
//     price = _price;
//     pai = _pai;
//     cout << "Food " << no << " construct" << endl;
//   };

//   void print()
//   {
//     cout << pai << " unit price is " << price << endl;
//   };

//   ~Food()
//   {
//     cout << "Food " << no << " destruct" << endl;
//   };
// };

// int main()
// {
//   int t, no;
//   float price;
//   string pai;
//   cin >> t;

//   while (t--)
//   {
//     cin >> no >> price >> pai;
//     Food foo(no, price, pai);
//     foo.print();
//   }

//   return 0;
// };

// #include <iostream>
// using namespace std;

// const int maxNo = 999;
// class List
// {
// private:
//   int data[maxNo];
//   int len;

// public:
//   List()
//   {
//     len = 0;
//   };
//   List(int _d[], int _n)
//   {
//     for (int i = 0; i < _n; i++)
//     {
//       data[i] = _d[i];
//     }
//     len = _n;
//     print();
//   };

//   void sortNo()
//   {
//     for (int i = 0; i < len; i++)
//     {

//       for (int j = i; j > 0; j--)
//       {
//         if (data[j] < data[j - 1])

//         {
//           int temp = data[j - 1];
//           data[j - 1] = data[j];
//           data[j] = temp;
//         };
//       };

//       if (i == 1 || i == len - 1)
//       {
//         print();
//       }
//     };
//   };
//   void print()
//   {
//     for (int i = 0; i < len; i++)
//     {
//       if (i == len - 1)
//       {
//         cout << data[i] << endl;
//       }
//       else
//       {
//         cout << data[i] << " ";
//       }
//     }
//   };
// };

// main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int num;
//     cin >> num;

//     int d[num];
//     for (int i = 0; i < num; i++)
//     {
//       cin >> d[i];
//     }
//     List seq(d, num);
//     seq.sortNo();
//   };
//   // seq.sortNo();
//   // print(d, num);
//   // renderNum(d, num);

//   return 0;
// };

/* 算法 */
#include <iostream>
using namespace std;

int maxsize = 100;
typedef struct cycqueue
{
    int data[100];
    int front, rear;
} CycQue;

CycQue CQ;

int quitCycQue(CycQue *cq)
{
    if (cq->front == cq->rear)
    {
        cout << " 队列为空 " << endl;
        return 0;
    }
    else
    {
        int temp = cq->data[cq->front];
        cq->front = (cq->front + 1) % maxsize;
        return temp;
    }
}

int entryCycQue(CycQue *cq, int value)
{
    if (cq->rear + 1 == cq->front)
    {
        cout << " 队列已满 " << endl;
        return 0;
    }
    else
    {
        cq->data[cq->rear] = value;
        cq->rear = (cq->rear + 1) % maxsize;
    }
}

int main()
{
    entryCycQue(&CQ, 1);
    entryCycQue(&CQ, 2);
    int d = quitCycQue(&CQ);
    int S = quitCycQue(&CQ);
    cout << d << S << endl;
}