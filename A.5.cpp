#include <iostream>
using namespace std;
char* weird_string() {
	char c[] = "123345";
	return c;
}
int main()
{
	char *c ;
	c = weird_string();
	cout << c;
	return 0;
	//output vung nho da bi thu hoi
}
