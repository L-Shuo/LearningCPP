#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Person {
	
public:	
	Person(string name = "Jim") {
		m_Name = name;
		cout << "Person" << endl;
	}
	
	Person(const Person &p) {
		cout << "ʵ�δ��ݵ�������" << endl;
		m_Name = p.m_Name;
	}
	
	virtual ~Person() {
		cout << "~Person" << endl;
	}

	void play() {
		cout << m_Name << " Play" << endl;
	}
protected:
	string m_Name;
};

class Soilder:public Person {
	public:
		Soilder(string name = "Tom",int age=20) {
			m_Name = name;
			m_Age = age;
			cout << "Soilder" << endl;
		}
		virtual ~Soilder() {
			cout << "~Soilder" << endl;
		}
		void work() {
			cout << "work" << endl;
		}
	protected:
		int m_Age;
};

void testFunc1(Person p) {
	p.play();
}

void testFunc2(Person &p) {
	p.play();
}

void testFunc3(Person *p) {
	p->play();
}

int main(int argc, char** argv) {
	/*Soilder *p = new Soilder;
	delete p;
	p = NULL;*/
	Soilder s;
	Person p = s; //�������������������virtual�������������������ᱻ���ã�����ڴ�й© 
	testFunc1(p); //ע�⿽�����캯���ĵ��� 
	//cout << "-------------" << endl;
	//testFunc2(s);
	//cout << "-------------" << endl;
	//testFunc3(p);
	return 0;
}
