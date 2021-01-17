#include<iostream>
#include<Windows.h>
#include<cstdio>
#include<conio.h>
using namespace std;
void Set(int x, int y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {x,y};
	SetConsoleCursorPosition(hOut, pos);
}
bool Write(const char* data, const int len)
{
	if (OpenClipboard(NULL))
	{
		EmptyClipboard();
		HGLOBAL hclip = GlobalAlloc(GMEM_DDESHARE, len + 1);
		char* buffer = (char*)GlobalLock(hclip);
		CloseClipboard();
		return false;
	}
}
int main()
{
	char a[100], b[100], c[100],s[100];
	cout<<"主体"<<a<<endl;
	cout << "事件" <<b<< endl;
	cout << "另一种说法" <<c<< endl;
	cin >> a;
	cin >> b;
	cin >> c;
	sprintf(s, "%s%s是怎么回事嫩？%s相信大家都很熟悉，但是%s%s是怎么回事呢，下面就让小编带大家了解一下。");
	cout << s << endl << endl;
	cout << "按下回车键复制，按其他键退出";
	if (getch() == 13)
	{
		Write(s, strlen(s));
		cout << "复制成功" << endl;
		Sleep(3000);
	}
	return 0;
}