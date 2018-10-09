///普通函数：
#include <iostream>
using namespace std;

class Point {
public:
	Point(int _x = 0, int _y = 0)
		:x(_x), y(_y) {}
	void print() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	int get_x()const { return x; }
	int get_y()const { return y; }
private:
	int x, y;
};
Point operator+(const Point &a,const Point &b) {
	int x1 = a.get_x() + b.get_x();
	int y1 = b.get_y() + b.get_y();
	Point tmp(x1, y1);
	return tmp;
}
int main() {
	int i1 = 10, i2 = 20;
	int i3 = i1 + i2; //加法运算
	string s1 = "abc", s2 = "123";
	string s3 = s1 + s2; //string类实现的 运算符重载

	Point p1(10, 20), p2(20, 30);
	Point p3 = p1 + p2; 
	p3.print();
	return 0;
}