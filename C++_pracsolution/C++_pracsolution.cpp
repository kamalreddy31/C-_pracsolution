#include <iostream>

using namespace std;

class Hello
{
	int m_Hello_id ;
	char * m_Hello_name;

	public :

		Hello()
		{
			m_Hello_id = 0;
			m_Hello_name = new char;
			m_Hello_name[0] = '\0';
		}

		Hello(int id, const char* name)
		{
			m_Hello_id = id ;
			m_Hello_name = new char [strlen(name)+1];
			strcpy_s(m_Hello_name, strlen(name) + 1,name);
		}

		void Display()
		{
			cout << "The Id is : " << m_Hello_id << "\n" 
				<< "The Name is : " << m_Hello_name << "\n" << endl;
		}

		~Hello()
		{
			delete[] m_Hello_name;
		}
};

int main()
{
	Hello obj;
	Hello obj1(1,"Only Kamal");
	Hello obj2(2,"Vamsi");
	obj.Display();
	obj1.Display();
	obj2.Display();
}