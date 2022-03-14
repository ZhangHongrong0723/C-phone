#include <iostream>
using namespace std;
#include <string>
#include <vector>

//菜单界面
void showMenu() {
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;

	cout << "*****3、删除联系人*****" << endl;

	cout << "*****4、查找联系人*****" << endl;

	cout << "*****5、修改联系人*****" << endl;

	cout << "*****6、清空联系人*****" << endl;
	cout << "*****7、退出通讯录*****" << endl;
	cout << "***********************" << endl;


}

struct Person {
	string name;//添加联系人姓名
	string sex;//添加联系人性别
	int age;//添加联系人年龄
	string telephone;//添加联系人电话号码
	string address;//添加联系人住址

};
/*
	添加联系人相关信息
*/
void addPerSon(vector<Person>&vPerson) {
	int oldsize = vPerson.size();
	Person p;

	cout << "请输入联系人姓名" << endl;
	cin >> p.name;
	cout << "请输入联系人性别" << endl;
	cin >> p.sex;
	cout << "请输入联系人年龄" << endl;
	cin >> p.age;
	cout << "请输入联系人电话" << endl;
	cin >> p.telephone;
	cout << "请输入联系人地址" << endl;
	cin >> p.address;
	vPerson.push_back(p);
	if (vPerson.size() >1) {
		cout << "添加人数超过最大人数" << endl;
		vPerson.pop_back();
		if (oldsize == vPerson.size() - 1) {
			cout << "添加成功" << endl;
		}

		else {
			cout << "添加失败" << endl;

		}
	}
	else {
		cout << "添加成功" << endl;
	}
	


}
/*
	打印容器内部数据
*/
void PrintvPerson(vector<Person>&vP) {

	for (vector<Person>::iterator it = vP.begin(); it != vP.end(); it++) {
		cout << "姓名：  " << (*it).name << "性别：  " << (*it).sex << "年龄： "
			<< (*it).age << "电话： " << (*it).telephone << "地址： " << (*it).address << endl;
	}
}
int main() {
	//菜单的调用
	vector<Person>vPerson;//使用容器装联系人
	
	int select;
	while (1) {
	    showMenu();
	cin >> select;
	
	switch (select) {
		case 1:
			cout << "选择进行添加联系人操作" << endl;
			addPerSon(vPerson);
			break;
		case 2:
			cout << "显示联系人如下：" << endl;
			PrintvPerson(vPerson);
			break;
		case 3:
			cout << "删除联系人" <<endl;
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误" << endl;
			break;
		}
	
	}


	system("pause");
	return 0;
}