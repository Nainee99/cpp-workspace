#include<iostream>
using namespace std;
class Teacher{
	private:
		string name, address;
		int age;
	public:
		Teacher(){
		}
		Teacher(string n, int a, string add ){
			name = n;
			age =a;
			address = add;
		}
		void display(string n, int a, string add){
			cout<<"Enter the teacher's name"<<endl;
			cin>>n;
			cout<<"Enter the teacher's age"<<endl;
			cin>>a;
			cout<<"Enter the teacher's address"<<endl;
			cin>>add;
			cout<<"The teacher's attributes are:\n";
			cout<<"Name\t"<<n<<"\nAge\t"<<a<<"\nAddress\t"<<add<<endl;
		}
};
class Writer{
		private:
			
		string name, address;
		int number_of_books;
		public:
			Writer(){
				
			}
			Writer(string n, int a, string add ){
			name = n;
		   number_of_books=a;
			address = add;
		}
			void output(string n, int a, string add){
			cout<<"Enter the writer's name"<<endl;
			cin>>n;
			cout<<"Enter the writer's age"<<endl;
			cin>>a;
			cout<<"Enter the writer's address"<<endl;
			cin>>add;
			cout<<"The writer's attributes are:\n";
			cout<<"Name\t"<<n<<"\nAge\t"<<a<<"\nAddress\t"<<add<<endl;
		}
	
};
class Scholar: public Teacher, public Writer{


		public:
			Scholar (){
			
			}
			Scholar(string n, int a, string add){
				
			}
			
		
};
int main(){
	Scholar s;
	//To demostrate inheritance from the Teacher class using display function of the class
	string n;
	 int a;
	  string add;
	s.display(n,a,add);
	cout<<"\n"<<endl;
//	Teacher t()
//	s.Teacher();
	//To demostrate inheritance from the Writer class using output function of the class
s.output(n,a,add);


	
}
