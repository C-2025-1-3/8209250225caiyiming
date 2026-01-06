#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int X = 60,int Y= 80)
	{
		x = X, y = Y;
	}
	void setpoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	point p;
	p.display();
	p.setpoint(10, 20);
	p.display();
	point P(20);
	P.display();
	P.setpoint(20, 10);
	P.display();
	return 0;
}