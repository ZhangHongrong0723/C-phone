#include <iostream>
using namespace std;
#include <string>
#include <vector>

//�˵�����
void showMenu() {
	cout << "***********************" << endl;
	cout << "*****1�������ϵ��*****" << endl;
	cout << "*****2����ʾ��ϵ��*****" << endl;

	cout << "*****3��ɾ����ϵ��*****" << endl;

	cout << "*****4��������ϵ��*****" << endl;

	cout << "*****5���޸���ϵ��*****" << endl;

	cout << "*****6�������ϵ��*****" << endl;
	cout << "*****7���˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;


}

struct Person {
	string name;//�����ϵ������
	string sex;//�����ϵ���Ա�
	int age;//�����ϵ������
	string telephone;//�����ϵ�˵绰����
	string address;//�����ϵ��סַ

};
/*
	�����ϵ�������Ϣ
*/
void addPerSon(vector<Person>&vPerson) {
	int oldsize = vPerson.size();
	Person p;

	cout << "��������ϵ������" << endl;
	cin >> p.name;
	cout << "��������ϵ���Ա�" << endl;
	cin >> p.sex;
	cout << "��������ϵ������" << endl;
	cin >> p.age;
	cout << "��������ϵ�˵绰" << endl;
	cin >> p.telephone;
	cout << "��������ϵ�˵�ַ" << endl;
	cin >> p.address;
	vPerson.push_back(p);
	if (vPerson.size() >1) {
		cout << "������������������" << endl;
		vPerson.pop_back();
		if (oldsize == vPerson.size() - 1) {
			cout << "��ӳɹ�" << endl;
		}

		else {
			cout << "���ʧ��" << endl;

		}
	}
	else {
		cout << "��ӳɹ�" << endl;
	}
	


}
/*
	��ӡ�����ڲ�����
*/
void PrintvPerson(vector<Person>&vP) {

	for (vector<Person>::iterator it = vP.begin(); it != vP.end(); it++) {
		cout << "������  " << (*it).name << "�Ա�  " << (*it).sex << "���䣺 "
			<< (*it).age << "�绰�� " << (*it).telephone << "��ַ�� " << (*it).address << endl;
	}
}
int main() {
	//�˵��ĵ���
	vector<Person>vPerson;//ʹ������װ��ϵ��
	
	int select;
	while (1) {
	    showMenu();
	cin >> select;
	
	switch (select) {
		case 1:
			cout << "ѡ����������ϵ�˲���" << endl;
			addPerSon(vPerson);
			break;
		case 2:
			cout << "��ʾ��ϵ�����£�" << endl;
			PrintvPerson(vPerson);
			break;
		case 3:
			cout << "ɾ����ϵ��" <<endl;
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	
	}


	system("pause");
	return 0;
}