#include<iostream>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	char str1[] = "hello C string!";
	char* str2 = str1;

	char str3 = 'a';
	char str4 = 97;    // 对应的ASCII码值 
	char str5 = 'abc';

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;




	string str6 = "hello C++ string!";
	string str7 = "string!";

	cout << str6.find(str7) << endl;    //返回第一次出现的位置
	cout << str6.substr(1, 6) << endl;

	string str8 = "today is really bad!";
	cout << str8 << endl;
	str8.erase(str8.begin() + 4);
	cout << str8 << endl;

	string str9 = "oh,no yerongrong";
	for (size_t i = 0; i < str9.length(); i++)
	{
		cout << str9[i] << endl;
	}

	string str;
	cin >> str;
	cout << str;
	string::iterator begin = str.begin();
	string::iterator end = str.end();
	cout << end - begin << endl;

	//高级操作：字符串拼接

	string s1 = "NCU";
	string s2 = "is good school!";
	cout << s1 << endl<<s2<<endl;
	
	string s3 = s1 + s2;
	s1 += s2;
	cout << s3 << endl << s1 << endl;

	string st = "123";
	if (st.length() != st.size()) {
		cout << "error !!!!!" << endl;
	}
	else {
		cout << "length==size" << endl;
	}

	//string 同样可以比较大小

	string st1="aaa", st2="aab", st3="aa";
	if (str1 < str) {
		cout << "aaa<aab" << endl;
	}
	else {
		cout << "aaa>aab" << endl;
	}
	//  .....

	system("pause");
	return 0;
}


