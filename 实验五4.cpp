#include<iostream>
using namespace std;
class student {
private:
	int id;
	double score;
public:
	void input() {
		cin >> id >> score;
	}
	void max(student* stud, int size) {
		student* maxstudent = stud;
		for (int i = 0; i < size; i++)
		{
			if (stud[i].score > maxstudent->score)
				maxstudent = &stud[i];
		}
		cout << "最高成绩者学号:" << maxstudent->id << "成绩:" << maxstudent->score << endl;
	}
};
int main() {
	student stud[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入第" << i + 1 << "个学生的学号和成绩:" << endl;
		stud[i].input();
	}
	stud->max(stud,5);
	return 0;
}
