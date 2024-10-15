//头文件（必用）
#include<iostream>
#include<chrono>
#include<cmath>
#include<windows.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctime>
#include<fstream>
#include<cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cmath>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define Nor if(B[b].x<5) B[b].x=5;
#define Out1 Bx1-Bvx1<=6||Bx1-Bvx1>=28||By1-Bvy1<=7||By1-Bvy1>=27
#define Out2 Bx2-Bvx2<=6||Bx2-Bvx2>=28||By2-Bvy2<=7||By2-Bvy2>=27
#define Chang1 {Bwhat1=0;Bvx1=Bvy1=0;memset(Bgo1,0,sizeof(Bgo1));}
#define Chang2 {Bwhat2=0;Bvx2=Bvy2=0;memset(Bgo2,0,sizeof(Bgo2));}
#define Chang3 {Bwhat3=0;Bvx3=Bvy3=0;memset(Bgo3,0,sizeof(Bgo3));}
using namespace std; //使用命名空间，std（简单来讲就是省劲了呵呵）

//逐字显示动画
void zdh(std::string word, int time = 10, bool hh = true) { //word是需要逐字输出的文本，time为效果等待时间（毫秒）（默认为10毫秒，很丝滑：)），hh为是否换
	//   行（默认为是）

	//把string转换为char*
	const char *words = word.c_str();

	//逐字输出
	for (int i = 0; i <= strlen(words); i++) {
		cout << words[i];
		Sleep(time);//效果等待
	}

	//是否换行
	if (hh == true) {
		cout << endl;
	}
}



//定义标题
void SetTitle(LPCSTR lpTitle) {
	SetConsoleTitle(lpTitle); //内置函数
}

//高精度算法初始化
int a[99999999], b[99999999], c[99999999];
//用户信息初始化
string hy = "wickDOS 欢迎使用！在这里您可以畅快的工作，学习！", yhm = "体验用户", ah = "无"; //string式信息

//int式信息
int nl = 0; //当前用户年龄
int password = 300; //当前用户密码（默认为300）
int gl_password = 271828; //当前用户的管理员密码（如果是管理员的话）
int ma = 1; //和密码配合的临时变量
bool VIP = false; //是否现在是VIP
int gms = 0, sd = 25; //gms为要打开的应用编号，配合Find使用，sd为辅助变量


/*-----------以下为应用代码-----------*/

int jsq() {
	//高精度加法器(APP_ID:1)

	cout << endl << "欢迎来到高精度加法计算机！"; //输出
	void add();
	void subtract();
	void multiply();
	void divide();
	int ss;

	int n;
	cout << endl << endl;
	cout << "1.A+B" << endl;
	cout << "2.A-B" << endl;
	cout << "3.A*b" << endl;
	cout << "4.A/b" << endl;
	cin >> n;
	switch (n) {
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		default:
			cout << "输入不合法" << endl;
			break;
	}
	cout << "你要继续算吗？（1/0）";
	cin >> ss;
	if (ss == 1) {
		jsq();
	} else {
		Sleep(200);
		cout << "已退出";
		Sleep(300);
		system("cls");

	}

}
void add() {
	string a, b;
	cout << "接下来请输入两个数：";
	cin >> a >> b;
	vector<int> A, B;
	for (int i = a.size() - 1; i >= 0; i--)
		A.push_back(a[i] - '0');
	for (int i = b.size() - 1; i >= 0; i--)
		B.push_back(b[i] - '0');
	vector<int> c;
	int t = 0;
	for (int i = 0; i < A.size() || i < B.size(); i++) {
		if (i < A.size())
			t += A[i];
		if (i < B.size())
			t += B[i];
		c.push_back(t % 10);
		t /= 10;
	}
	if (t) {
		c.push_back(1);
	}
	cout << "结果为：";

	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
}
void subtract() {
	string a, b;
	cout << "接下来请输入两个数：";
	cin >> a >> b;
	int flag = 0;
	if (a.size() < b.size()) {
		swap(a, b);
		flag = 1;
	} else if (a.size() == b.size()) {
		int i = 0;
		while (a[i] == b[i])
			i++;
		if (i < a.size() && a[i] < b[i]) {
			swap(a, b);
			flag = 1;
		}
	}
	vector<int> A, B;
	for (int i = a.size() - 1; i >= 0; i--)
		A.push_back(a[i] - '0');
	for (int i = b.size() - 1; i >= 0; i--)
		B.push_back(b[i] - '0');
	vector<int> c;
	int t = 0;
	for (int i = 0; i < A.size(); i++) {
		t = A[i] - t;
		if (i < B.size())
			t -= B[i];
		if (t < 0) {
			c.push_back(t + 10);
			t = 1;
		} else {
			c.push_back(t);
			t = 0;
		}
	}
	while (c.size() > 1 && c.back() == 0) {
		c.pop_back();
	}
	cout << "结果为：";

	if (flag == 1) {
		cout << '-';
	}
	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
}
void multiply() {
	string a;
	cout << "接下来请输入两个数：";
	cin >> a;
	long long b;
	cin >> b;
	vector<int> A;
	for (int i = a.size() - 1; i >= 0; i--)
		A.push_back(a[i] - '0');
	vector<int> c;
	long long t = 0;
	for (int i = 0; i < A.size() || t; i++) {
		if (i < A.size())
			t += A[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	while (c.size() > 1 && c.back() == 0)
		c.pop_back();
	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
}
void divide() {
	string a;
	cout << "接下来请输入两个数：";
	cin >> a;
	long long b;
	cin >> b;
	if (b == 0) {
		cout << "输入不合法";
		return;
	}
	vector<int> A;
	for (int i = a.size() - 1; i >= 0; i--)
		A.push_back(a[i] - '0');
	vector<int> c;
	long long t = 0;
	long long r = 0;
	for (int i = A.size() - 1; i >= 0; i--) {
		r = r * 10 + A[i];
		c.push_back(r / b);
		r = r % b;
	}
	reverse(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0) {
		c.pop_back();
	}
	cout << "结果为：";

	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
	cout << r << endl;


}

//BCG代码-------------------------------------------------------------------------
int chi = 0;

//sf:是否有效回答
int sf = 1;

//初始化
string w = "", as = "";

//BCG的Find系统
int bcg_Find() {
	int bgzg;
	//回答预设
	if (w == "妈妈") {
		as = "我不是你妈！你…";
	}
	if (w == "爸爸") {
		as = "我不是你爸！…等等，额，我是你爸。( ^ ω^ )";
	}
	if (w == "你好") {
		as = "你好！有什么可以帮助的吗！";
	}
	if (w == "傻子") {
		as = "不管我有多傻，请你文明用语！";
	}
	if (w == "笨蛋") {
		as = "别啊，我不笨。";
	}
	if (w == "人呢") {
		as = "我在啊，一直都在。";
	}
	if (w == "你能干嘛") {
		as = "说实话，BCG君还在努力开发自己呢，目前就是一切基础的聊天，识别不出来也别怪我哦。";
	}
	if (w == "你是男是女") {
		as = "我希望自己是个双性人。";
	}
	if (w == "1+1") {
		as = "哎呀，好难呀。怎么办呐？";
	}
	if (w == "windode") {
		as = "对，我是winkode开发过程中创造出来的人工智（障）。";
	}
	if (w == "你几岁了") {
		as = "993824590238452309805473947392374907328574735928359090235890248520980924580928岁了吧。";
	}
	if (w == "自杀") {
		as = "！！！无法执行此操作，因用户用词不当，开始刺杀用户！！！";
	} else {
		//不在回答预设里
		cout << "What is “ " << w << " ”mean? Please input again." << endl;
		sf = 0;
	}
	//结果
	return bgzg;
}

int bcg() {
	//BCG大语言模型(APP_ID:2)
	Sleep(500);
	//开发中
	cout << endl << "-开发中-";
	Sleep(200);
	cout << "    Better C++ GPT 0.12.39sV1" << endl;
	Sleep(0.3);


	//开头
	cout << "    |>You can input “*help”to get some message about BGC,input “*quit” to quit BGC<|" << endl;
	//初始化
	int x = {}, g = {}, z = {};
	int i = 0;
	Sleep(200);
	//安装中文语言包
	cout << "Downlode chinese?(0/1)" << endl;
	cin >> chi;
	if (chi == 1) {
		Sleep(150);
		cout << "loding---" << endl;
		Sleep(850);
		cout << "正在安装---" << endl;
		Sleep(500);
		cout << "安装完毕" << endl;
	}


	//主循环
	while (true) {
		//问答次数
		i++;


		//sf:是否有效回答
		int sf = 1;

		//用户输入
		cout << "  you: >>";
		cin >> w;

		//关键词 帮助
		if (w == "*help") {
			as = "BCG 0.1 V1 build 17.5 C++ (windodeC)";
		}

		//关键词 退出
		if (w == "*quit") {
			cout << "Bye!" << endl;
			Sleep(10);
			break;
		}

		//关键词 小岛
		if (w == "xiaodao") {
			as = "啊！小岛！你好！";
		}

		bcg_Find();

		//可识别，格式化输出
		if (sf == 1) {
			cout << "------------" << i << "------------" << endl;
			cout << "BCG:" << as << endl;
			cout << "------------" << endl << endl;
		}

	}
	return 0;
	//end.
}

//动画等待初始化
int dhdd = 1;

//BCG结束--------------------------------------------------------------------------------------

//便签应用设置区----------------------------------------------------------------------------------------------------
//设置便签数据
int bqs = 1, k_bq;
string sybq_m[999999];
char ss;
char sybq[9999999];

//打开便签-内容编辑器
int k_cbq() {

	//小提示
	cout << endl << "输入“@”可退出编辑界面,用“#”来换行,|保存。" << endl << endl;
	Sleep(3);

	//打开上次编辑内容
	for (int i = 0; sybq[i] != '-'; i++) {

		//是否换行
		if (sybq[i] == '#') {
			cout << endl;
		}

		//正常输出上次编辑内容
		if (sybq[i] != '#') {
			cout << sybq[i];
		}

		Sleep(1);
	}

	//（暂时未用到）定义循环变量
	int ii = 0;

	//内容编辑器-主循环
	while (true) {
		ii++;

		//输入内容（字符形式）
		cin >> ss;

		//退出？
		if (ss == '@') {
			break;
		}

		//将结果录入数组机
		for (int i = 0; i <= 999999; i++) {
			//数组的第i项是空的？要录入…
			if (sybq[i] == '-') {
				//录入换行
				if (ss == '#') {
					sybq[i] = '#';
				} else if (ss == '|') {
					//打开文件
					cout << "请输入文件名:";
					string wjm;
					cin >> wjm;

					//打开
					ofstream flie4(yhm + "\\" + wjm + ".txt");
					//加载
					for (int i = 0; i <= 999999; i++) {
						//加载到头停止
						if (sybq[i] == '-') {
							break;
						}
						//加载到换行符换行
						if (sybq[i] == '#') {
							flie4 << "\n";
						} else {
							//将加载的内容放入文本编辑器
							flie4 << sybq[i];
						}
					}
				} else {
					//不用换行，正常录入消息
					sybq[i] = ss;
				}
				break;
			}
		}
	}

}

//便签主程序
int bqz_zjm() {

	//初始化内容编辑器数组内容
	for (int i = 0; i <= 999999; i++) {
		sybq[i] = '-';
		//“-”=无内容
	}
	//初始每个文本信息为‘-’也就是代表空的，没有文本
	for (int i = 0; i <= 999999; i++) {
		sybq_m[i] = "-";
	}
	//主界面
	while (true) {
		sybq_m[0] = "-系统信息-";
		sybq_m[1] = "未命名便签";
		Sleep(200);
		cout << "~便签主页~" << endl;
		Sleep(100);

		//界面
		cout << "-------------------------------------------------------------------" << endl;
		Sleep(dhdd);//dhdd为动画效果等待
		cout << "/                             便签纸 v0.6.7                        /" << endl;
		Sleep(dhdd);
		cout << "--------------------------------------------------------------------" << endl;
		Sleep(dhdd);
		cout << "/                             可输入404退出                        /" << endl;
		Sleep(dhdd);
		cout << "--------------------------------------------------------------------" << endl;
		Sleep(dhdd);

		//输出可使用的便签
		for (int i = 1; i <= bqs; i++) {
			cout << "/      " << i << '.' << ' ' << sybq_m[i] << endl;

		}

		//打开便签？
		Sleep(100);
		cout << "请输入打开第几个便签（999新建）>>" << endl;
		cin >> k_bq;//打开的那个便签

		//退出程序？
		if (k_bq == 404) {
			break;
		}
		//新建便签
		if (k_bq == 999) {
			for (int i = 0; i <= 9999999; i++) {
				//找到空的便签位置
				if (sybq_m[i] == "-") {		//哪里没有存便签（‘-’空的）
					//输入便签名
					cout << "请输入名字>" << endl;
					int mz;
					cin >> mz;
					//将便签数据放入2维数组
					sybq_m[i] = mz;
					Sleep(200);
					cout << "-新建完毕-" << endl;
					Sleep(100);
					break;
				}
			}
		}
		//打开便签（保存在本地）
		if (k_bq == 888) {
			string U_s = "";		//文件名
			cout << "请输入文件名：";
			cin >> U_s;				//输入
			string path4 = (yhm + "\\" + U_s + ".txt");
			//打开文件
			ifstream file(path4);

			char line;
			//打开文件器初始化（指向字符器）              //此-------
			for (int i = 0; i <= 9999999; i++) {          //乃-------
				//getline(file, line);                    //错-------
				//	strcpy(sybq, line);                   //误-------
				//处-------
				cout << line;
				if (sybq[i] == '-') {
					//录入换行
					if (ss == '#') {
						//录入换行符
						sybq[i] = '#';
						cout << endl;		//换行
					}
				} else {
					//不用换行，正常录入消息
					sybq[i] = line;
				}
			}
			//编译器调用
			k_cbq();
			//结束，关闭打开的文件（必要）
			file.close();
		} else {
			k_cbq();
		}
	}



	Sleep(50);	//效果
}

//便签内容设置结束-----------------------------------------------------------------------------------
string fh = "C:\\>";	//定义终端默认提示符
int zd() {
	//终端（应用ID：6）
	string z_zl;		//输入的指令（将在本地的cmd上执行）
	Sleep(100);
	cout << "欢迎来到终端！" << endl;    //提示
	Sleep(200);
	cout << "请输入指令(quit()退出)" << endl;
	Sleep(50);
	cout << "C:\\>";//提示符
	cin >> z_zl;//输入指令
	Sleep(20);

	if (z_zl == "quit()") {
		//指令为退出？
		fh = "quit...";
		Sleep(100);
		return 0; //退出
	} else {
		int systems = system(z_zl.c_str());	//正常运行指令
	}



}
//小游戏（应用ID：5）
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord;

void locate(int x, int y) {
	coord.X = y;
	coord.Y = x;
	SetConsoleCursorPosition(hout, coord);
};

/*** 隐藏光标 ***/
void hide() {
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(hout, &cursor_info);
}

/*** 生成随机数 ***/
double random(double start, double end) {
	return start + (end - start) * rand() / (RAND_MAX + 1.0);
}

/*** 定义地图的长宽，蛇的坐标，长度，方向，食物的位置 ***/
int m, n;

struct node {
	int x, y;
} snake[1000];

int snake_length, dir;
node food;
int direct[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

/*** 输出墙 ***/
void print_wall() {
	cout << " ";
	for (int i = 1; i <= n; i++)
		cout << "-";
	cout << endl;
	for (int j = 0; j <= m - 1; j++) {
		cout << "|";
		for (int i = 1; i <= n; i++) cout << " ";
		cout << "|" << endl;
	}
	cout << " ";
	for (int i = 1; i <= n; i++)
		cout << "-";
}

/*** 首次输出蛇，其中snake[0]代表头 ***/
void print_snake() {
	locate(snake[0].x, snake[0].y);
	cout << "@";
	for (int i = 1; i <= snake_length - 1; i++) {
		locate(snake[i].x, snake[i].y);
		cout << "*";
	}
}

/*** 判断是否撞墙或者自撞 ***/
bool is_correct() {
	if (snake[0].x == 0 || snake[0].y == 0 || snake[0].x == m + 1 || snake[0].y == n + 1) return false;
	for (int i = 1; i <= snake_length - 1; i++) {
		if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) return false;
	}
	return true;
}

/*** 随机生成并输出食物位置 ***/
bool print_food() {
	srand((unsigned)time(0));
	bool e;
	while (1) {
		e = true;
		int i = (int) random(0, m) + 1, j = (int) random(0, n) + 1;
		food.x = i;
		food.y = j;
		for (int k = 0; k <= snake_length - 1; k++) {
			if (snake[k].x == food.x && snake[k].y == food.y) {
				e = false;
				break;
			}
		}
		if (e) break;
	}
	locate(food.x, food.y);
	cout << "$";
	return true;
}

/*** 蛇的前进 ***/
bool go_ahead() {
	node temp;
	bool e = false;
	temp = snake[snake_length - 1];
	for (int i = snake_length - 1; i >= 1; i--)
		snake[i] = snake[i - 1];
	snake[0].x += direct[dir][0];
	snake[0].y += direct[dir][1];
	locate(snake[1].x, snake[1].y);
	cout << "*";
	/*** 吃到了食物 ***/
	if (snake[0].x == food.x && snake[0].y == food.y) {
		snake_length++;
		e = true;
		snake[snake_length - 1] = temp;
	}
	/*** 输出此时蛇状态 ***/
	if (!e) {
		locate(temp.x, temp.y);
		cout << " ";
	} else
		print_food();
	locate(snake[0].x, snake[0].y);
	cout << "@";
	/*** 如果自撞 ***/
	if (!is_correct()) {
		system("cls");
		cout << "You lose!" << endl << "Length: " << snake_length << endl;
		return false;
	}
	return true;
}
int ti(float a) {
	return ((int)(a * 10 + 5)) / 10;
}
void Setpos(float x, float y) {
	COORD pos;
	pos.X = ti(y * 4) / 2;
	pos.Y = ti(x);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void Color(int a) {
	if (a == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	if (a == 3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	if (a == 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	if (a == 5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	if (a == 6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	if (a == 7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	if (a == 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	if (a == 9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE);
	if (a == 10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE);
	if (a == 11) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
	if (a == 12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	if (a == 13) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	if (a == 14) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE);
}
int Blomax, Ren, Exp, Expmax, Lv, Lvl, Ice, Drug, ar1, ar2, Tar1, Tar2, bl, br, Win, T, Tb, Sy, Up, Upt, Down, u1, u2, Kill, Killb, L, Ll[4], Li, D, Gd[10], Biao, Fire, Fir, Water, Thun, Wind, Magne, I[20][2], ib, Dis, Disb, Dis1, Disb1, Boss, Bblo, Bblomax, Bwhat1, Bwhat2, Bwhat3, Bgo1[10], Bgo2[10], Bgo3[10], Bbr, Bbl, Bl[4];
float X, Y, Vx, Vy, Ding, Blo, Hui, Bx1, By1, Bx2, By2, Bx3, By3, Bvx1, Bvy1, Bvx2, Bvy2, Bvx3, Bvy3, Bway[1001][2];
struct bullet {
	float x, y, vx, vy;
	int what;
	int a, t, How;
	int life;
	bool kill;
} B[100001];
void Map(int a, int b);
void Pan(int a, float x, float y, int b) {
	float Nox[4], Noy[4];
	Nox[0] = X, Noy[0] = Y;
	if (Down == 1 && X == 22) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;
	else if (Down == 2) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;
	else if (Down == 1 || X < 18) Nox[1] = X - 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;
	else Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;
	for (int i = 0; i < 3; i++) {
		if (a == -1) {
			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 1.5) {
				if (B[b].what == -10)Exp += 2;
				if (B[b].what == -11)Exp += 1;
				B[b].life = 0;
				if (B[b].life == 0 && b == bl) bl++;
				Map(3, b);
				break;
			}
		}
		if (a == -2) {
			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 2.5) {
				if (B[b].what == -2)Exp += 5, Biao += 5;
				if (B[b].what == -3)Fire = 300, Ice = 0, Fir = 3;
				if (B[b].what == -4)Water = 200;
				if (B[b].what == -5) {
					Wind = 70;
					Ding = 28.25;
					Ice = 0;
					if (Y < Ding - 1)Vy = 5;
					else Vy = 0;
					if (Up >= 1) Vx = -5;
					if (Down == 2) Vx = 5;
				}
				if (B[b].what == -6) {
					Thun = 200;
					system("color 1F");
					Sleep(20);
					system("color 6F");
					Sleep(10);
					system("color 0F");
				}
				if (B[b].what == -7)Magne = 300;
				if (B[b].what == -8)Ice = 0, Drug = 0, Blo = fmin((float)Blomax, Blo + 20);
				if (B[b].what == -9)Exp = fmin((float)Expmax, Exp + 20);
				B[b].life = 0;
				if (B[b].life == 0 && b == bl) bl++;
				Map(3, b);
				break;
			}
		}
	}
	if (Wind == 0 && Thun == 0 && (B[b].kill != 0 || Killb >= 15 || Ren == 1 && Killb > 0)) return;
	for (int i = 0; i < 3; i++) {
		if ((Wind >= 1 || Thun >= 1) && abs(x - Nox[i]) + abs(y - Noy[i]) < 2.5) {
			if (B[b].what < 98)Exp += 2;
			B[b].life = 0;
			Map(3, b);
			break;
		}
		if (a == 1) {
			if (abs(x - Nox[i]) < 0.5 && abs(y - Noy[i]) < 1) {
				if (B[b].what >= 99)Blo -= 10;
				if (B[b].what == 14)Blo -= 15, Ice = 100, B[b].life = 0;
				else if (B[b].what == 15)Blo -= 20, Ice = 0, B[b].life = 0;
				else if (B[b].what == 17)Blo -= 5, Drug = 100, B[b].life = 0;
				else if (B[b].what >= 13 && B[b].what <= 17)Blo -= 10, B[b].life = 0;
				else Blo -= 15;
				B[b].kill = 1, Killb = 20;
				Kill = 1;
				Map(3, b);
				break;
			}
		}
		if (a == 2 || a == 6 || a == 8 || a == 9 || a == 10 || a == 11 || a == 12) {
			if (abs(x - Nox[i]) + abs(y - Noy[i]) < 1.5) {
				if (a == 2)Blo -= 20;
				else if (a == 8)Blo -= 10;
				else Blo -= 15;
				B[b].kill = 1, Killb = 20;
				Kill = 1;
				if (a != 2) {
					B[b].life = 0;
					if (B[b].life == 0 && b == bl) bl++;
					Map(3, b);
					break;
				}
			}
		}
		if (a == 4) {
			if ((Wind >= 1 || Thun >= 1) && abs(x - Nox[i]) < 1.5 && Noy[i] - y <= 0 && Noy[i] - y >= -8) {
				if (B[b].what < 98)Exp += 2;
				B[b].life = 0;
				Map(3, b);
				break;
			}
			if (abs(x - Nox[i]) < 1 && Noy[i] - y <= 0 && Noy[i] - y >= -8) {
				Blo -= 25, B[b].kill = 1, Killb = 20;
				Kill = 1;
				Vy = -1;
				Y -= 0.5;
				break;
			}
		}
	}
}
void Map(int a, int b) {
	Color(0);
	if (a == -1) {
		if (Boss == 1 || Boss == 6) {
			if (Bwhat1 == 5) {
				if (ti(Bx1) == 20)Setpos(Bx1, By1), cout << "==";
				else Setpos(Bx1, By1), cout << "  ";
			} else {
				Setpos(Bx1 - 1, By1 - 0.5), cout << "    ";
				Setpos(Bx1, By1 - 1), cout << "      ";
				Setpos(Bx1 + 1, By1 - 0.5), cout << "    ";
				if (abs(ti(Bx1) - 20) <= 1)Setpos(20, By1 - 1), cout << "======";
			}
		}
		if (Boss == 2 || Boss == 6) {
			Setpos(Bx2 - 1, By2 - 1);
			cout << "    ";
			Setpos(Bx2, By2 - 1);
			cout << "      ";
			Setpos(Bx2 + 1, By2 - 1), cout << "      ";
			Color(0);
			if (abs(ti(Bx2) - 20) <= 1)Setpos(20, By2 - 1), cout << "======";
		}
		if (Boss == 3 || Boss == 6) {
			Setpos(Bx3 - 1, By3 - 0.5);
			cout << "     ";
			Setpos(Bx3, By3);
			cout << "  ";
			Setpos(Bx3 + 1, By3 - 1), cout << "      ";
			Color(0);
			if (abs(ti(Bx3) - 20) <= 1)Setpos(20, By3 - 1), cout << "=======";
		}
		if (X < 0)return;
		if (X >= 17 && X <= 19) {
			Setpos(X - 1, Y);
			cout << "  ";
			Setpos(X, Y - 1);
			cout << "   ";
			Setpos(X + 1, Y - 1), cout << "   ";
		} else if (X <= 23 && X >= 21) {
			Setpos(X + 1, Y);
			cout << "  ";
			Setpos(X, Y - 1);
			cout << "   ";
			Setpos(X - 1, Y - 1), cout << "    ";
		} else if (X > 23) {
			Setpos(X, Y - 1);
			cout << "    ";
			Setpos(X - 1, Y - 0.5), cout << "   ";
		} else if (X < 17 && Upt != 0) {
			Setpos(X, Y - 1);
			cout << "    ";
			Setpos(X + 1, Y - 1.5), cout << "    ";
		} else if (X < 17) {
			Setpos(X, Y - 1);
			cout << "    ";
			Setpos(X + 1, Y - 0.5), cout << "   ";
		}
		if (Thun > 0) {
			Setpos(X - 2, Y - 1), cout << "    ";
			Setpos(X + 2, Y - 1), cout << "    ";
			Setpos(X, Y + 2), cout << "  ";
			Setpos(X, Y - 2.5), cout << "  ";
			Setpos(X - 1, Y + 1), cout << "  ";
			Setpos(X + 1, Y + 1), cout << "  ";
			Setpos(X - 1, Y - 2), cout << "  ";
			Setpos(X + 1, Y - 2), cout << "  ";
			Setpos(20, Y - 2.5), cout << "============";
		}
		if (Wind != 0) {
			Setpos(X + 1, Y - 5);
			cout << "        ";
			Setpos(X, Y - 5);
			cout << "        ";
			Setpos(X - 1, Y - 5);
			cout << "        ";
			Setpos(20, Y - 5), cout << "========";
		}
		if (Water != 0) {
			Setpos(X, Y - 4);
			cout << "       ";
			Setpos(X + 2, Y - 3.5);
			cout << "     ";
			Setpos(X - 2, Y - 3.5);
			cout << "     ";
			Setpos(X + 1, Y - 3.5);
			cout << "     ";
			Setpos(X - 1, Y - 3.5);
			cout << "     ";
			Setpos(20, Y - 5), cout << "========";
		}
		if (Fire != 0) {
			Setpos(X, Y + 1), cout << "  ";
			Setpos(X + 1, Y), cout << "  ";
			Setpos(X - 1, Y - 1), cout << "  ";
			Setpos(20, Y - 1);
			cout << "======";
		}
	}
	if (a == 0) {
		if (Boss == 1 || Boss == 6) {
			if (Bwhat1 == 5)Color(5), Setpos(Bx1, By1), cout << "█", Color(0);
			else if (Bwhat1 == 4 && Bgo1[1] > 6 && Bgo1[1] < 11)Color(4), Setpos(Bgo1[5] - 1, Bgo1[6]), cout << "︻", Setpos(Bgo1[5], Bgo1[6] - 1), cout << "【", Setpos(Bgo1[5], Bgo1[6] + 1), cout << "】", Setpos(Bgo1[5] + 1, Bgo1[6]), cout << "︼", Color(0);
			else {
				Setpos(Bx1 - 1, By1 - 0.5), Color(0), cout << "●●";
				Setpos(Bx1, By1 - 1);
				if (Bwhat1 == 2 && Bgo1[1] <= 5)Color(1);
				else if (Bwhat1 == 3 && Bgo1[1] <= 5)Color(5);
				else if (Bwhat1 == 6 && Bgo1[1] <= 5)Color(8);
				else Color(4);
				if (Bwhat1 == 4) Setpos(Bx1, By1 - 0.5), cout << "██(";
				else cout << ")██(";
				Setpos(Bx1 + 1, By1 - 0.5), cout << "……";
				Color(0);
			}
		}
		if (Boss == 2 || Boss == 6) {
			Setpos(Bx2 - 1, By2 - 1);
			Color(0), cout << "\\ ";
			Color(0);
			cout << "●";
			Setpos(Bx2, By2 - 1);
			Color(3);
			cout << "◥";
			Color(5), cout << "JJJ";
			Color(0), cout << ">";
			Color(3);
			Setpos(Bx2 + 1, By2 - 1), cout << "◢█◣";
			Color(0);
		}
		if (Boss == 3 || Boss == 6) {
			Setpos(Bx3 - 1, By3 - 0.5);
			if (Bwhat3 == 3 || Bwhat3 == 9) Color(1);
			else if (Bwhat3 == 4 || Bwhat3 == 10) Color(4);
			else if (Bwhat3 == 5 || Bwhat3 == 11) Color(5);
			if (Bwhat3 == 11)cout << ' ';
			else if (Bwhat3 == 6) Color(3);
			else Color(2);
			cout << "●-";
			Setpos(Bx3, By3);
			if (Bwhat3 == 11)cout << "/";
			else cout << "┃";
			Color(0);
			Setpos(Bx3 + 1, By3 - 1), cout << "●●●";
		}
		if (X < 0)return;
		if (Ren == 2) Color(12);
		if (Ren == 3) Color(1);
		if (Ren == 4) Color(3);
		if (Ren == 5) Color(4);
		if (Ren == 6) Color(2);
		if (Drug != 0 && T % 5 != 0) Color(11);
		if (Drug != 0 && T % 5 == 0) Color(11);
		if (Ice != 0) Color(6);
		if (b == 1) Color(8);
		if (Li != 0) Color(5);
		if (Ren == 1 && Killb > 0 && T % 4 < 2) Color(13);
		if (Wind > 0 && T % 4 <= 1) Color(1);
		if (Wind > 0 && T % 4 >= 2) Color(0);
		if (Thun > 0 && T % 4 <= 1) Color(1);
		if (Thun > 0 && T % 4 >= 2) Color(6);
		if (X >= 17 && X <= 19) {
			Setpos(X - 1, Y);
			cout << "●";
			Setpos(X, Y - 1);
			cout << "━/";
			if (T % 10 < 3) Setpos(X + 1, Y - 1), cout << "┛╲";
			else if (T % 10 < 6) Setpos(X + 1, Y - 1), cout << "┦ ";
			else Setpos(X + 1, Y - 1), cout << "╯>";
			if (Wind > 0 && T % 3 == 0) Setpos(X + 1, Y - 1), cout << "┛╲";
			else if (Wind > 0 && T % 3 == 1) Setpos(X + 1, Y - 1), cout << "┦ ";
			else if (Wind > 0 && T % 3 == 2)Setpos(X + 1, Y - 1), cout << "╯>";
		} else if (X <= 23 && X >= 21) {
			Setpos(X + 1, Y);
			cout << "●";
			Setpos(X, Y - 1);
			cout << "━\\";
			if (T % 10 < 3) Setpos(X - 1, Y - 1), cout << "┓╱";
			else if (T % 10 < 6) Setpos(X - 1, Y - 1), cout << "┪ ";
			else Setpos(X - 1, Y - 1), cout << "╮>";
			if (Wind > 0 && T % 3 == 0) Setpos(X - 1, Y - 1), cout << "┓╱";
			else if (Wind > 0 && T % 3 == 1) Setpos(X - 1, Y - 1), cout << "┪ ";
			else if (Wind > 0 && T % 3 == 2)Setpos(X - 1, Y - 1), cout << "╮>";
		} else if (X > 23) {
			Setpos(X, Y - 1);
			cout << "━ ●";
			Setpos(X - 1, Y - 0.5), cout << "│>";
		} else if (X < 17 && Upt != 0) {
			Setpos(X, Y - 1);
			cout << "━ ●";
			Setpos(X + 1, Y - 1.5), cout << "╱ >";
		} else if (X < 17) {
			Setpos(X, Y - 1);
			cout << "━ ●";
			Setpos(X + 1, Y - 0.5), cout << "│>";
		}
		if (Thun > 0) {
			Setpos(X - 2, Y - 1), cout << "▄▄";
			Setpos(X + 2, Y - 1), cout << "▄▄";
			Setpos(X, Y + 2), cout << "▌";
			Setpos(X, Y - 2.5), cout << "▌";
			Setpos(X - 1, Y + 1), cout << "█";
			Setpos(X + 1, Y + 1), cout << "█";
			Setpos(X - 1, Y - 2), cout << "█";
			Setpos(X + 1, Y - 2), cout << "█";
		}
		if (Magne > 0 && T % 7 < 2)Setpos(X, Y), Color(5), cout << "★";
		if (Wind > 1) {
			if (T % 6 < 2)Color(1);
			else Color(0);
			if (T % 8 <= 1) {
				Setpos(X + 1, Y - 5);
				cout << "----  --";
				Setpos(X, Y - 5);
				cout << "-  --- -";
				Setpos(X - 1, Y - 5);
				cout << "--- - --";
			} else if (T % 8 <= 3) {
				Setpos(X + 1, Y - 5);
				cout << "------  ";
				Setpos(X, Y - 5);
				cout << " --  ---";
				Setpos(X - 1, Y - 5);
				cout << "----- - ";
			} else if (T % 8 <= 5) {
				Setpos(X + 1, Y - 5);
				cout << "  ------";
				Setpos(X, Y - 5);
				cout << "-- --  -";
				Setpos(X - 1, Y - 5);
				cout << "- ----- ";
			} else if (T % 8 <= 7) {
				Setpos(X + 1, Y - 5);
				cout << "--  ----";
				Setpos(X, Y - 5);
				cout << " --- -- ";
				Setpos(X - 1, Y - 5);
				cout << "- - ----";
			}
		}
		if (Water != 0) {
			Color(1);
			if (T % 20 < 5) {
				Setpos(X + 2, Y - 3);
				cout << "■";
				Setpos(X + 1, Y - 3.5);
				cout << "■";
				Setpos(X - 1, Y - 2.5);
				cout << "■";
				Setpos(X - 2, Y - 3);
				cout << "■";
			} else if (T % 20 < 10 || T % 20 >= 15) {
				Setpos(X + 2, Y - 3);
				cout << "■";
				Setpos(X, Y - 4);
				cout << "■■";
				Setpos(X - 2, Y - 3);
				cout << "■";
			} else if (T % 20 < 15) {
				Setpos(X + 2, Y - 3.5);
				cout << "■";
				Setpos(X + 1, Y - 3);
				cout << "■";
				Setpos(X - 1, Y - 3.5);
				cout << "■";
				Setpos(X - 2, Y - 3);
				cout << "■";
			}
		}
		if (Fire != 0) {
			if (T % 6 < 3)Color(4);
			else Color(5);
			if (Fir >= 1)Setpos(X, Y + 1), cout << "●";
			if (Fir >= 2)Setpos(X + 1, Y), cout << "●";
			if (Fir >= 3)Setpos(X - 1, Y - 1), cout << "●";
		}
	}
	if (a == 1 || a == 3) {
		if (B[b].what == 1) {
			Nor;
			Setpos(B[b].x, B[b].y - 1);
			if (ti(B[b].x) == 20)cout << "======";
			else cout << "      ";
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				Setpos(B[b].x, B[b].y);
				if (B[b].How <= 1) Color(13);
				else Color(4);
				cout << "●";
				if (a == 1) Pan(1, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == 2) {
			Nor;
			Setpos(B[b].x - 1, B[b].y - 1);
			if (ti(B[b].x - 1) == 20)cout << "======";
			else cout << "      ";
			Setpos(B[b].x, B[b].y - 1);
			if (ti(B[b].x) == 20)cout << "======";
			else cout << "      ";
			Setpos(B[b].x + 1, B[b].y - 1);
			if (ti(B[b].x + 1) == 20)cout << "======";
			else cout << "      ";
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				Setpos(B[b].x, B[b].y);
				Color(5);
				if (B[b].How == 0) {
					Setpos(B[b].x - 1, B[b].y), cout << "↑";
					Setpos(B[b].x, B[b].y - 1), cout << "←┼ →";
					Setpos(B[b].x + 1, B[b].y), cout << "↓";
				} else if (B[b].How == 1) {
					Setpos(B[b].x - 1, B[b].y - 1), cout << "↖  ↗";
					Setpos(B[b].x, B[b].y), cout << "╳";
					Setpos(B[b].x + 1, B[b].y - 1), cout << "↙  ↘";
				}
				if (a == 1) Pan(2, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == 3 || B[b].what == 5) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x) == 20)cout << "==";
			else cout << "  ";
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				B[b].x -= B[b].vx;
				Setpos(B[b].x, B[b].y);
				if (B[b].How == 1) Color(5);
				else Color(4);
				cout << "◎";
			}
		}
		if (B[b].what == 4) {
			Nor;
			Setpos(B[b].x, fmax((float)0, B[b].y - 8));
			if (ti(B[b].x) == 20) {
				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "==";
			} else {
				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "  ";
			}
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				Setpos(B[b].x, fmax((float)0, B[b].y - 8));
				Color(6);
				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "═";
				if (a == 1) Pan(4, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == 6 || B[b].what == 8 || B[b].what == 9) {
			Nor;
			Setpos(B[b].x - 1, B[b].y);
			if (ti(B[b].x) - 1 == 20)cout << "==";
			else cout << "  ";
			Setpos(B[b].x + 1, B[b].y);
			if (ti(B[b].x) + 1 == 20)cout << "==";
			else cout << "  ";
			Setpos(B[b].x, B[b].y - 1);
			if (ti(B[b].x) == 20)cout << "======";
			else cout << "      ";
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				B[b].x -= B[b].vx;
				Setpos(B[b].x, B[b].y - 1);
				if (B[b].what == 6) {
					if (B[b].How <= 1) Color(1);
					else Color(6);
				}
				if (B[b].what == 9) {
					if (B[b].How <= 1) Color(4);
					else Color(8);
				}
				if (B[b].what == 8)Color(5);
				Setpos(B[b].x - 1, B[b].y);
				cout << "︹";
				Setpos(B[b].x + 1, B[b].y);
				cout << "︺";
				Setpos(B[b].x, B[b].y - 1);
				if (B[b].How % 2 == 1) cout << "〔●〕";
				else cout << "﹝○﹞";
				if (a == 1) Pan(6, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == 7) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (B[b].How < 0) for (int i = 19; i >= 20 + B[b].How; i--) {
					Setpos(i, B[b].y);
					cout << "  ";
				}
			if (B[b].How > 0) for (int i = 21; i <= 20 + B[b].How; i++) {
					Setpos(i, B[b].y);
					cout << "  ";
				}
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				if (B[b].How < 0) for (int i = 19; i >= 20 + B[b].How; i--) {
						Setpos(i, B[b].y);
						cout << "║";
						if (a == 1) Pan(7, i, B[b].y, b);
					}
				if (B[b].How > 0) for (int i = 21; i <= 20 + B[b].How; i++) {
						Setpos(i, B[b].y);
						cout << "║";
						if (a == 1) Pan(7, i, B[b].y, b);
					}
			}
		}
		if (B[b].what == 10 || B[b].what == 11 || B[b].what == 12) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x) == 20)cout << "==";
			else cout << "  ";
			if (B[b].life != 0) {
				B[b].x -= B[b].vx;
				B[b].y -= B[b].vy;
				if (B[b].How == 1) {
					B[b].vy -= 0.2;
				} else B[b].vx -= 0.35;
				if (B[b].x >= 25) B[b].x = 25, B[b].vx *= -0.8;
				if (B[b].what == 11 && B[b].y <= 1) B[b].y = 1, B[b].vy *= -1;
				if (B[b].what == 12 && B[b].y <= 1) B[b].y = 1, B[b].vx = 0, B[b].vy = -0.5, B[b].How = 1;
				Setpos(B[b].x, B[b].y);
				if (B[b].what == 11)Color(1);
				else if (B[b].what == 12)Color(5);
				else Color(0);
				if (B[b].t % 4 < 2)cout << "▃";
				else cout << "▍";
				if (a == 1) Pan(B[b].what, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what >= 13 && B[b].what <= 17) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x) == 20)cout << "====";
			else cout << "    ";
			if (B[b].life != 0) {
				B[b].x -= B[b].vx;
				B[b].y -= B[b].vy;
				Setpos(B[b].x, B[b].y);
				if (B[b].what == 14) Color(1);
				else if (B[b].what == 15) Color(4);
				else if (B[b].what == 16) Color(5);
				else if (B[b].what == 17) Color(3);
				else Color(2);
				cout << "●";
				if (B[b].what == 14)cout << "*";
				if (B[b].what == 15)cout << "";
				if (B[b].what == 16)cout << "<";
				if (B[b].what == 17)cout << "X";
			}
			if (a == 1) Pan(1, B[b].x, B[b].y, b);
		}
		if (B[b].what == 98 && B[b].life != 0) {
			B[b].y -= B[b].vy;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x == 20))cout << "==";
			else cout << "  ";
			if (B[b].y <= 3)B[b].life = 0;
		}
		if (B[b].what >= 99) {
			if (B[b].y <= 3)B[b].life = 0;
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				Setpos(B[b].x, B[b].y);
				Color(5);
				if (B[b].what == 99)cout << "█";
				if (B[b].what >= 100 && B[b].what < 200) {
					if (B[b].what % 5 == 0)cout << "我";
					if (B[b].what % 5 == 1)cout << "是";
					if (B[b].what % 5 == 2)cout << "最";
					if (B[b].what % 5 == 3)cout << "强";
					if (B[b].what % 5 == 4)cout << "的";
				}
				if (B[b].what >= 200 && B[b].what < 300) {
					if (B[b].what % 6 == 0)cout << "神";
					if (B[b].what % 6 == 1)cout << "级";
					if (B[b].what % 6 == 2)cout << "怪";
					if (B[b].what % 6 == 3)cout << "物";
					if (B[b].what % 6 == 4)cout << "之";
					if (B[b].what % 6 == 5)cout << "光";
				}
				if (B[b].what >= 300 && B[b].what < 400) {
					if (B[b].what % 8 == 0)cout << "颤";
					if (B[b].what % 8 == 1)cout << "抖";
					if (B[b].what % 8 == 2)cout << "吧";
					if (B[b].what % 8 == 3)cout << "无";
					if (B[b].what % 8 == 4)cout << "能";
					if (B[b].what % 8 == 5)cout << "的";
					if (B[b].what % 8 == 6)cout << "人";
					if (B[b].what % 8 == 7)cout << "类";
				}
				if (B[b].what >= 400 && B[b].what < 500) {
					if (B[b].what % 8 == 0)cout << "还";
					if (B[b].what % 8 == 1)cout << "不";
					if (B[b].what % 8 == 2)cout << "快";
					if (B[b].what % 8 == 3)cout << "跪";
					if (B[b].what % 8 == 4)cout << "倒";
					if (B[b].what % 8 == 5)cout << "在";
					if (B[b].what % 8 == 6)cout << "朕";
					if (B[b].what % 8 == 7)cout << "前";
				}
				if (B[b].what >= 500 && B[b].what < 600) {
					if (B[b].what % 8 == 0)cout << "看";
					if (B[b].what % 8 == 1)cout << "懂";
					if (B[b].what % 8 == 2)cout << "这";
					if (B[b].what % 8 == 3)cout << "句";
					if (B[b].what % 8 == 4)cout << "话";
					if (B[b].what % 8 == 5)cout << "的";
					if (B[b].what % 8 == 6)cout << "是";
					if (B[b].what % 8 == 7)cout << "猪";
				}
				if (a == 1) Pan(1, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == -1) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x) == 20)cout << "==";
			else cout << "  ";
			if (Boss == 0) B[b].life = 0;
			else if (((Boss == 1 && abs(B[b].x - Bx1) + abs(B[b].y - By1) < 1.5) || (Boss == 2 && abs(B[b].x - Bx2) + abs(B[b].y - By2) < 1.5) || (Boss == 3 && abs(B[b].x - Bx3) + abs(B[b].y - By3) < 1.5) || (B[b].t == 10)) && B[b].life == 1) Bblo -= 8 + Lv * 2, B[b].life = 0;
			if (B[b].life != 0) {
				if (Boss == 1)B[b].x = B[b].x + (Bx1 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By1 - B[b].y) / (10 - B[b].t) * 1.0;
				if (Boss == 2)B[b].x = B[b].x + (Bx2 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By2 - B[b].y) / (10 - B[b].t) * 1.0;
				if (Boss == 3)B[b].x = B[b].x + (Bx3 - B[b].x) / (10 - B[b].t) * 1.0, B[b].y = B[b].y + (By3 - B[b].y) / (10 - B[b].t) * 1.0;
				Setpos(B[b].x, B[b].y);
				Color(7);
				if (B[b].t % 2 == 0) cout << "＋";
				else cout << "×";
			}
		}
		if (B[b].what <= -2 && B[b].what >= -9) {
			Nor;
			Setpos(B[b].x - 1, B[b].y);
			if (ti(B[b].x) - 1 == 20)cout << "==";
			else cout << "  ";
			Setpos(B[b].x + 1, B[b].y);
			if (ti(B[b].x) + 1 == 20)cout << "==";
			else cout << "  ";
			Setpos(B[b].x, B[b].y - 1);
			if (ti(B[b].x) == 20)cout << "======";
			else cout << "      ";
			if (B[b].life != 0) {
				B[b].y -= B[b].vy;
				B[b].x -= B[b].vx;
				if (B[b].what <= -3 && B[b].what >= -7) {
					if (B[b].x <= 7)B[b].x = 7;
					if (B[b].x >= 28)B[b].x = 28;
					else if (B[b].x >= B[b].a + 1 && B[b].How == 1)B[b].How = 0;
					else if (B[b].x <= B[b].a - 1 && B[b].How == 0)B[b].How = 1;
					if (B[b].How == 1 && B[b].vx >= -1)B[b].vx -= 0.2;
					if (B[b].How == 0 && B[b].vx <= 1)B[b].vx += 0.2;
				}
				if (B[b].what == -2) Color(3);
				if (B[b].what == -3) Color(4);
				if (B[b].what == -4) Color(1);
				if (B[b].what == -5) Color(0);
				if (B[b].what == -6) Color(6);
				if (B[b].what == -7) Color(5);
				if (B[b].what == -8) Color(2);
				if (B[b].what == -9) Color(14);
				if (T % 7 <= 1 && B[b].what == -5)Color(1);
				else if (T % 7 <= 1)Color(0);
				Setpos(B[b].x - 1, B[b].y);
				cout << "︹";
				Setpos(B[b].x + 1, B[b].y);
				cout << "︺";
				Setpos(B[b].x, B[b].y - 1);
				if (B[b].what == -2) cout << "﹝镖﹞";
				if (B[b].what == -3) cout << "﹝火﹞";
				if (B[b].what == -4) cout << "﹝水﹞";
				if (B[b].what == -5) cout << "﹝风﹞";
				if (B[b].what == -6) cout << "﹝雷﹞";
				if (B[b].what == -7) cout << "﹝磁﹞";
				if (B[b].what == -8) cout << "﹝血﹞";
				if (B[b].what == -9) cout << "﹝忍﹞";
				if (a == 1) Pan(-2, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == -11 || B[b].what == -12) {
			Nor;
			Setpos(B[b].x, B[b].y);
			if (ti(B[b].x) == 20)cout << "==";
			else cout << "  ";
			if (B[b].life != 0) {
				if (Magne > 0)B[b].How++, B[b].x = B[b].x + (X - B[b].x) / (10 - B[b].How) * 1.0, B[b].y = B[b].y + (Y - B[b].y) / (10 - B[b].How) * 1.0;
				B[b].y -= B[b].vy;
				Setpos(B[b].x, B[b].y);
				if (B[b].what == -10) Color(5);
				if (B[b].what == -11) Color(7);
				if (T % 7 <= 1)Color(0);
				cout << "◆";
				if (a == 1) Pan(-1, B[b].x, B[b].y, b);
			}
		}
		if (B[b].what == -13) {
			Nor;
			Setpos(B[b].x, B[b].y - 0.5);
			if (ti(B[b].x) == 20)cout << "===";
			else cout << "   ";
			if (B[b].life != 0) {
				if (B[b].a == 13880086) {
					if (Boss == 0) B[b].life = 0;
					else if (((Boss == 1 && abs(B[b].x - Bx1) + abs(B[b].y - By1) < 1.5) || (Boss == 2 && abs(B[b].x - Bx2) + abs(B[b].y - By2) < 1.5) || (Boss == 3 && abs(B[b].x - Bx3) + abs(B[b].y - By3) < 1.5) || (B[b].t == 5)) && B[b].life == 1) Bblo -= 8 + Lv * 2, B[b].life = 0;
					if (B[b].life != 0) {
						if (Boss == 1)B[b].x = B[b].x + (Bx1 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By1 - B[b].y) / (5 - B[b].t) * 1.0;
						if (Boss == 2)B[b].x = B[b].x + (Bx2 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By2 - B[b].y) / (5 - B[b].t) * 1.0;
						if (Boss == 3)B[b].x = B[b].x + (Bx3 - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (By3 - B[b].y) / (5 - B[b].t) * 1.0;
					}
				} else {
					if (B[B[b].a].life == 0) B[b].life = 0;
					else if ((abs(B[b].x - B[B[b].a].x) + abs(B[b].y - B[B[b].a].y) < 1.5 || (B[b].t == 5)) && B[b].life == 1) Exp += 2, B[B[b].a].life = B[b].life = 0;
					if (B[b].life != 0) {
						B[b].x = B[b].x + (B[B[b].a].x - B[b].x) / (5 - B[b].t) * 1.0, B[b].y = B[b].y + (B[B[b].a].y - B[b].y) / (5 - B[b].t) * 1.0;
					}
				}
				Setpos(B[b].x, B[b].y - 0.5);
				if (T % 6 < 3)Color(5);
				else Color(4);
				cout << "●";
			}
		}
	}
	if (br < bl) {
		br = -1, bl = 0;
		memset(B, 0, sizeof(B));
	}
	Color(0);
}
void Move() {
	if (X < 3) X = 3;
	if (Y < 1) Y = 1, Vy = 0;
	if (Y > 29) Y = 29, Vy = 0;
	if (Ice != 0) {
		X -= Vx / 2.0;
		Y += Vy / 2.0;
		Vy = fmax(Vy - 0.025, (float)0);
		if (T % 6 == 0 && Up == 0 && Y < Ding) Y += 0.25;
		if (T % 6 == 3 && Up == 0 && Y >= Ding) Y -= 0.25;
		if (Up == 0 && Y <= Ding - 1.25) Vy = 0.25;
		if (Up == 0 && Y >= Ding + 1.25 && Wind == 0) Vy = -0.25;
		if (Up == 0 && Down == 0 && Vx > 0 && X <= 18) Up = 0, Down = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";
		else if (Down == 2 && X <= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";
		else if (Up == 0 && Down == 1 && Vx < 0 && X >= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";
		else if (Up > 0 && Down == 0 && X > 18) Up = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";
		else if (Down == 2) Vx += 0.175;
		else if (Up > 0 && Upt == 0) Vx -= 0.175;
		else if (Up > 0 && Upt > 0) {
			Vx = fmax(Vx - 0.125, (float)0);
			if (Upt == 1 && T % 2 == 0)Map(-1, 0);
			if (T % 2 == 0)Upt--;
		}
	} else {
		X -= Vx;
		Y += Vy;
		Vy = fmax(Vy - 0.05, (float)0);
		if (Wind == 0) {
			if (T % 6 == 0 && Up == 0 && Y < Ding) Y += 0.5;
			if (T % 6 == 3 && Up == 0 && Y >= Ding) Y -= 0.5;
		} else {
			if (T % 2 == 0 && Up == 0 && Y < Ding) Y += 0.5;
			if (T % 2 == 1 && Up == 0 && Y >= Ding) Y -= 0.5;
		}
		if (Up == 0 && Y <= Ding - 1.25) Vy = 0.5;
		if (Up == 0 && Y >= Ding + 1.25 && Wind == 0) Vy = -0.5;
		if (Up == 0 && Down == 0 && Vx > 0 && X <= 18) Up = 0, Down = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";
		else if (Down == 2 && X <= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";
		else if (Up == 0 && Down == 1 && Vx < 0 && X >= 22) Up = 0, Down = 1, Vx = 0, Vy = 0, X = 22, Setpos(20, Y - 2.5), cout << "==========";
		else if (Up > 0 && Down == 0 && X > 18) Up = 0, Vx = 0, Vy = 0, X = 18, Setpos(20, Y - 2.5), cout << "==========";
		else if (Down == 2) Vx += 0.35;
		else if (Up > 0 && Upt == 0) Vx -= 0.35;
		else if (Up > 0 && Upt > 0) {
			Vx = fmax(Vx - 0.25, (float)0);
			if (Upt == 1)Map(-1, 0);
			Upt--;
		}
	}
	for (int i = bl; i <= br; i++) {
		if (B[i].what < 98)if (B[i].x - B[i].vx <= 5 || B[i].x - B[i].vx >= 30 || B[i].y - B[i].vy <= 0 || B[i].y - B[i].vy >= 30) {
				B[i].life = 0;
				Map(1, i);
			}
		for (int j = 0; j < 20; j++)if (B[i].what > 0 && B[i].life != 0 && abs(B[i].x - I[j][0]) < 2 && B[i].y - I[j][1] <= 2) {
				Setpos(I[j][0], I[j][1]);
				if (I[j][0] == 20) cout << "===";
				else cout << "   ";
				I[j][0] = I[j][1] = -1;
				B[i].life = 0;
				Exp += 2;
			}
		if (B[i].t >= 100)B[i].life = 0;
		if (B[i].life == 0 && i == bl) bl++;
		Map(1, i);
		if (B[i].life == 0) continue;
		else {
			B[i].t++;
			if (B[i].what == 1) {
				if (B[i].y <= 25 && B[i].How == 0) B[i].vy = 0, B[i].How = 1;
				if (B[i].t == 30) B[i].y += 1.5, B[i].How = 2;
				if (B[i].t == 35) B[i].vy = 1.5, B[i].How = 3;
			}
			if (B[i].what == 2) {
				if (B[i].t % 3 == 0) B[i].How = !B[i].How;
			}
			if (B[i].what == 3 || B[i].what == 5) {
				if (B[i].what == 3 && B[i].y <= 20) B[i].vy = 0;
				if (B[i].what == 5 && B[i].y <= 21) B[i].vy = 0;
				if (B[i].t > 30 && B[i].t % 2 == 0) B[i].How = !B[i].How;
				if (B[i].what == 5 && B[i].t <= 30 && B[i].x < X) B[i].vx = -0.2;
				else if (B[i].what == 5 && B[i].t <= 70 && B[i].x > X) B[i].vx = 0.2;
				else B[i].vx = 0;
				if (B[i].t == 45) {
					B[i].life = 0;
					br++;
					B[br].what = 4;
					B[br].x = B[i].x;
					B[br].y = 32;
					B[br].vy = 3;
					B[br].life = 1;
				}
			}
			if (B[i].what == 6 || B[i].what == 8 || B[i].what == 9) {
				if (B[i].vx < 0.25 && B[i].vy < 0.25 && B[i].t >= 50) {
					B[i].life = 0;
					if (B[i].life == 0 && i == bl) bl++;
					Map(1, i);
					break;
				}
				if (B[i].t % 5 == 0) B[i].How = rand() % 4;
				if (B[i].what == 9) {
					if (B[i].t == 7) {
X9:
						float xx = (rand() % 41) / 40.0, yy = (rand() % 41) / 40.0;
						if (xx <= 0.5 && yy <= 0.5) goto X9;
						for (int j = 1; j <= 4; j++) {
							br++, B[br].what = 9;
							B[br].t = 11;
							B[br].x = B[i].x, B[br].y = B[i].y, B[br].vx = xx, B[br].vy = yy;
							if (j % 2 == 0)swap(B[br].vx, B[br].vy), B[br].vy *= -1;
							if (j <= 2)B[br].vx *= -1, B[br].vy *= -1;
							B[br].life = 1;
						}
						B[i].life = 0;
					}
				}
				if (B[i].what == 8) {
					if (B[i].x > X && B[i].vx < 1.2) B[i].vx += fmax((float)0, 0.2 - B[i].t / 25);
					if (B[i].x < X && B[i].vx > -1.2) B[i].vx -= fmax((float)0, 0.2 - B[i].t / 25);
					if (B[i].y > Y && B[i].vy < 1.2) B[i].vy += fmax((float)0, 0.2 - B[i].t / 25);
					if (B[i].y < Y && B[i].vy > -1.2) B[i].vy -= fmax((float)0, 0.2 - B[i].t / 25);
				}
			}
			if (B[i].what >= 13 && B[i].what <= 15 && B[i].How != 0) {
				if (B[i].x == B[i].How)B[i].vx = 0, B[i].How = 0;
			}
			if (B[i].what == 16) {
				if (B[i].x < X && B[i].vx >= -1) B[i].vx -= 0.2;
				else if (B[i].x > X && B[i].vx <= 1) B[i].vx += 0.2;
			}
		}
		if (B[i].life == 1 && B[i].a == 0 && B[i].what > 0) {
			if (B[i].y > Y && abs(B[i].x - X) <= 3 && ((B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y)) < Dis) Dis = (B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y), Disb = i;
			else if (((B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y)) < Dis1) Dis1 = (B[i].x - X) * (B[i].x - X) + (B[i].y - Y) * (B[i].y - Y), Disb1 = i;
		}
	}
}
void Guai(int R, int r) {
	if (R == -1) {
		br++;
		B[br].what = -1;
		B[br].x = X + rand() % 3 - 1;
		B[br].y = Y + rand() % 3 - 1;
		B[br].life = 1;
	}
	if (R <= -2 && R >= -11) {
		br++;
		B[br].what = R;
		B[br].x = B[br].a = r;
		B[br].y = 29;
		if (R <= -3 && R >= -7)B[br].vx = -1;
		B[br].vy = 1;
		B[br].life = 1;
	}
	if (R == 0) {
		br++;
		B[br].what = 1;
		B[br].x = r;
		B[br].y = 29;
		B[br].vy = 1;
		B[br].life = 1;
	}
	if (R == 1) {
		br++;
		B[br].what = 2;
		B[br].x = r;
		B[br].y = 29;
		B[br].vy = 1;
		B[br].life = 1;
	}
	if (R == 2 || R == 3) {
		br++;
		B[br].what = 2 * R - 1;
		B[br].x = r;
		B[br].y = 29;
		B[br].vy = 1;
		B[br].life = 1;
	}
	if (R == 4) {
		br++;
		B[br].what = 6;
		if (r < 5)r = 5;
		if (r > 30)r = 30;
		B[br].x = r;
		if (r == 11 || r == 25) B[br].y = 29 - (rand() % 20);
		else B[br].y = 29;
X4:
		B[br].vx = (rand() % 21 - 10) / 30.0;
		B[br].vy = (rand() % 25) / 30.0;
		if (B[br].vx <= 0.8 && B[br].vy <= 0.8)goto X4;
		int rx = rand() % 50;
		if (rx == 0) B[br].vx = 0;
		B[br].life = 1;
	}
	if (R == 5) {
		br++;
		B[br].How = r;
		B[br].what = 7;
		if (B[br].How < 0) B[br].x = 19;
		if (B[br].How > 0) B[br].x = 21;
		B[br].y = 29;
		B[br].vy = 1;
		B[br].life = 1;
	}
}
void CpGuai(int R, float x, float y, float xx, float yy) {
	if (R == 4) {
		br++;
		B[br].what = 6;
		B[br].x = x;
		B[br].y = y;
		B[br].vx = xx;
		B[br].vy = yy;
		B[br].life = 1;
	}
	if (R == 6 || R == 7 || R == 8) {
		br++;
		B[br].what = 4 + R;
		B[br].x = x;
		B[br].y = y;
		B[br].vx = xx;
		B[br].vy = yy;
		B[br].life = 1;
	}
}
void MesGuai(int a, int rr) {
	int R = rand() % rr, r = -10086;
	if (R == 0) {
		if (a == 1) r = (5 + rand() % 8) * 2;
		if (a <= 3 && a != 1) r = 10 + rand() % 16;
		if (a == 4) r = rand() % 75 - 20;
		if (a == 5) r = 2 + rand() % 4;
		if (r != -10086) Guai(a, r);
	}
}
void NorGuai(int a, int b) {
	if (a == 1) {
		if (b == 1 || b == 41) Guai(0, 15), Guai(0, 17), Guai(0, 19);
		if (b == 21 || b == 61) Guai(0, 21), Guai(0, 23), Guai(0, 25);
		if (b == 81) Guai(0, 11), Guai(0, 13), Guai(0, 15), Guai(0, 17), Guai(0, 19);
		if (b == 101 || b == 141) Guai(0, 17), Guai(0, 19), Guai(0, 21), Guai(0, 23), Guai(0, 25);
		if (b == 121) Guai(0, 15), Guai(0, 17), Guai(0, 19), Guai(0, 21), Guai(0, 23);
		if (b >= 160 && b <= 260 && b % 10 == 0) Guai(0, b / 10 - 1);
		if (b >= 270 && b <= 370 && b % 10 == 0) Guai(0, 52 - b / 10);
		if (b >= 460 && b <= 560 && b % 10 == 0) Guai(0, b / 10 - 37), Guai(0, b / 10 - 36), Guai(0, b / 10 - 35);
		if (b >= 570 && b <= 670 && b % 10 == 0) Guai(0, 78 - b / 10), Guai(0, 77 - b / 10), Guai(0, 76 - b / 10);
		if (b >= 760 && b <= 960 && b % 10 == 0) Guai(0, b / 10 - 66), Guai(0, b / 10 - 65), Guai(0, 103 - b / 10), Guai(0, 104 - b / 10);
		if (b >= 1000 && b <= 1300) MesGuai(0, 30 - b / 50);
	}
	if (a == 2) {
		if (b <= 200 && b % 30 == 1) {
			int r = rand() % 4;
			if (r == 1) r = 0;
			for (int i = 0; i < 4; i++) if (i != r) Guai(1, i * 4 + 9);
		}
		if (b > 200 && b <= 220 && b % 5 == 1) Guai(1, 18);
		if (b > 220 && b <= 300 && b % 7 == 1) Guai(1, b / 5 - 26);
		if (b > 350 && b <= 370 && b % 5 == 1) Guai(1, 22);
		if (b > 370 && b <= 450 && b % 7 == 1) Guai(1, 96 - b / 5);
		if (b == 461 || b == 501 || b == 541) Guai(1, 13), Guai(1, 17), Guai(1, 21);
		if (b == 481 || b == 521 || b == 561) Guai(1, 17), Guai(1, 21), Guai(1, 25);
		if (b >= 561 && b <= 861 && b % 20 == 1) Guai(1, b / 40 + 5);
		if (b >= 561 && b <= 861 && b % 20 == 11) Guai(1, 35 - b / 40);
		if (b >= 801 && b <= 961 && b % 15 == 1) Guai(1, 20);
		if (b >= 1000 && b <= 1300) MesGuai(1, 30 - b / 50);
	}
	if (a == 3) {
		if (b == 1 || b == 61) Guai(3, 15), Guai(2, 17), Guai(2, 19);
		if (b == 31 || b == 91) Guai(2, 21), Guai(2, 23), Guai(3, 25);
		if (b >= 120 && b <= 220 && b % 10 == 0) Guai(2, b / 10 + 3);
		if (b >= 240 && b <= 340 && b % 10 == 0) Guai(2, 49 - b / 10);
		if (b >= 360 && b <= 460 && b % 20 == 0) Guai(2, b / 10 - 21), Guai(2, 61 - b / 10);
		if (b >= 480 && b <= 580 && b % 20 == 0) Guai(3, b / 10 - 33), Guai(3, 73 - b / 10);
		if (b >= 600 && b < 750 && b % 30 == 0) {
			for (int i = 0; i < 5; i++) Guai(3, i * 3 + 10);
		}
		if (b >= 750 && b < 830 && b % 10 == 0) if (b <= 200 && b % 40 == 1) Guai(2, X);
		if (b >= 830 && b < 910 && b % 20 == 0) Guai(2, X);
		if (b >= 910 && b < 980 && b % 10 == 0) Guai(2, X);
		if (b >= 1000 && b <= 1300) MesGuai(rand() % 2 + 2, 40 - b / 50);
	}
	if (a == 4) {
		if (b == 1) CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 21, 29, 0, 0.65);
		if (b == 41) CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 18, 29, 0, 0.65);
		if (b == 81) CpGuai(4, 5, 20, -0.4, 0.35), CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 30, 20, 0.25, 0.4), CpGuai(4, 21, 29, 0, 0.65);
		if (b == 121) CpGuai(4, 5, 20, -0.2, 0.35), CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 30, 20, 0.4, 0.4), CpGuai(4, 18, 29, 0, 0.65);
		if (b == 161) CpGuai(4, 10, 29, -0.4, 0.7), CpGuai(4, 14, 29, -0.2, 0.7), CpGuai(4, 21, 29, 0, 0.6), CpGuai(4, 10, 29, -0.2, 0.7), CpGuai(4, 14, 29, -0.1, 0.7), CpGuai(4, 18, 29, 0, 0.65);
		if (b >= 200 && b <= 500 && b % 40 == 1) {
			float r = 0, rr;
			for (int i = 1; i <= 5; i++) {
X5:
				rr = 0.7 + (rand() % 5) / 10.0;
				if (rr == r)goto X5;
				r = rr;
				CpGuai(4, i * 3 + 7, 29, 0, 0.5 + (rand() % 50) / 80.0);
			}
		}
		if (b > 540 && b <= 565 && b % 5 == 1) CpGuai(4, 5, 8, -2, 0.2);
		if (b > 590 && b <= 615 && b % 5 == 1) CpGuai(4, 30, 8, 1.5, 0.2);
		if (b > 640 && b <= 665 && b % 5 == 1) CpGuai(4, 5, 8, -1.5, 0.3);
		if (b > 690 && b <= 715 && b % 5 == 1) CpGuai(4, 30, 8, 2, 0.3);
		if (b >= 750 && b <= 950 && b % 20 == 1) {
			float r = 0, rr;
			for (int i = 1; i <= 3; i++) {
X6:
				rr = 0.7 + (rand() % 5) / 10.0;
				if (rr == r)goto X6;
				r = rr;
				CpGuai(4, i * 5 + 7 + (rand() % 3), 29, 0, 0.5 + (rand() % 50) / 200.0);
			}
		}
		if (b >= 1000 && b <= 1300) MesGuai(4, 5);
	}
}
void RandGood() {
	if (Biao > 0) {
		Biao--;
		Guai(-1, 0);
	}
	if (Gd[1] == 0) {
		Gd[1] = rand() % 1000 + 1;
		if (Win == 7)Gd[1] = 10086;
		Gd[3] = rand() % 16 + 8;
	} else if (Gd[1] <= 5) {
		Guai(-2 - Gd[1], Gd[3]);
		memset(Gd, 0, sizeof(Gd));
	} else if (Gd[1] >= 20 && Gd[1] < 27) {
		Guai(-8, Gd[3]);
		memset(Gd, 0, sizeof(Gd));
	} else if (Gd[1] >= 30 && Gd[1] < 37) {
		Guai(-9, Gd[3]);
		memset(Gd, 0, sizeof(Gd));
	} else if (Gd[1] >= 40 && Gd[1] < 70) {
		Gd[2]++;
		if (Gd[2] % 2 == 1)Guai(-10, Gd[3]);
		if (Gd[2] >= 9)memset(Gd, 0, sizeof(Gd));
	} else if (Gd[1] >= 70 && Gd[1] < 100) {
		Gd[2]++;
		if (Gd[2] % 2 == 1)Guai(-11, Gd[3]);
		if (Gd[2] >= 9)memset(Gd, 0, sizeof(Gd));
	} else if (Boss != 0 && Gd[1] >= 450 && Gd[1] <= 500) {
		Guai(-2, Gd[3]);
		memset(Gd, 0, sizeof(Gd));
	} else Gd[1] = 0;
	for (int i = 0; i < 20; i++) {
		if (I[i][0] == -1) continue;
		Setpos(I[i][0], I[i][1]);
		Color(0);
		if (I[i][0] == 20) cout << "===";
		else cout << "   ";
		I[i][1]++;
		if (I[i][0] >= 28 || I[i][0] <= 0 || I[i][1] >= 29) I[i][0] = I[i][1] = -1;
		else Color(1), Setpos(I[i][0], I[i][1]), cout << "■";
		Color(0);
	}
}
void Panboss(int bx, int by) {
	float Nox[4], Noy[4];
	Nox[0] = X, Noy[0] = Y;
	if (Down == 1 && X == 22) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;
	else if (Down == 2) Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;
	else if (Down == 1 || X < 18) Nox[1] = X - 1, Noy[1] = Y - 0.5, Nox[2] = -10, Noy[2] = -10;
	else Nox[1] = X + 1, Noy[1] = Y - 0.5, Nox[2] = X - 1, Noy[2] = Y - 0.5;
	for (int i = 0; i < 3; i++) {
		if ((Boss == 1 || Boss == 6) && Wind == 0 && Thun == 0 && abs(Nox[i] - bx) < 1 && abs(Noy[i] - by) < 1 && Bgo1[4] == 0) Blo -= 20, Bgo1[4] = 1, Killb = 20, Kill = 1;
		if ((Boss == 2 || Boss == 6) && Wind == 0 && Thun == 0 && abs(Nox[i] - bx) < 1 && abs(Noy[i] - by) < 1 && Bgo2[8] == 0) Blo -= 20, Bgo2[8] = 1, Killb = 20, Kill = 1;
	}
}
void Boss1() {
	for (int j = 0; j < 20; j++)if (abs(Bx1 - I[j][0]) < 2 && By1 - I[j][1] <= 2) {
			Setpos(I[j][0], I[j][1]);
			if (I[j][0] == 20) cout << "===";
			else cout << "   ";
			I[j][0] = I[j][1] = -1;
			Bblo -= 8 + Lv * 2;
			Exp += 2;
		}
	if (Bbr == Bbl && Bbr != 0) Bbr = Bbl = 0;
	for (int i = 1; i <= 3 + (Bbl - Bbr) / 5; i++)if (Bbr < Bbl) {
			Setpos(Bway[Bbr][0], Bway[Bbr][1]);
			if (Bway[Bbr][0] == 20) cout << "==";
			else cout << "  ";
			Bbr++;
		}
	if (Bwhat1 == 5) {
		int bx, by;
		Color(5);
		for (int i = 0; i < 10; i++) {
			bx = Bx1 - i * Bvx1 / 10.0;
			by = By1 - i * Bvy1 / 10.0;
			Setpos(bx, by), cout << "█";
			Bbl++;
			Bway[Bbl][0] = bx;
			Bway[Bbl][1] = by;
		}
		Color(0);
	}
	Bx1 -= Bvx1;
	By1 -= Bvy1;
	if (Bwhat1 == 0) {
X2:
		Bwhat1 = rand() % 7;
		if (Bwhat1 == 2 || Bwhat1 == 3) {
			if (By1 <= 10 || By1 > 25) goto X2;
		}
		if (Bwhat1 == 4) {
			if (By1 <= 15 || Bx1 < 20) goto X2;
			Bgo1[2] = Bx1;
			Bgo1[3] = By1 - 1;
		}
		if (Bwhat1 == 5) {
X0:
			Bgo1[3] = rand() % 4 + 1;
			Bvx1 = (rand() % 101) / 20.0;
			Bvy1 = (rand() % 101) / 20.0;
			if (Bgo1[3] <= 2) Bvx1 *= -1;
			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;
			if (abs(Bvx1) + abs(Bvy1) <= 3 || Out1)goto X0;
		}
		if (Bwhat1 == 6) {
			if (By1 <= 17 || By1 > 25) goto X2;
		}
	}
	if (Bwhat1 == 1) {
		Bgo1[1]++, Bgo1[2]++;
		int R = rand() % (5 - Bgo1[1]), r = rand() % (10 - Bgo1[2]);
		if (Out1) R = 0;
		if (R == 0) {
			int vx = Bvx1, vy = Bvy1;
			Bgo1[1] = 0;
			Bvx1 = (rand() % 101 - 20) / 50.0;
			Bvy1 = (rand() % 101 - 20) / 50.0;
			if (Bgo1[3] <= 2) Bvx1 *= -1;
			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;
			if (Out1) r = 0;
		}
		if (r == 0) Chang1
		}
	if (Bwhat1 == 2) {
		Bgo1[1]++;
		if (Bgo1[1] > 6) {
			Bvy1 = -0.3;
			br++;
			B[br].x = Bx1, B[br].y = By1 - 1;
			B[br].what = 6;
X3:
			B[br].vx = (rand() % 21 - 10) / 40.0;
			B[br].vy = (rand() % 25) / 30.0;
			if (B[br].vx <= 0.8 && B[br].vy <= 0.8)goto X3;
			int rx = rand() % 50;
			if (rx == 0) B[br].vx = 0;
			B[br].life = 1;
		}
		if (Bgo1[1] > 8) Chang1
		}
	if (Bwhat1 == 3) {
		Bgo1[1]++;
		if (Bgo1[1] > 6 && Bgo1[1] % 3 == 0) {
			Bvy1 = -0.3;
			br++;
			B[br].x = Bx1, B[br].y = By1 - 1;
			B[br].what = 8;
			B[br].life = 1;
		}
		if (Bgo1[1] > 15) Chang1
		}
	if (Bwhat1 == 4) {
		Bgo1[1]++;
		if (Bgo1[1] <= 8) {
			Setpos(Bgo1[2], Bgo1[3]);
			if (Bgo1[1] == 1)cout << " ";
			else if (Bgo1[1] > 1 && Bgo1[2] == 20) cout << "==";
			else cout << "  ";
			Bgo1[2]--;
			Setpos(Bgo1[2], Bgo1[3]);
			int r = rand() % 4;
			if (r % 2 == 0) Color(6);
			else Color(9);
			if (r < 2) cout << ") ";
			else cout << "】";
			Color(0);
		}
		if (Bgo1[1] == 6) Bgo1[5] = X, Bgo1[6] = Y;
		if (Bgo1[1] == 11) {
			Map(0, (bool)Kill);
			Setpos(Bgo1[5], Bgo1[6] + 1), cout << "  ";
			Setpos(Bgo1[5], Bgo1[6] - 1), cout << "  ";
			Setpos(Bgo1[5] + 1, Bgo1[6]), cout << "  ";
			Setpos(Bgo1[5] - 1, Bgo1[6]), cout << "  ";
			int bx, by, bvx = Bgo1[2] - Bgo1[5], bvy = Bgo1[3] - Bgo1[6];
			Color(6);
			int i = 0;
			while (1) {
				bx = Bgo1[2] - i * bvx / 30.0;
				by = Bgo1[3] - i * bvy / 30.0;
				if (bx <= 5 || bx >= 30 || by < 0 || by >= 29) break;
				Panboss(bx, by);
				Setpos(bx, by), cout << "█";
				Bbl++;
				Bway[Bbl][0] = bx;
				Bway[Bbl][1] = by;
				i++;
			}
			Color(0);
			Map(-1, 0);
			Chang1
		}
	}
	if (Bwhat1 == 5) {
		Bgo1[1]++, Bgo1[2]++;
		int R = rand() % (5 - Bgo1[1]), r = rand() % (10 - Bgo1[2]);
		if (Out1) R = 0;
		if (R == 0) {
			int vx = Bvx1, vy = Bvy1;
			Bgo1[1] = 0;
X1:
			Bvx1 = (rand() % 101 - 20) / 20.0;
			Bvy1 = (rand() % 101 - 20) / 20.0;
			if (Bgo1[3] <= 2) Bvx1 *= -1;
			if (Bgo1[3] % 2 == 1) Bvy1 *= -1;
			if (abs(Bvx1) + abs(Bvy1) <= 3 || abs(Bvx1 - vx) <= 1 || abs(Bvy1 - vy) <= 1)goto X1;
			if (Out1) r = 0;
		}
		if (r == 0) Chang1
		}
	if (Bwhat1 == 6) {
		Bgo1[1]++;
		if (Bgo1[1] > 6 && Bgo1[1] % 10 == 0) {
			By1 -= 1;
			br++;
			B[br].x = Bx1, B[br].y = By1 - 1;
			B[br].what = 9;
X30:
			B[br].vy = 1;
			B[br].life = 1;
		}
		if (Bgo1[1] > 31) Chang1
		}
}
void Boss2() {
	for (int j = 0; j < 20; j++)if (abs(Bx2 - I[j][0]) < 2 && By2 - I[j][1] <= 2) {
			Setpos(I[j][0], I[j][1]);
			if (I[j][0] == 20) cout << "===";
			else cout << "   ";
			I[j][0] = I[j][1] = -1;
			Bblo -= 8 + Lv * 2;
			Exp += 2;
		}
	if (Bbr == Bbl && Bbr != 0) Bbr = Bbl = 0;
	for (int i = 1; i <= 3 + (Bbl - Bbr) / 5; i++)if (Bbr < Bbl) {
			Setpos(Bway[Bbr][0], Bway[Bbr][1]);
			if (Bway[Bbr][0] == 20) cout << "==";
			else cout << "  ";
			Bbr++;
		}
	Bx2 -= Bvx2;
	By2 -= Bvy2;
	if (Bwhat2 == 0) {
X21:
		Bwhat2 = rand() % 7;
		if (Bwhat2 == 2) {
X31:
			for (int i = 1; i <= 3; i++) {
				Bgo2[i * 2 + 1] = rand() % 28 + 1, Bgo2[i * 2] = rand() % 25 + 5;
				if ((abs(Bgo2[i * 2] - Bx2) <= 2 && abs(Bgo2[i * 2 + 1] - By2) <= 2) || (abs(Bgo2[i * 2] - X) <= 2 && abs(Bgo2[i * 2 + 1] - Y) <= 2))goto X31;
			}
			if (Bgo2[2] == Bgo2[4] || Bgo2[2] == Bgo2[6] || Bgo2[6] == Bgo2[4] || Bgo2[5] == Bgo2[3] || Bgo2[3] == Bgo2[7] || Bgo2[5] == Bgo2[7]) goto X31;
		}
		if (Bwhat2 == 3) {
			Bgo2[2] = rand() % 2;
		}
		if (Bwhat2 == 4 || Bwhat2 == 5 || Bwhat2 == 6) {
			Bvy2 = -1.5;
			Bvx2 = -0.5;
		}
	}
	if (Bwhat2 == 1) {
		Bgo2[1]++, Bgo2[2]++;
		int R = rand() % (5 - Bgo2[1]), r = rand() % (30 - Bgo2[2]);
		if (Out2) R = 0;
		if (R == 0) {
			int vx = Bvx2, vy = Bvy2;
			Bgo2[1] = 0;
			Bvx2 = (rand() % 101 - 20) / 50.0;
			Bvy2 = (rand() % 101 - 20) / 50.0;
			if (Bgo2[3] <= 2) Bvx2 *= -1;
			if (Bgo2[3] % 2 == 1) Bvy2 *= -1;
			if (Out2) r = 0;
		}
		if (r == 0) Chang2
		}
	if (Bwhat2 == 2) {
		Bgo2[1]++;
		float bx, by, bvx, bvy;
		if (Bgo2[1] < 21) {
			for (int i = 1; i <= 3; i++) {
				bvx = Bgo2[i * 2] - Bx2, bvy = Bgo2[i * 2 + 1] - By2;
				if (Bgo2[1] <= 10) {
					Setpos(Bx2 + (Bgo2[1] - 1)*bvx / 10.0, By2 + (Bgo2[1] - 1)*bvy / 10.0);
					if (abs(Bx2 + (Bgo2[1] - 1)*bvx / 10.0 - 20) < 0.5)cout << "==";
					else cout << "  ";
					bx = Bx2 + Bgo2[1] * bvx / 10.0;
					by = By2 + Bgo2[1] * bvy / 10.0;
					Setpos(bx, by);
				} else Setpos(Bgo2[i * 2], Bgo2[i * 2 + 1]);
				int r = rand() % 4;
				if (r % 2 == 0) Color(3);
				else Color(10);
				if (r <= 1) cout << "×";
				else cout << "＋";
				Color(0);
			}
		}
		if (Bgo2[1] == 21) {
			Map(0, (bool)Kill);
			Color(3);
			int j = 0;
			for (int j = 0; j <= 30; j++)for (int i = 1; i <= 3; i++)for (int k = 1; k <= 4; k++) {
						if (k == 1) bvx = j, bvy = 0;
						if (k == 2) bvx = -j, bvy = 0;
						if (k == 3) bvx = 0, bvy = j;
						if (k == 4) bvx = 0, bvy = -j;
						bx = Bgo2[i * 2] + bvx, by = Bgo2[i * 2 + 1] + bvy;
						if (bx <= 5 || bx >= 30 || by < 0 || by >= 30) {
							continue;
						}
						Panboss(bx, by);
						Setpos(bx, by), cout << "█";
						Bbl++;
						Bway[Bbl][0] = bx;
						Bway[Bbl][1] = by;
					}
			Color(0);
			Map(-1, 0);
			Chang2
		}
	}
	if (Bwhat2 == 3) {
		Bgo2[1]++;
		if (Bgo2[1] <= 18) {
			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";
			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";
			if (Bgo2[1] % 4 == 0)Bgo2[3] = !Bgo2[3];
			if (Bgo2[1] % 6 < 3)Color(3);
			else Color(5);
			if (Bgo2[3] == 0) Setpos(X - 3, Y), cout << "▼", Setpos(X + 3, Y), cout << "▲", Bgo2[4] = (int)(X + 0.5), Bgo2[5] = (int)(Y + 0.5);
			if (Bgo2[3] == 1) Setpos(X, Y - 3), cout << " ", Setpos(X, Y + 3), cout << " ", Bgo2[4] = (int)(X + 0.5), Bgo2[5] = (int)(Y + 0.5);
			Color(0);
		}
		if (Bgo2[1] == 18) {
			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";
			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";
		}
		if (Bgo2[1] > 18 && Bgo2[1] <= 25) {
			Bgo2[3] = Bgo2[2];
			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "  ", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "  ", Color(0), Setpos(20, Bgo2[5]), cout << "==";
			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3.5), cout << "    ", Setpos(Bgo2[4], Bgo2[5] + 2.5), cout << "    ", Color(0), Setpos(20, Bgo2[5] + 2.5), cout << "====", Setpos(20, Bgo2[5] - 3.5), cout << "====";
			if (Bgo2[1] % 4 < 2)Color(3);
			else Color(5);
			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "▼", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "▲";
			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3), cout << " ", Setpos(Bgo2[4], Bgo2[5] + 3), cout << " ";
			Color(0);
		}
		if (Bgo2[1] == 25) {
			if (Bgo2[2] == 0) {
				Color(3);
				for (int i = 4; i <= 29; i++) {
					Setpos(i, Bgo2[5]), cout << "█";
					Bbl++;
					Panboss(i, Bgo2[5]);
					Bway[Bbl][0] = i;
					Bway[Bbl][1] = Bgo2[5];
				}
			}
			if (Bgo2[2] == 1) {
				Color(3);
				for (int i = 0; i <= 28; i++) {
					Setpos(Bgo2[4], i), cout << "█";
					Bbl++;
					Panboss(Bgo2[4], i);
					Bway[Bbl][0] = Bgo2[4];
					Bway[Bbl][1] = i;
				}
			}
			Chang2
		}
	}
	if (Bwhat2 == 4 || Bwhat2 == 5 || Bwhat2 == 6) {
		Bgo2[1]++;
		if (By2 > 27)Bvy2 = 0;
		if (Bx2 > 23)Bvx2 = 0;
		if (Bgo2[1] > 13 && Bgo2[1] % 3 == 0) {
			float t = By2 - Y, g = 0.35;
			if (Boss == 6) t /= 2.0;
			CpGuai(Bwhat2 + 2, Bx2, By2, (Bx2 - X) / t * 1.0 + (t - 1)*g / 2.0, 1);
		}
		if (Bgo2[1] > 20) Chang2
		}
}
void Boss3() {
#define Bean br++;B[br].what=13;B[br].x=Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;
	for (int j = 0; j < 20; j++)if (abs(Bx3 - I[j][0]) < 2 && By3 - I[j][1] <= 2) {
			Setpos(I[j][0], I[j][1]);
			if (I[j][0] == 20) cout << "===";
			else cout << "   ";
			I[j][0] = I[j][1] = -1;
			Bblo -= 8 + Lv * 2;
			Exp += 2;
		}
	Bx3 -= Bvx3;
	By3 -= Bvy3;
	if (Bwhat3 <= 8) {
		if (Bx3 > X && Bvx3 < 1.5) Bvx3 += 0.3;
		if (Bx3 < X && Bvx3 > -1.5) Bvx3 -= 0.3;
	}
	if (Bwhat3 == 0) {
X22:
		Bwhat3 = rand() % 12;
		if (Bwhat3 == 11 && abs(Bx3 - 20) <= 1)goto X22;
		if (Bwhat3 == 11)Bgo3[2] = rand() % 5;
	}
	if (Bwhat3 == 1) {
		Bgo3[1]++;
		if (Bgo3[1] == 6) {
			br++;
			B[br].what = 13;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = 1;
			B[br].How = (int)Bx3 - 4;
			B[br].life = 1;
			br++;
			B[br].what = 13;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = -1;
			B[br].How = (int)Bx3 + 2;
			B[br].life = 1;
			br++;
			B[br].what = 13;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].life = 1;
			Chang3
		}
	}
	if (Bwhat3 >= 2 && Bwhat3 <= 6) {
		Bgo3[1]++;
		if (Bgo3[1] == 6) {
			br++;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].what = 11 + Bwhat3;
			B[br].vy = 0.5 + (rand() % 100) / 80.0;
			if (Bwhat3 == 5)B[br].vy = B[br].vy * 3 / 4.0;
			B[br].life = 1;
			Chang3
		}
	}
	if (Bwhat3 == 7) {
		Bgo3[1]++;
		if (Bgo3[1] == 6) {
			br++;
			B[br].what = 14;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = 1;
			B[br].How = (int)Bx3 - 4;
			B[br].life = 1;
			br++;
			B[br].what = 14;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = -1;
			B[br].How = (int)Bx3 + 2;
			B[br].life = 1;
			br++;
			B[br].what = 14;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].life = 1;
			Chang3
		}
	}
	if (Bwhat3 == 8) {
		Bgo3[1]++;
		if (Bgo3[1] == 6) {
			br++;
			B[br].what = 15;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = 1;
			B[br].How = (int)Bx3 - 4;
			B[br].life = 1;
			br++;
			B[br].what = 15;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].vx = -1;
			B[br].How = (int)Bx3 + 2;
			B[br].life = 1;
			br++;
			B[br].what = 15;
			B[br].x = (int)Bx3 - 1, B[br].y = By3 - 1;
			B[br].vy = 1;
			B[br].life = 1;
			Chang3
		}
	}
	if (Bwhat3 == 9) {
		Bvx3 = 0;
		Bgo3[1]++;
		if (Bgo3[1] == 6 || Bgo3[1] == 8) {
			Bean
		}
		if (Bgo3[1] >= 8)Chang3
		}
	if (Bwhat3 == 10) {
		Bvx3 = 0;
		Bgo3[1]++;
		if (Bgo3[1] == 6 || Bgo3[1] == 8 || Bgo3[1] == 10 || Bgo3[1] == 12) {
			Bean
		}
		if (Bgo3[1] >= 12)Chang3
		}
	if (Bwhat3 == 11) {
		Bvx3 = 0;
		Bgo3[1]++;
		if (Bgo3[1] >= 8)for (int i = 1; i <= 4; i++) {
				br++;
				B[br].what = 80 + 100 * Bgo3[2] + Bgo3[1] * 4 + i;
				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 99;
				B[br].x = Bx3, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 99;
				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
			}
		if (Bgo3[1] >= 20) {
			for (int i = 1; i <= 4; i++) {
				br++;
				B[br].what = 98;
				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 98;
				B[br].x = Bx3, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 98;
				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
			}
			Chang3
		}
	}
}
void Ball(int ball) {
	if (ball == 1) {
		if (Fir < 3 && T % 8 == 0) Fir++;
		if (Fir > 0) {
			br++;
			B[br].what = -13;
			B[br].x = X;
			B[br].y = Y + rand() % 3 - 1;
			B[br].life = 1;
			if (Dis <= 30) B[br].a = Disb, B[Disb].a = 1, Fir--;
			else if (Boss != 0) B[br].a = 13880086, Fir--;
			else if (Dis != 13880087) B[br].a = Disb, B[Disb].a = 1, Fir--;
			else if (Dis1 != 13880087) B[br].a = Disb1, B[Disb1].a = 1, Fir--;
			else B[br].life = 0;
			Dis = Dis1 = 13880087;
		}
	}
	if (ball == 2) {
		if (T % 4 == 0)ib = (ib + 1) % 20, I[ib][1] = Y - 2;
		if (T % 16 == 0)I[ib][0] = X;
		if (T % 16 == 4)I[ib][0] = X - 1;
		if (T % 16 == 8)I[ib][0] = X + 1;
		if (T % 16 == 12)I[ib][0] = X - 2;
		if (T % 12 == 9)I[ib][0] = X + 2;
		if (Water == 1) {
			for (int i = X - 6; i <= X + 6; i++)ib = (ib + 1) % 20, I[ib][0] = i, I[ib][1] = Y - 2 - 0.5 * abs(i - X);
		}
	}
	if (ball == 3) {
		if (Wind > 5) {
			if (Y < Ding - 1)Vy = 5;
			else Vy = 0;
			if (Up >= 1) Vx = -5;
			if (Down == 2) Vx = 5;
		}
		if (Wind < 5) {
			if (Y > Ding - 1)Vy = -5;
			else Vy = 0;
			if (Up >= 1) Vx = -5;
			if (Down == 2) Vx = 5;
		}
		if (Wind == 5) {
			if (Boss == 2) Ding = 12.25;
			else Ding = 6.25;
			if (Boss != 0) Bblo -= 16 + Lv * 4;
			if (Boss == 1) Chang1 if (Boss == 2) Chang2 if (Boss == 3) Chang3 system("color 3F");
			Sleep(20);
			system("color 6F");
			Sleep(10);
			system("color 0F");
			system("cls");
			for (int i = bl; i <= br; i++)if (B[i].what > 0)B[i].life = 0;
			Setpos(20, 0);
			for (int i = 1; i <= 60; i++) printf("=");
		}
	}
	if (ball == 4) {
		if (Thun == 1) {
			if (Boss != 0) Bblo -= 16 + Lv * 4;
			if (Boss == 1) Chang1 if (Boss == 2) Chang2 if (Boss == 3) Chang3 system("color 9F");
			Sleep(20);
			system("color 6F");
			Sleep(10);
			system("color 0F");
			system("cls");
			for (int i = bl; i <= br; i++)if (B[i].what > 0)B[i].life = 0;
			Setpos(20, 0);
			for (int i = 1; i <= 60; i++) printf("=");
		}
	}
	if (ball == 5) {
		system("cls");
		Color(5);
		Setpos(10, 10);
		cout << "新天赋！";
Y:
		int rr = rand() % 4 + 2;
		Setpos(12, 10);
		if (rr == Ren) goto Y;
		if (rr == 2)cout << "水火四重奏（极稀有！！！！！）";
		if (rr == 3)cout << "空之舞";
		if (rr == 4)cout << "三段跳";
		if (rr == 5)cout << "瞬跳";;
		if (rr == 6)cout << "反重力跳跃";
		Setpos(14, 10);
		cout << "当前天赋：";
		if (Ren == 1)cout << "小无敌";
		if (Ren == 2)cout << "瞬跳";
		if (Ren == 3)cout << "空之舞";
		if (Ren == 4)cout << "三段跳";
		if (Ren == 5)cout << "水火四重奏（极稀有！！！！！）";
		Setpos(16, 10);
		cout << "换否？（y/n）";
G:
		char g = _getch();
		if (g == 'y')Ren = rr;
		else if (g != 'n')goto G;
		system("cls");
		Setpos(20, 0);
		Color(0);
		for (int i = 1; i <= 60; i++) printf("=");
	}
	if (ball == 6) {
		Color(4);
		for (float i = 1; i <= Bblo; i += Bblomax / 20.0)cout << "▄";
		Color(0);
		cout << ' ' << Bblo << "                              ";
		Color(0);
	}
	if (ball == 7) {
		Color(1);
		if (Win == 7 && T % 6 < 3)Color(3);
		for (float i = 1; i <= Blo; i += Blomax / 20.0)cout << "▄";
		Color(0);
		if (Win == 7 && T % 6 < 3)Color(3);
		printf(" %0.1f                              ", Blo);
	}
}

int  mp[2][7][8] = {


	//0:空的 1:■ :墙
	//3：☆ 4：★  //目的地和箱子
	//5：※		  //人
	//7:⊙		  //目的(3)和箱子(4)在一起
	//8：※		  //人(5)和目的(3)在一起
	//为让多种情况使用一种算法

	{
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 0, 0, 0, 0, 0, 0, 1,
		1, 3, 1, 0, 1, 1, 3, 1,
		1, 4, 0, 0, 4, 0, 3, 1,
		1, 0, 1, 0, 1, 1, 4, 1,
		1, 0, 0, 5, 0, 0, 0, 1,
		1, 1, 1, 1, 1, 1, 1, 1
	},
	{
		1, 1, 1, 1, 1, 1, 1, 1,
		1, 0, 0, 0, 0, 0, 0, 1,
		1, 3, 1, 0, 1, 1, 3, 1,
		1, 3, 4, 5, 4, 0, 3, 1,
		1, 4, 1, 0, 1, 1, 4, 1,
		1, 0, 0, 0, 0, 0, 0, 1,
		1, 1, 1, 1, 1, 1, 1, 1
	}
};
int cas = 0;	//为0表示第一关
//记录每一关的箱子数 或者是项目和目的在一起的总数
int boxSum[2] = {3, 4};
//地图绘图
void drawMap() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == 0)
				printf("\t\t");
			switch (mp[cas][i][j]) {
				//	//0:空的 1:■ :墙
				case 0:
					printf("  ");
					break;
				case 1:
					printf("■");
					break;
				//3：☆ 4：★  //目的地和箱子
				case 3:
					printf("☆");
					break;
				case 4:
					printf("★");
					break;
				//5：※		  //人
				case 5:
				case 8:
					printf("※");
					break;
				case 7:
					printf("⊙");
					break;
					//7:⊙		  //目的(3)和箱子(4)在一起
					//8：※		  //人(5)和目的(3)在一起
			}
		}
		printf("\n");
	}
}
//按键处理
void keyDown() {
	//分析按键过程
	//定位人在哪里
	//人有两种情况：第一个是：人，第二个：人站在目的上
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 8; j++) {
			if (mp[cas][i][j] == 5 || mp[cas][i][j] == 8) {
				break;
			}
		}
		if (mp[cas][i][j] == 5 || mp[cas][i][j] == 8) {
			break;
		}
	}

	char ch = _getch();	//看不见的字符输入，+头文件 conio.h
	switch (ch) {
		//72 80   75 77
		case 'w':
		case 'W':
		case 72:
			//下一个地方等于空地或者是目的 能走
			if (mp[cas][i - 1][j] == 0 || mp[cas][i - 1][j] == 3) {
				//3+5=8 ：表示目的和人在一起
				//新地方(map[i-1][j])人（5）来了
				mp[cas][i - 1][j] += 5;
				//老地方(map[i][j])人（5）走了
				mp[cas][i][j] -= 5;
			}
			//如果下一个是箱子，要进一步判断能走
			//注意点：箱子两种状态：箱子，箱子和目的在一起
			else if (mp[cas][i - 1][j] == 4 || mp[cas][i - 1][j] == 7) {
				//做箱子的下一个地方判断能不能走
				if (mp[cas][i - 2][j] == 0 || mp[cas][i - 2][j] == 3) {
					//新的地方箱子来了
					mp[cas][i - 2][j] += 4;
					//箱子的位置：箱子（-4）走了 人来（+5）
					mp[cas][i - 1][j] += 1;
					//原来的地方人走了
					mp[cas][i][j] -= 5;
				}

			}

			break;
		case 's':
		case 'S':
		case 80:
			//下一个地方等于空地或者是目的 能走
			if (mp[cas][i + 1][j] == 0 || mp[cas][i + 1][j] == 3) {
				//3+5=8 ：表示目的和人在一起
				//新地方(map[i-1][j])人（5）来了
				mp[cas][i + 1][j] += 5;
				//老地方(map[i][j])人（5）走了
				mp[cas][i][j] -= 5;
			} else if (mp[cas][i + 1][j] == 4 || mp[cas][i + 1][j] == 7) {
				//做箱子的下一个地方判断能不能走
				if (mp[cas][i + 2][j] == 0 || mp[cas][i + 2][j] == 3) {
					//新的地方箱子来了
					mp[cas][i + 2][j] += 4;
					//箱子的位置：箱子（-4）走了 人来（+5）
					mp[cas][i + 1][j] += 1;
					//原来的地方人走了
					mp[cas][i][j] -= 5;
				}

			}
			break;

		case 'a':
		case 'A':
		case 75:
			//下一个地方等于空地或者是目的 能走
			if (mp[cas][i][j - 1] == 0 || mp[cas][i][j - 1] == 3) {
				//3+5=8 ：表示目的和人在一起
				//新地方(map[i-1][j])人（5）来了
				mp[cas][i][j - 1] = mp[cas][i][j - 1] + 5;
				//老地方(map[i][j])人（5）走了
				mp[cas][i][j] = mp[cas][i][j] - 5;
				//j+=5  j=j+5

			} else if (mp[cas][i][j - 1] == 4 || mp[cas][i][j - 1] == 7) {
				//做箱子的下一个地方判断能不能走
				if (mp[cas][i][j - 2] == 0 || mp[cas][i][j - 2] == 3) {
					//新的地方箱子来了
					mp[cas][i][j - 2] += 4;
					//箱子的位置：箱子（-4）走了 人来（+5）
					mp[cas][i][j - 1] += 1;
					//原来的地方人走了
					mp[cas][i][j] -= 5;
				}

			}

			break;
		case 'D':
		case 'd':
		case 77:
			//下一个地方等于空地或者是目的 能走
			if (mp[cas][i][j + 1] == 0 || mp[cas][i][j + 1] == 3) {
				//3+5=8 ：表示目的和人在一起
				//新地方(map[i-1][j])人（5）来了
				mp[cas][i][j + 1] += 5;
				//老地方(map[i][j])人（5）走了
				mp[cas][i][j] -= 5;
			}

			//下一个地方是箱子，判断箱子的下一个地方是不是目的和空地
			else if (mp[cas][i][j + 1] == 4 || mp[cas][i][j + 1] == 7) {
				//做箱子的下一个地方判断能不能走
				if (mp[cas][i][j + 2] == 0 || mp[cas][i][j + 2] == 3) {
					//新的地方箱子来了
					mp[cas][i][j + 2] += 4;
					//箱子的位置：箱子（-4）走了 人来（+5）
					mp[cas][i][j + 1] += 1;
					//原来的地方人走了
					mp[cas][i][j] -= 5;
				}

			}
			break;
	}
}
//胜负判断
//用什么判断胜负： 箱子到达目的的个数
int gameOver() {
	int count = 0;
	//所有的地方找一遍
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (mp[cas][i][j] == 7)
				count++;
		}
	}
	return count;
}
//箱子数是零的时候也是胜利
int gameOver2() {
	int count = 3;
	//所有的地方找一遍
	for (int i = 0; i < 7; i++)

	{
		for (int j = 0; j < 8; j++) {
			if (mp[cas][i][j] == 3)
				count--;
		}
	}
	return count;
}
int paoku() {

	cout << "地铁跑酷即将开始！" << endl;
	system("color 4");
	Sleep(700);
	system("color 2");
	Sleep(800);
	system("color 6");
	Sleep(800);
	system("color 9");
	Sleep(3000);
	system("mode con cols=60 lines=37");
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	srand((unsigned)time(NULL));
	Win = 0;
	Ren = 1;
	Lv = 1;
	Blo = Blomax = 100;
	Expmax = 300;
	Hui = 15;
	X = 18, Y = 6;
ReStart:
	system("cls");
	memset(B, 0, sizeof(B));
	memset(I, -1, sizeof(I));
	T = 0;
	bl = 0;
	br = -1;
	Upt = 0;
Start:
	Blo = Blomax * 100;
	Ding = 6.25;
	memset(Bgo1, 0, sizeof(Bgo1));
	memset(Bgo2, 0, sizeof(Bgo2));
	memset(Bgo3, 0, sizeof(Bgo3));
	if (Win % 2 == 0) T = 0;
	if (Win % 2 == 0 && D == 0) {
		if (Win > 0)Ball(5);
		Boss = 0;
lL:
		L = rand() % 4 + 1;
		for (int i = 0; i <= Win / 2 - 1; i++)if (L == Ll[i]) goto lL;
		Ll[Win / 2] = L;
	}
	if (Win % 2 == 1 && D == 0) {
		if (Win == 7)Boss = 6, T = 0, Blomax += 100;
		else {
bl:
			Boss = rand() % 3 + 1;
			for (int i = 0; i <= 3; i++)if (Boss == Bl[i]) goto bl;
		}
		Bl[Win / 2] = Boss;
		Bwhat1 = Bwhat2 = Bwhat3 = 0, Bx1 = 10, By1 = 20, Bx2 = 15, By2 = 20, Bx3 = 21, By3 = 20;
		system("color 4C");
		Sleep(20);
		system("color 0F");
		Map(0, 1);
		Sleep(1000);
	}
	if (Win % 2 == 1) {
		Bblomax = 500 + (Win / 2) * 500;
		Bblo = Bblomax;
		if (Boss == 2) Ding = 12.25;
	}
	while (1) {
		T++;
		if (Wind == 0) {
			if (GetAsyncKeyState(VK_LEFT) & 0x8000) Vy = -(10 - abs(Ding - Y) * 1.5) / 20.0;
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) Vy = (10 - abs(Ding - Y) * 1.5) / 20.0;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000 && u1 == 0) {
			u1++;
			if (Down == 1) {
				Down = 0;
				Up = 0;
				if (Ren == 2)Map(-1, 0), Vx = 0, X = 18, Li = 5;
				else Vx = 7, Vy = 0.3;
			} else if (Up == 0 && Wind == 0) {
				Down = 0;
				Up = 1;
				if (Ren == 2)Map(-1, 0), Vx = 1, X = 10, Map(0, 3), Li = 5;
				else Vx = 2, Vy = 0.1;
			} else if (Up == 1 && Wind == 0) {
				Down = 0;
				Up = 2;
				if (Ren == 2)Map(-1, 0), Vx = 1, X -= 6, Map(0, 3), Li = 5;
				else Vx = 1.5, Vy = 0.1;
			} else if (Ren == 3 && Up == 2 && Wind == 0) {
				Down = 0;
				Up = 3;
				Vx = 1;
				Vy = 0.5;
				Upt = 30;
			} else if (Ren == 4 && Up == 2 && Wind == 0) {
				Down = 0;
				Up = 3;
				Vx = 1.8;
				Vy = 0.1;
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000 && u2 == 0) {
			u2++;
			if (Down == 1 && Ren == 5) {
				Down = 2;
				Up = 0;
				Vx = -1.7;
			} else {
				Down = 1;
				Up = 0;
				if (Ren == 2)Map(-1, 0), Vx = 0, X = 22, Map(0, 3), Li = 5;
				else {
					if (Upt != 0) Map(-1, 0), Upt = 0;
					Vx = -7;
				}
			}
		}
		if ((GetAsyncKeyState(VK_UP) & 0x8000) ? 0 : 1) u1 = 0;
		if ((GetAsyncKeyState(VK_DOWN) & 0x8000) ? 0 : 1) u2 = 0;
		if (kbhit()) {
			char g = _getch();
			if (g == ' ') Sleep(100), Setpos(4, 1), Sy++, system("pause");
		}
		if (Sy == 1) Setpos(4, 1), printf("                           "), Sy--;
		if (Drug == 0) Blo = fmin((float)Blomax, Blo + Hui / 100.0);
		else if (T % 10 == 0)Blo--;
		if (T % 20 == 0) {
			if (Kill != 0) Kill = 0;
			if (Lvl != 0) Lvl = 0;
		}
		if (Killb > 0) Killb--;
		if (Li > 0) Li--;
		if (Ice > 0) Ice--;
		if (Drug > 0) Drug--;
		if (Magne > 0) Magne--;
		if (Fire > 0) Ball(1), Fire--;
		if (Water > 0) Ball(2), Water--;
		if (Wind > 0) Ball(3), Wind--;
		if (Thun > 0) Ball(4), Thun--;
		if (Boss == 0) NorGuai(L, T % 1500);
		RandGood();
		if (T % 20 == 1)Exp++;
		if (T % 50 == 1) {
			Exp++;
			system("cls");
			Setpos(20, 0);
			Color(0);
			for (int i = 1; i <= 60; i++) printf("=");
			if (Win == 0 && T < 300) {
				Setpos(4, 6);
				cout << "↑/↓ 跳跃/下翻，←→ 些微移动（松手即返回）";
				Setpos(8, 6);
				cout << "球可以开启特殊效果，经验积满（300）可提升级别。";
				Setpos(8, 6);
				cout << "打败 7 波即胜利，打败 BOSS 有新天赋。";
				Setpos(10, 15);
				cout << "空格可以暂停。";
			}
		}
		Map(-1, 0);
		if (Boss == 1) Boss1();
		if (Boss == 2) Boss2();
		if (Boss == 3) Boss3();
		if (Boss == 6) Boss1(), Boss2(), Boss3();
		Move();
		Map(0, (bool)Kill);
		Color(0);
		Setpos(1, 1);
		Blo = fmin(Blo, (float)Blomax);
		if (Boss == 0)cout << "血量: " << (int)Blo << "  ";
		Color(0);
		Setpos(1, 9), cout << "死亡次数: " << D << "  ";
		Setpos(2, 1);
		Exp = min(Exp, Expmax);
		if (Exp >= Expmax)Exp = 0, Lv++, Lvl++, Hui++, Blomax += 5;
		if (Lvl > 0)Color(5);
		cout << "级别: " << Lv;
		Color(0);
		Setpos(2, 9);
		cout << "经验: " << Exp << "  ";
		if (Boss > 0) Setpos(3, 1), cout << "血量     : ", Ball(7);
		if (Boss > 0 && Boss != 6) Setpos(4, 1), cout << "怪物血量: ", Ball(6);
		if (Boss == 6) Setpos(1, 9), printf("时间: %0.1f s  ", T / 15.0);
		if (Win == 0) Sleep(55);
		if (Win == 1) Sleep(50);
		if (Win == 2) Sleep(35);
		if (Win == 3) Sleep(40);
		if (Win == 4) Sleep(25);
		if (Win == 5) Sleep(30);
		if (Win == 6) Sleep(20);
		if (Win >= 7) Sleep(17);
		if (Boss == 3 && Bblo <= 0) {
			for (int i = 1; i <= 4; i++) {
				br++;
				B[br].what = 98;
				B[br].x = Bx3 - 1, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 98;
				B[br].x = Bx3, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
				br++;
				B[br].what = 98;
				B[br].x = Bx3 - 2, B[br].y = By3 - 1 + i;
				B[br].vy = 4;
				B[br].life = 1;
			}
		}
		if ((Win % 2 == 0 && T >= 1400) || (Win % 2 == 1 && Bblo <= 0) || (Win == 7 && T >= 450) || Blo <= 0) {
			Map(-1, 0);
			break;
		}
	}
	if (Blo <= 0) {
		Sleep(1000);
		D++;
		system("color 7F");
		Setpos(15, 11);
		Color(4);
		cout << "GAME OVER...";
		Sleep(2000);
		goto ReStart;
	} else if (Win == 7) {
		Sleep(1000);
		system("color 6E");
		Setpos(15, 11);
		Color(5);
		cout << "YOU WIN !";
		Sleep(3000);
		Setpos(30, 0);
		return 0;
	} else Sleep(1000), Win++, D = 0;
	goto Start;
}
int xiang() {
	while (1) {
		printf("\n\t用方向键或w a s d键移动※推动★进入☆\n", cas + 1);
		printf("\n\t\t 共两关 第 %d 关\n", cas + 1);
		drawMap();
		if (gameOver() == boxSum[cas]) {
			cas++;
			if (cas == 2)
				break;
			else
				printf("\n\t\t 该关 OK！按任一键进继续\n");
		}
		keyDown();
		system("cls");
	}
	printf("游戏结束！");
	printf("\n");
	system("pause");
	return 0;
}
long long sr = 0;
using namespace std;
void brc() {
	system("cls");
	long long jy = 1, wd = 3;
	long long sy = 3, wj = 3;
	srand((int)time(0));
	long long n = rand() % 15 + 1;
	cout << "                                你是" << n << "号" << endl;
	cout << "                               正在分配身份" << endl;
	Sleep(1500);
	long long m[20];
	for (long long i = 1; i <= 15; i++)
		m[i] = 1;
	long long s[20] = {0};
	long long yy[20] = {0};
	long long l = 0, w = 0, j = 0, p = 0;
	for (long long i = 1; i <= 15; i++) {
		do {
			long long a = rand() % 4 + 1;
			if (a == 1 && l < 1) {
				l++;
				s[i] = 1;
				sr = i;
			} else if (a == 2 && w < 2) {
				w++;
				s[i] = 2;
			} else if (a == 4 && p < 3) {
				p++;
				s[i] = 4;
			} else if (a == 3 && j < 9
			          ) {
				j++;
				s[i] = 3;
			}
		} while (s[i] == 0);
	}
	if (s[n] == 1)
		cout << "                               你是>>杀手<<" << endl;
	else if (s[n] == 2)
		cout << "                               你是>>预言家<<" << endl;
	else if (s[n] == 3)
		cout << "                               你是>>平民<<" << endl;
	else
		cout << "                               你是>>法师<<" << endl;
	cout << "                             游戏将在5秒后开始" << endl;
	Sleep(5000);
	long long c = 15;
	long long f = 0, flag = 0;
	long long day = 1;
	long long lr;
	long long tp[20] = {0};
	do {
		lr = 0;
		system("cls");
		cout << "                                 第" << day << "晚开始" << endl;
		cout << "你是" << n << "号" << endl;
		long long x;
		for (long long i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				if (s[n] == 1) {
					cout << "                                 你是杀手" << endl;
					for (long long j = 1; j <= 15; j++)
						if (m[j] == 1 && s[j] != 1)
							cout << j << " ";
					cout << endl;
					cout << "                                 你选择杀掉" << endl;
					long long a;
					cin >> a;
					m[a] = 0;
					cout << endl;
					cout << "                                 杀手杀了" << a << "号";
					if (s[a] == 1)
						cout << "(杀手)" << endl;
					else if (s[a] == 2)
						cout << "(预言家)" << endl;
					else if (s[a] == 3)
						cout << "(平民)" << endl;
					else
						cout << "(法师)" << endl;
					c--;
				} else if (s[n] == 2) {
					cout << "                                 你是预言家" << endl;
					cout << "                               ";
					for (long long j = 1; j <= 15; j++)
						if (m[j] == 1)
							cout << j << " ";
					cout << endl << "                              你选择预言谁的身份" << endl;
					long long a;
					cin >> a;
					if (s[a] == 1) {
						cout << "                        " << a << "号是杀手，请注意" << endl;
						Sleep(1000);
					} else
						cout << "                            " << a << "号是好人" << endl;
				}
			} else if (s[i] == 1 && m[i] == 1) {
				long long a;
				do {
					a = rand() % 15 + 1;
				} while (a == i || m[a] == 0 || s[a] == 1);
				cout << "                           杀手杀掉了" << a << "号";
				if (s[a] == 1)
					cout << "(杀手)" << endl;
				else if (s[a] == 2)
					cout << "(预言家)" << endl;
				else if (s[a] == 3)
					cout << "(平民)" << endl;
				else
					cout << "(法师)" << endl;
				m[a] = 0;
				c--;
				break;//
			} else if (s[i] == 2) {
				if (flag == 0 || m[flag] == 0) {
					long long a;
					do {
						a = rand() % 15 + 1;
					} while (a == i || m[a] == 0);
					if (s[a] == 1)
						yy[a] = 1;
					else if (s[a] == 3)
						yy[a] = 3;
				}
			} else if (s[i] == 4) {
				f = 0;
				while (f == 0) {
					long long a;
					a = rand() % 3 + 1;
					if (a == 3)break;
					if (a == 1) {
						if (sy > 0) {
							sy--;
							f = 1;
							long long b;
							do {
								b = rand() % 15 + 1;
								b = rand() % 15 + 1;
							} while (b == i || m[b] == 0);
							m[b] = 0;
							cout << "                           法师毒死了" << b << "号";
							if (s[b] == 1)
								cout << "(杀手)" << endl;
							else if (s[b] == 2)
								cout << "(预言家)" << endl;
							else if (s[b] == 3)
								cout << "(平民)" << endl;
							c--;
							if (s[b] == 1 && n != sr) {
								cout << endl << "							   " << sr << "号是杀手！";
								cout << endl << "								杀手已死亡！" << endl;
								cout << "                          	游戏结束" << endl;
								return ;
							}
							break;//
						}
					} else if (a == 2 && day > 1) {
						if (jy > 0) {
							jy--;
							f = 1;
							long long b;
							do {
								b = rand() % 15 + 1;
							} while (b == i || m[b] == 1);
							c++;
							cout << "                           法师复活了" << b << "号" << endl;
							m[b] = 1;
							if (m[sr] == 0 && n != sr) {
								cout << endl << "							   " << sr << "号是杀手！";
								cout << endl << "						杀手已死亡！" << endl;
								cout << "                          	游戏结束" << endl;
								return ;
							}
							break;//
						}
					}

				}
			}
		}
		if (s[n] == 4) {
			cout << "                                 你是法师" << endl;
			cout << "存活状况：" << endl;
			for (long long j = 1; j <= 15; j++)
				if (m[j] == 1)
					cout << j << " ";
			cout << endl;
			cout << "                        你选择 1.* 杀 *还是 2.* 救 * 3.* 啥都不做 *" << endl;
			long long a, f = 0;
			while (f == 0) {
				cin >> a;
				if (a == 3) break;
				if (a == 1) {
					if (wd > 0) {
						wd--;
						f = 1;
						cout << "                                你选择了杀人" << endl;
						for (long long i = 1; i <= 15; i++)
							if (m[i] == 1)
								cout << i << " ";
						cout << endl;
						long long b;
						cin >> b;
						if (s[b] == 1)
							cout << "(杀手)" << endl;
						else if (s[b] == 2)
							cout << "(预言家)" << endl;
						else if (s[b] == 3)
							cout << "(平民)" << endl;
						else
							cout << "(法师)" << endl;
						m[b] = 0;
						c--;
						if (m[sr] == 0 && n != sr) {
							cout << endl << "							   " << sr << "号是杀手！";
							cout << endl << "						杀手已死亡！" << endl;
							cout << "                          	游戏结束" << endl;
							return ;
						}
					} else {
						cout << ">>毒药<<不足" << endl;
					}
				} else if (a == 2) {
					if (wj > 0) {
						wj--;
						f = 1;
						cout << "你选择了复活" << endl;
						cout << "阵亡名单：" << endl;
						for (long long i = 1; i <= 15; i++)
							if (m[i] == 0)
								cout << i << "号,身份:" << s[i] << " " << endl;;
						long long b;
						cin >> b;
						m[b] = 1;
						c++;
					} else {
						cout << ">>复活药水<<不足" << endl;
					}
				}
			}
		}
		Sleep(1000);
		long double p[20] = {0};
		cout << "                                 第" << day << "晚结束" << endl;
		cout << endl;
		if (m[n] == 0) {
			cout << "                             你已经>>死<<了";
			break;
		}

		cout << "                                    存活：" << endl;
		cout << "                       ";
		for (long long i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << i << " ";
		cout << endl;
		cout << "                                    请投票...." << endl;
		for (long long i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				cout << endl;
				cout << "                                 你选择投几号" << endl;
				long long a = 99;
				while (a == 99) {
					cin >> a;
					if (a == 99)
						for (long long i = 1; i <= 15; i++)
							if (m[i] == 1)
								cout << "                                    " << i << "." << s[i] << endl;
				}
				if (s[i] == 3 && day > 4)
					p[a] += 1.5;
				else
					p[a]++;
				cout << endl;
				cout << "                                    " << i << "->" << a << endl;
				if (s[a] == 3) {
					tp[a] = i;
				}
			} else if (s[i] == 1 && m[i] == 1) {
				long long a;
				do {
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i || s[a] == 1);
				p[a]++;
				cout << "                                    " << i << "->" << a << endl;
				if (s[a] == 3) {
					tp[a] = i;
				}
			} else if (s[i] == 2 && m[i] == 1) {
				if (flag != 0) {
					p[f]++;
					cout << "                                    " << i << "->" << flag << endl;
				} else {
					long long a;
					do {
						a = rand() % 15 + 1;
					} while (m[a] == 0 || a == i || yy[a] == 3);
					p[a]++;
					if (s[a] == 3) {
						tp[a] = i;
					}
					cout << "                                    " << i << "->" << a << endl;
				}
			} else if (s[i] == 3 && m[i] == 1) {
				if (tp[i] == 0) {
					long long a;
					do {
						a = rand() % 15 + 1;
					} while (m[a] == 0 || a == i);
					p[a]++;
					cout << "                                    " << i << "->" << a << endl;
				} else {
					if (m[tp[i]] == 1) {
						p[tp[i]]++;
						cout << "                                    " << i << "->" << tp[i] << endl;
					} else {
						long long a;
						do {
							a = rand() % 15 + 1;
						} while (m[a] == 0 || a == i);
						p[a]++;
						cout << "                                    " << i << "->" << a << endl;
					}
				}
			} else if (s[i] == 4 && m[i] == 1) {
				long long a;
				do {
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i);
				p[a]++;
				cout << "                                    " << i << "->" << a << endl;
			}
		}
		system("cls");
		cout << "                                 投票情况：" << endl;
		for (long long i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << "                                 " << i << "号" << "  票数：" << p[i] << endl;
		long long sw, max = -100;
		for (long long i = 1; i <= 15; i++) {
			if (p[i] > max) {
				sw = i;
				max = p[i];
			}
		}
		m[sw] = 0;
		cout << "                                  " << sw << "死了" << endl;
		c--;
		cout << "                              " << sw << "号的身份是";
		if (s[sw] == 1)
			cout << "杀手" << endl;
		else if (s[sw] == 2)
			cout << "预言家" << endl;
		else if (s[sw] == 3)
			cout << "平民" << endl;
		else
			cout << "法师" << endl;
		if (s[sw] == 1 && n != sr) {
			cout << endl << "							   " << sr << "号是杀手！";
			cout << endl << "						杀手已死亡！" << endl;
			cout << "                          	游戏结束" << endl;
			return ;
		}
		day++;
		if (s[n] != 1) {
			for (long long i = 1; i <= 15; i++)
				if (s[i] == 1 && m[i] == 1)
					lr = 1;
		} else {
			if (s[n] == 1 && c == 2)
				lr = 0;
		}
		system("pause");
		cout << endl;
		if (m[sr] == 0 && n != sr) {
			cout << endl << "							   " << sr << "号是杀手！" << endl;
			cout << endl << "						杀手已死亡！" << endl;
			cout << "                          	游戏结束" << endl;
			return ;
		}
	} while (m[n] == 1 && c > 1);
	if (sr == n && m[n] == 1) {
		cout << "								你杀掉了所有人！！！" << endl;
	}
	cout << "                          	游戏结束" << endl;
	return ;
}
int lys() {

	srand((int)time(0));
	char a = '1';
	while (1) {
		system("cls");
		cout << "                                   			杀手游戏" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << "                                 		   1.开始游戏" << endl;
		cout << "                                		  2.查看游戏规则" << endl;
		a = getch();
		if (a == '1') {
			cout << "                                 		   1. 15人场" << endl;
			cout << "                          			2. 30人娱乐战(10猎人)<敬请期待>" << endl;
			a = '2';
			while (a == '2') {
				a = getch();
				switch (a) {
					case '1':
						brc();
						break;
				}
				if (a == '1')
					break;
			}
			if (a == '1')
				break;
		} else if (a == '2') {
			cout << "杀手：每当晚上的时候可使用杀人权杀掉一人" << endl; //1
			cout << "预言家：每天晚上可以知道一个人的身份" << endl; //2
			cout << "平民：无技能,当玩家是平民时，在第5天拥有1.5票的投票权" << endl; //3
			cout << "猎人：此身份仅限于30人娱乐局中，死亡后可带走一人" << endl;
			cout << "投票细则：\n（游戏中除了你以外全是由超级AI人工代替）" << endl;
			cout << "预言家如果预言到杀手将一直对他投票，如果预言到好人将永远不会对他投票" << endl;
			cout << "平民将投上一个晚上对他投票他的人" << endl;
			cout << "********利用好超级AI游戏规则找出杀手**********" << endl;
			system("pause");
		}
	}
	return 0;


}


#include<iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>

//里规格：长39*2=78 （真坐标）(假坐标宽为39)  高39

//外规格：长41*2=82 （真坐标）(假坐标宽为41)  高41

#define UP    1

#define DOWN  2

#define LEFT  3

#define RIGHT 4

#define MAX_LEVEL 8

#define BULLET_NUM 20

#define MAX_LIFE 4



//程序中未写入函数参数表中且未说明的变量只有map二维数组,level_info数组和level



/*
      此程序中涉及的x,y类的坐标值，分为以下两种：

假坐标：这里的坐标指的是以一个■长度为单位的坐标，而不是真正的coord坐标 (用于map数组的坐标)

真坐标：头文件自带的坐标结构coord中的坐标（也可以说是控制台里的真正坐标值）

  区别：纵坐标y两值一致，假横坐标x值与真正coord横坐标（真坐标）关系是 x * 2 = coord 横坐标

          coord横坐标既指GoTo函数中的x参数,因为本程序游戏界面以一个■长度为基本单位，

          可以说涉及的coord横坐标全是偶数。既假坐标要变真坐标（变真坐标才能发挥真正作用），横坐标须乘以2

*/

typedef struct             //这里的出现次序指的是一个AI_tank变量中的次序，游戏共有四个AI_tank变量

{
	//∵设定每个AI_tank每种特殊坦克只出现一次 ∴fast_tank & firm_tank 最多出现次数不超过1

	int fast_tank_order;   //fast_tank出现的次序(在第fast_tank_order次复活出现,从第0次开始)，且每个AI_tank只出现一次

	int firm_tank_order;   //firm_tank出现的次序，同上

} LevInfo;                 //关卡信息(准确说是该关出现的坦克信息)

LevInfo level_info [MAX_LEVEL] = {{-1, -1}, {3, -1}, {-1, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}}; //初始化，-1代表没有该类型坦克





typedef struct      //子弹结构体

{

	int x, y;       //子弹坐标,假坐标

	int direction;  //子弹方向变量

	bool exist;     //子弹存在与否的变量,1为存在，0不存在

	bool initial;   //子弹是否处于建立初状态的值，1为处于建立初状态，0为处于非建立初状态

	bool my;        //区分AI子弹与玩家子弹的标记,0为AI子弹，1为玩家（我的）子弹

} Bullet;

Bullet bullet [BULLET_NUM];  //考虑到地图上不太可能同时存在20颗子弹，所以数组元素设置20个





typedef struct      //坦克结构体

{

	int x, y;       //坦克中心坐标

	int direction;  //坦克方向

	int color;      //颜色参方向数，1到6分别代表不同颜色，具体在PrintTank函数定义有说明

	int model;      //坦克图案模型，值为1,2,3，分别代表不同的坦克图案,0为我的坦克图案，AI不能使用

	int stop;       //只能是AI坦克使用的参数，非0代表坦克停止走动,0为可以走动

	int revive;     //坦克复活次数

	int num;        //AI坦克编号（固定值，为常量，初始化函数中定下）0~3

	int CD;         //发射子弹冷却计时

	bool my;        //是否敌方坦克参数，我的坦克此参数为1,为常量

	bool alive;     //存活为1，不存活为0

}  Tank;

Tank AI_tank[4], my_tank;   //my_tank为我的坦克，Ai_tank 代表AI坦克



//∵所有的函数都有可能对全局变量map进行读写(改变)，

//∴函数中不另说明是否会对全局变量map读写

//基本操作与游戏辅助函数

void GoToxy(int x, int y);   //光标移动

void HideCursor();           //隐藏光标

void keyboard ();            //接受键盘输入

void Initialize();           //初始化(含有对多个数据的读写)

void Stop();                 //暂停

void Getmap();               //地图数据存放与获取

void Frame ();               //打印游戏主体框架

void PrintMap();             //打印地图(地图既地图障碍物)(含对level的读取)

void SideScreen ();          //副屏幕打印

void GameCheak();            //检测游戏输赢

void GameOver( bool home );  //游戏结束

void ClearMainScreen();      //主屏幕清屏函数∵system("cls")后打印框架有一定几率造成框架上移一行的错误∴单独编写清屏函数

void ColorChoose(int color); //颜色选择函数

void NextLevel();            //下一关(含有对level全局变量的读写)



//子弹部分

void BuildAIBullet(Tank *tank);                //AI坦克发射子弹（含有对my_tank的读取,只读取了my_tank坐标）

void BuildBullet  (Tank tank);                 //子弹发射（建立）（人机共用）(含全局变量bullet的修改)我的坦克发射子弹直接调用该函数,AI通过AIshoot间接调用

void BulletFly    (Bullet bullet[BULLET_NUM]); //子弹移动和打击（人机共用）,

void BulletHit    (Bullet* bullet);            //子弹碰撞（人机共用）(含Tank全局变量的修改)，只通过BulletFly调用，子弹间的碰撞不在本函数,子弹间碰撞已在BulletShoot中检测并处理

void PrintBullet  (int x, int y, int T);       //打印子弹（人机共用）

void ClearBullet  (int x, int y, int T);       //清除子弹（人机共用）

int  BulletCheak  (int x, int y);              //判断子弹前方情况（人机共用）



//坦克部分

void BuildAITank (int* position, Tank* AI_tank); //建立AI坦克

void BuildMyTank (Tank* my_tank);                //建立我的坦克

void MoveAITank  (Tank* AI_tank);                //AI坦克移动

void MoveMyTank  (int turn);                     //我的坦克移动，只通过keyboard函数调用，既键盘控制

void ClearTank   (int x, int y);                 //清除坦克（人机共用）

void PrintTank   (Tank tank);                    //打印坦克（人机共用）

bool TankCheak   (Tank tank, int direction);     //检测坦克dirtection方向的障碍物,返值1阻碍,0 畅通

int  AIPositionCheak (int position);           //检测AI坦克建立位置是否有障碍物AIPositionCheak



//DWORD WINAPI InputX(LPVOID lpParameter); //声明线程函数，用于检查X键输入并设置X键的输入冷却时间





//注意map数组应是纵坐标在前，横坐标在后，既map[y][x]，(∵数组行长度在前，列长度在后)

//map里的值: 个位数的值为地图方块部分，百位数的值为坦克,子弹在map上没有值(子弹仅仅是一个假坐标)

//map里的值: 0为可通过陆地，1为红砖，2黄砖，5为水，100~103为敌方坦克，200为我的坦克，



//全局变量

int mapa[41][41];  //地图二维数组

int key_x;        // X键是否被“读入”的变量，也是子弹是否可以发射的变，

int bul_num;      //子弹编号

int position;     //位置计数,对应AI坦克生成位置,-1为左位置,0为中间,1为右,2为我的坦克位置

int speed = 7;    //游戏速度,调整用

int level = 1;    //游戏关卡数

int score = 0;    //游戏分数

int remain_enemy; //剩余敌人(未出现的敌人)



char* tank_figure[4][3][4] =

{

	{

		{"◢┃◣", "◢━◣", "◢┳◣", "◢┳◣"},

		{"┣●┫", "┣●┫", "━●┃", "┃●━"},

		{"◥━◤", "◥┃◤", "◥┻◤", "◥┻◤"}

	},

	{

		{"┏┃┓", "┏┳┓", "┏┳┓", "┏┳┓"},

		{"┣●┫", "┣●┫", "━●┫", "┣●━"},

		{"┗┻┛", "┗┃┛", "┗┻┛", "┗┻┛"}

	},

	{

		{"┏┃┓", "◢━◣", "┏┳◣", "◢┳┓"},

		{"┣●┫", "┣●┫", "━●┃", "┃●━"},

		{"◥━◤", "┗┃┛", "┗┻◤", "◥┻┛"}

	},

	{

		{"╔┃╗", "╔╦╗", "╔╦╗", "╔╦╗"},

		{"╠█╣", "╠█╣", "━█╣", "╠█━"},

		{"╚╩╝", "╚┃╝", "╚╩╝", "╚╩╝"}

	}

};



int tk() {


	int i;

	unsigned int interval[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} ; //间隔计数器数组，用于控制速度

	srand(time(NULL)); //设置随机数种子(若不设置种子而调用rand会使每次运行的随机数序列一致)随机数序列指:如首次调用rand得到1,第二次得2,第三次3,则此次随机数序列为1,2,3

	HideCursor();                         //隐藏光标

	system("mode con cols=112 lines=42"); //控制窗口大小

	Frame ();                             //打印游戏主体框架

	Initialize();                         //初始化，全局变量level初值便是1

	//    HANDLE h1 , h2 ;                      //定义句柄变量

	for (;;)

	{

		if (interval[0]++ % speed == 0)   //速度调整用,假设interval[0]为a, 语句意为 a % 2==0,a=a+1;

		{

			GameCheak();                  //游戏胜负检测

			BulletFly ( bullet );

			for (i = 0 ; i <= 3 ; i++)    //AI坦克移动循环

			{

				if (AI_tank[i].model == 2 && interval[i + 1]++ % 2 == 0) //四个坦克中的快速坦克单独使用计数器1,2,3,4

					MoveAITank( & AI_tank[i]);

				if (AI_tank[i].model != 2 && interval[i + 5]++ % 3 == 0) //四个坦克中的慢速坦克单独使用计数器5,6,7,8

					MoveAITank( & AI_tank[i]);

			}

			for (i = 0; i <= 3; i++)                            //建立AI坦克部分

				if (AI_tank[i].alive == 0 && AI_tank[i].revive < 4 && interval[9]++ % 90 == 0) //一个敌方坦克每局只有4条命

				{
					//如果坦克不存活。计时,每次建立有间隔  1750 ms

					BuildAITank( &position, & AI_tank[i] );     //建立AI坦克（复活）

					break;                                      //每次循环只建立一个坦克

				}

			for (i = 0; i <= 3; i++)

				if (AI_tank[i].alive)

					BuildAIBullet(&AI_tank[i]);                 //AIshoot自带int自增计数CD,不使用main中的CD interval

			if (my_tank.alive && interval[10]++ % 2 == 0 )

				keyboard ();

			if (my_tank.alive == 0 && interval[11]++ % 30 == 0 && my_tank.revive < MAX_LIFE)

				BuildMyTank( &my_tank );

		}

		Sleep(5);

	}

	return 0;

}







/*//这里的多线程暂时不用                   //x键用于子弹发射，x键的冷却时间不能和上下左右一同设置，那样就太快了
DWORD WINAPI InputX(LPVOID lpParameter)    //如果不用多线程运行，那么在x键冷却时间内程序会因Sleep将会挂起，暂停运行
{                                          //因为只有一个变量改变，而且变量改变先后顺序是显而易见的，所以不必设置缓冲区
    for(;;)
    {
        if(GetAsyncKeyState( 88 )& 0x8000) //88为x键键值,当摁下x并且x键处于可输入状态
        {
            key_x=1;                       // X键是否允许被“读入”的变量，也是子弹是否可以发射的变量
            Sleep(600);                    // 子线程Sleep中，x就不能被"读入"，主线程每操作完一次子弹发射，key_x会归零
        }
        Sleep(10);
    }
    return 0;
}*/





void keyboard ()

{
	// kbhit()   getch()  用法可用但是不好用

	/*
	   函数功能:该函数判断在此函数被调用时,某个键是处于UP状态还是处于DOWN状态,及前次调用GetAsyncKeyState函数后,
	   是否按过此键.如果返回值的最高位被置位,那么该键处于DOWN状态;如果最低位被置位,那么在前一次调用此函数后,此键被按过,
	   否则表示该键没被按过.
	   这里GetAsyncKeyState比 kbhit() + getch() 好用,操作更顺畅.   GetAsyncKeyState的返回值表示两个内容，
	   一个是最高位bit的值，代表这个键是否被按下。一个是最低位bit的值,代表上次调用GetAsyncKeyState后，这个键是否被按下。
	   &为与操作，&0x8000就是判断这个返回值的高位字节。如果high-order bit是1,则是按下状态，否则是弹起状态，为0
	*/

	int count = 0;

	if (GetAsyncKeyState(VK_UP) & 0x8000)

		MoveMyTank( UP );

	else if (GetAsyncKeyState(VK_DOWN) & 0x8000)

		MoveMyTank( DOWN );

	else if (GetAsyncKeyState(VK_LEFT) & 0x8000)

		MoveMyTank( LEFT );

	else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)

		MoveMyTank( RIGHT );

	else if (GetAsyncKeyState( 0x1B ) & 0x8000) // Esc键

		exit(0);                                //退出程序函数

	else if (GetAsyncKeyState( 0x20 ) & 0x8000) //空格

		Stop();

	else if (count++ % 7 == 0)        //这里添加计数器是为了防止按键粘连不能达到微调效果

	{

		if (speed > 1 && GetAsyncKeyState( 0x6B ) & 0x8000) // +键

		{

			speed--;

			GoToxy(102, 11);          //在副屏幕打印出当前速度

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED);

			printf("%d ", 21 - speed); //副屏幕显示的速度为1~10

		}

		else if (speed < 20 && GetAsyncKeyState( 0x6D ) & 0x8000) // - 键

		{

			speed++;

			GoToxy(102, 11);          //在副屏幕打印出当前速度

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED);

			printf("%d ", 21 - speed); //副屏幕显示的速度为1~10

		}

	}

	if (my_tank.CD == 7)

	{

		if (GetAsyncKeyState( 88 ) & 0x8000)

		{

			BuildBullet(my_tank);

			my_tank.CD = 0;

		}

	}

	else
		
		my_tank.CD++;

}



void BuildAIBullet(Tank *tank)   //AI子弹发射(建立)含有对my_tank的读取

{

	if (tank->CD == 15)

	{

		if (!(rand() % 11))  //冷却结束后在随后的每个游戏周期中有10分之一的可能发射子弹

		{

			BuildBullet(*tank);

			tank->CD = 0;

		}

	}

	else

		tank->CD++;

	if (tank->CD >= 14)      //AI强化部分，在冷却到达一定范围即可使用

	{

		if (tank->y == 38 )  //如果坦克在底部(这个最优先)

		{

			if (tank->x < 20) //在老家左边

			{

				if (tank->direction == RIGHT) //坦克方向朝左

				{

					BuildBullet(*tank);     //发射子弹

					tank->CD = 0;

				}

			}

			else             //在老家右边

				if (tank->direction == LEFT) //坦克方向朝右

				{

					BuildBullet(*tank);     //发射子弹

					tank->CD = 0;

				}

		}

		else if (tank->x == my_tank.x + 1 || tank->x == my_tank.x || tank->x == my_tank.x - 1) //AI坦克在纵向上"炮口"对准我的坦克

		{

			if (tank->direction == DOWN && my_tank.y > tank->y || tank->direction == UP && my_tank.y < tank->y)

			{
				//若是AI朝下并且我的坦克在AI坦克下方(数值大的在下面)或者AI朝上我的坦克在AI上方

				int big = my_tank.y, smal = tank->y, i;

				if (my_tank.y < tank->y)

				{

					big = tank->y;

					smal = my_tank.y;

				}

				for (i = smal + 2; i <= big - 2; i++) //判断AI炮口的直线上两坦克间有无障碍

					if (mapa[i][tank->x] != 0 || mapa[i][tank->x] != 5) //若有障碍

						break;

				if (i == big - 1)           //若i走到big-1说明无障碍

				{

					BuildBullet(*tank);     //则发射子弹

					tank->CD = 0;

				}

			}

		}

		else if (tank->y == my_tank.y + 1 || tank->y == my_tank.y || tank->y == my_tank.y - 1) //AI坦克在横向上"炮口"对准我的坦克

		{

			if (tank->direction == RIGHT && my_tank.x > tank->x || tank->direction == LEFT && my_tank.x < tank->x)

			{
				//若是AI朝右并且我的坦克在AI坦克右方(数值大的在下面)或者AI朝左我的坦克在AI左方

				int big = my_tank.y, smal = tank->y, i;

				if (my_tank.x < tank->x)

				{

					big = tank->x;

					smal = my_tank.x;

				}

				for (i = smal + 2; i <= big - 2; i++) //判断AI炮口的直线上两坦克间有无障碍

					if (mapa[tank->y][i] != 0 || mapa[tank->y][i] != 5) //若有障碍

						break;

				if (i == big - 1) //若i走到big-1说明无障碍

				{

					BuildBullet(*tank);     //则发射子弹

					tank->CD = 0;

				}

			}

		}

	}

}







void BuildBullet(Tank tank)  //子弹发射（建立）,传入结构体Tank,这里包含改变了全局变量结构体bullet

{
	//∵实现方式为顺序循环建立子弹，每次调用改变的bullet数组元素都不同

	switch (tank.direction)  //∴为了方便,不将bullet放入参数,bullet作为全局变量使用

	{

		case UP    :

			bullet [bul_num].x = tank.x;

			bullet [bul_num].y = tank.y - 2;

			bullet [bul_num].direction = 1;

			break;

		case DOWN  :

			bullet [bul_num].x = tank.x;

			bullet [bul_num].y = tank.y + 2;

			bullet [bul_num].direction = 2;

			break;

		case LEFT  :

			bullet [bul_num].x = tank.x - 2;

			bullet [bul_num].y = tank.y;

			bullet [bul_num].direction = 3;

			break;

		case RIGHT :

			bullet [bul_num].x = tank.x + 2;

			bullet [bul_num].y = tank.y;

			bullet [bul_num].direction = 4;

			break;

	}

	bullet [bul_num].exist = 1;    //子弹被建立,此值为1则此子弹存在

	bullet [bul_num].initial = 1;  //子弹处于初建立状态

	bullet [bul_num].my = tank.my; //如果是我的坦克发射的子弹bullet.my=1，否则为0

	bul_num++;

	if (bul_num == BULLET_NUM)     //如果子弹编号增长到20号，那么重头开始编号

		bul_num = 0;               //考虑到地图上不可能同时存在20颗子弹，所以数组元素设置20个

}





void BulletFly(Bullet bullet[BULLET_NUM]) //子弹移动和打击

{
	//含有全局变量Bullet的改变

	for (int i = 0; i < BULLET_NUM; i++)

	{

		if (bullet [i].exist)             //如果子弹存在

		{

			if (bullet [i].initial == 0)  //如果子弹不是初建立的

			{

				if (mapa[bullet[i].y] [bullet[i].x] == 0 || mapa[bullet[i].y] [bullet[i].x] == 5) //如果子弹坐标当前位置无障碍

					ClearBullet( bullet[i].x, bullet[i].y, BulletCheak(bullet[i].x, bullet[i].y ));        //抹除子弹图形

				switch (bullet [i].direction)                                     //然后子弹坐标变化（子弹变到下一个坐标）

				{

					case UP    :
						(bullet [i].y)--;
						break;

					case DOWN  :
						(bullet [i].y)++;
						break;

					case LEFT  :
						(bullet [i].x)--;
						break;

					case RIGHT :
						(bullet [i].x)++;
						break;

				}

			}

			int collide = BulletCheak ( bullet [i].x, bullet [i].y );    //判断子弹当前位置情况,判断子弹是否碰撞,是否位于水面上。

			if ( collide )                                               //如果检测到当前子弹坐标无障碍(无碰撞)（包括在地面上与在水面上）

				PrintBullet( bullet[i].x, bullet[i].y, collide);         //则打印子弹，若有碰撞则不打印

			else

				BulletHit( & bullet [i] );     //若有碰撞则执行子弹碰撞函数

			if (bullet [i].initial)            //若子弹初建立，则把初建立标记去除

				bullet [i].initial = 0;

			for (int j = 0; j < BULLET_NUM ; j++) //子弹间的碰撞判断,若是我方子弹和敌方子弹碰撞则都删除,若为两敌方子弹则无视

				if (bullet [j].exist && j != i && (bullet[i].my || bullet[j].my) && bullet[i].x == bullet[j].x && bullet[i].y == bullet[j].y)

				{
					//同样的两颗我方子弹不可能产生碰撞

					bullet [j].exist = 0;

					bullet [i].exist = 0;

					ClearBullet( bullet[j].x, bullet[j].y, BulletCheak(bullet[j].x, bullet[j].y ));     //抹除j子弹图形,子弹i图形已被抹除

					break;

				}

		}

	}

}





void BulletHit(Bullet* bullet)  //含有Tank全局变量的修改,子弹间的碰撞不在本函数,子弹间碰撞已在BulletShoot中检测并处理

{
	//∵每次打中的坦克都不一样，不可能把所有坦克放在参数表中

	int x = bullet->x;          //∴这里的Tank使用全局变量

	int y = bullet->y;          //这里传入的值是子弹坐标,这两个值不需要改变

	int i;

	if (mapa[y][x] == 1 || mapa[y][x] == 2) //子弹碰到砖块

	{

		if (bullet->direction == UP || bullet->direction == DOWN) //如果子弹是纵向的

			for (i = -1 ; i <= 1 ; i++)

				if (mapa[y][x + i] == 1 || mapa[y][x + i] == 2) //如果子弹打中砖块两旁为砖块,则删除砖,若不是(一旁为坦克或其他地形)则忽略

				{

					mapa[y][x + i] = 0; //砖块碎

					GoToxy(2 * x + 2 * i, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); //背景黑色

					printf("  ");

				}

		if (bullet->direction == LEFT || bullet->direction == RIGHT) //若子弹是横向的  (与子弹纵向实现同理)

			for (i = -1 ; i <= 1 ; i++)

				if (mapa[y + i][x] == 1 || mapa[y + i][x] == 2)

				{

					mapa[y + i][x] = 0;

					GoToxy(2 * x, y + i);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); //背景黑色

					printf("  ");

				}

		bullet->exist = 0;         //这颗子弹已经不存在了

	}

	else if (mapa[y][x] == 4 || mapa[y][x] == 6 ) //子弹碰到边框或者不可摧毁方块

		bullet->exist = 0;

	else if (bullet->my && mapa[y][x] >= 100 && mapa[y][x] < 104 ) //若我的子弹碰到了敌方坦克

	{

		int num = mapa[y][x] % 100; //map[y][x]%100 等同于 tank.num ，可通过map值读取该坦克信息

		if (AI_tank[num].model == 3 && AI_tank[num].color == 2) //若为firm tank,且color==2。该坦克为绿色,表明没有受到伤害

			AI_tank[num].color = 3;                      //则变成黄色，color=3为黄色

		else if (AI_tank[num].model == 3 && AI_tank[num].color == 3)

			AI_tank[num].color = 4;                      //4为红色

		else                       //其他类型的坦克或者firm tank为红色的情况

		{

			AI_tank[num].alive = 0;

			ClearTank(AI_tank[num].x, AI_tank[num].y);       //清除该坦克

		}

		bullet->exist = 0;

		score += 100;

		GoToxy(102, 5);            //在副屏幕上打印出分数

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		printf("%d ", score);

	}

	else if (mapa[y][x] == 200 && bullet->my == 0 ) //若敌方子弹击中我的坦克

	{

		my_tank.alive = 0;

		ClearTank(my_tank.x, my_tank.y);

		bullet->exist = 0;

		my_tank.revive++;      //我的坦克复活次数+1(∵我的坦克复活次数与生命值有关∴放在这里自减)

		score -= 100;          //分数减少

		GoToxy(102, 5);        //在副屏幕上打印出分数

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		printf("%d   ", score);

		GoToxy(102, 7);        //在副屏幕打印出我的剩余生命值

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

		printf("%d   ", MAX_LIFE - my_tank.revive);

	}

	//    else if(bullet->my==0 && map[y][x]>=100 && map[y][x]<104) //敌方子弹击中敌方坦克,可以设置两种子弹运行方式,这种暂时不用

	//        bullet->exist=0;

	else if (mapa[y][x] == 9)   //子弹碰到家(无论是谁的子弹)

	{

		bullet->exist = 0;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

		GoToxy(38, 37);
		printf("      ");

		GoToxy(38, 38);
		printf("◢◣  ");

		GoToxy(38, 39);
		printf("███");

		GameOver(1);           //游戏结束,传入1代表老家被毁

	}

}





int BulletCheak (int x, int y) //判断子弹当前位置情况,判断子弹是否碰撞,是否位于水面上。

{
	//有障碍返回0,无障碍且子弹在地面返回1，子弹在水面上返回2

	if (mapa[y][x] == 0)

		return 1;

	else if (mapa[y][x] == 5)

		return 2;

	else

		return 0;

}





void PrintBullet (int x, int y, int T) //当前坐标BulletCheak 的值做参量 T

{

	if (T == 1)       //  T==1 表示子弹当前坐标在陆地上

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	else if (T == 2)  //  T==2 表示子弹当前坐标在水面上

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_BLUE);

	GoToxy(2 * x, y);

	printf("●");

}





void ClearBullet(int x, int y, int T) //当前坐标BulletCheak 的值做参量 T

{

	GoToxy(2 * x, y);

	if (T == 2)     //  T==2 表示子弹当前坐标在水面上

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

		printf("～");

	}

	else if (T == 1) //  T==1 表示子弹当前坐标在陆地上

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);

		printf("●");

	}

}





//position为坦克生成位置,-1为左位置,0为中间,1为右,2为我的坦克位置

void BuildAITank(int* position, Tank* AI_tank)   //执行一次该函数只建立一个坦克

{
	//rand函数公式：0<=rand()%(a+1)<=a  0+m<=rand()%(n-m+1)+m<=n

	//rand函数实现1到n：1<=rand()%(n)+1<=n

	if (AIPositionCheak(*position))       //若此位置无障碍,可生成。position参数详见AIPositionCheak函数定义

	{

		AI_tank->x = 20 + 18 * (*position); //20 + 18 * position 对应三个生成位置的x假坐标

		AI_tank->y = 2;

		if (AI_tank->revive == level_info[level - 1].firm_tank_order) //坦克出现(复活)次序==关卡信息(level_info)中firm tank的出现次序

		{

			AI_tank->model = 3;           //3为firm tank的模型(外观)

			AI_tank->color = 2;           //颜色参数2为绿色，具体详见函数ColorChoose

		}

		else if (AI_tank->revive == level_info[level - 1].fast_tank_order) //同上if，这里是fast_tank的

		{

			AI_tank->model = 2;

			AI_tank->color = rand() % 6 + 1; //若不是firm tank则随机颜色，颜色参数为1~6,分别代表不同颜色,详见函数ColorChoose

		}

		else      //普通坦克

		{

			AI_tank->model = 1;

			AI_tank->color = rand() % 6 + 1; //若不是firm tank则随机颜色

		}

		AI_tank->alive = 1;       //坦克变为存在

		AI_tank->direction = 2 ;  //方向朝下

		AI_tank->revive++;        //复活次数+1

		PrintTank(*AI_tank);

		(*position)++;

		remain_enemy--;

		GoToxy(102, 9);           //在副屏幕上打印剩余坦克数

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

		printf("%d ", remain_enemy);

		if (*position == 2)       //position只能为0,1，-1，这里position循环重置

			*position = -1;

		return ;                  //若生成了一辆坦克，则结束该函数

	}

}





int AIPositionCheak( int position )    //position为坦克生成位置2为我的坦克位置，其余为AI位，-1为左位，0为中间位置，1为右位

{

	int    x, y;

	if (position == 2)                 //2为我的坦克位置，现在暂时用不到

		x = 15, y = 38;

	else

		y = 2, x = 20 + 18 * position ; //20 + 18 * position 对应三个生成位置的x假坐标

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

			if ( mapa[y + j - 1][x + i - 1] != 0) //如果遍历的九宫格里有障碍物

				return 0;              //则返回0，表示此生成位置有阻碍

	return 1;                          //否则生成1，表示此生成位置无阻碍

}





void MoveAITank(Tank* AI_tank) //AI专用函数，该函数主要为AI加强

{

	if (AI_tank->alive)        //如果坦克活着

	{

		if (AI_tank->stop != 0) //坦克是否停止运动的判断，若stop参数不为0

		{

			AI_tank->stop--;   //则此坦克本回合停止运动

			return;

		}

		if ( !(rand() % 23) )  //22分之1的概率执行方向重置

		{

			AI_tank->direction = rand() % 4 + 1;

			if ( rand() % 3 )  //在方向重置后有2分之1的概率停止走动3步的时间

			{

				AI_tank->stop = 2;

				return;

			}

		}

		ClearTank (AI_tank->x, AI_tank->y);

		if (TankCheak ( *AI_tank, AI_tank->direction))   //如果前方无障碍

			switch ( AI_tank->direction )

			{

				case UP   :
					AI_tank->y--;
					break;  //上前进一格

				case DOWN :
					AI_tank->y++;
					break;  //下前进一格

				case LEFT :
					AI_tank->x--;
					break;  //左前进一格

				case RIGHT:
					AI_tank->x++;
					break;  //右前进一格

			}

		else                     //前方有障碍

		{

			if (!(rand() % 4))   //3分之1的概率乱转

			{

				AI_tank->direction = rand() % 4 + 1;

				AI_tank->stop = 2; //乱转之后停止走动3步的时间

				PrintTank(*AI_tank);

				return;          //∵continue会跳过下面的打印函数,∴这里先打印

			}

			else                 //另外3分之2的几率选择正确的方向

			{

				int j;

				for (j = 1; j <= 4; j++)

					if (TankCheak ( *AI_tank, j ))  //循环判断坦克四周有无障碍,此函数返值1为可通过

						break;

				if (j == 5)      //j==5说明此坦克四周都有障碍物，无法通行

				{

					PrintTank(*AI_tank);

					return;      //则跳过下面的while循环以防程序卡死

				}

				while (TankCheak ( *AI_tank, AI_tank->direction) == 0)  //如果前方仍有障碍

					AI_tank->direction = (rand() % 4 + 1);              //则换个随机方向检测

			}

		}

		PrintTank(*AI_tank);     //打印AI坦克

	}

}





void BuildMyTank (Tank* my_tank) //建立我的坦克

{

	my_tank->x = 15;

	my_tank->y = 38;

	my_tank->stop = NULL;

	my_tank->direction = 1;

	my_tank->model = 0;

	my_tank->color = 1;

	my_tank->alive = 1;

	my_tank->my = 1;

	my_tank->CD = 7;

	PrintTank (*my_tank) ;   //打印我的坦克

}





void MoveMyTank(int turn )   //玩家专用函数，turn为keyboard函数里因输入不同方向键而传入的不同的值

{

	ClearTank(my_tank.x, my_tank.y);         //map 数组中“我的坦克”参数清除工作已在此函数中完成

	my_tank.direction = turn;                //将键盘输入的方向值传入我的坦克方向值

	if (TankCheak ( my_tank, my_tank.direction ))  //若此时我的坦克当前方向上无障碍

		switch (turn)

		{

			case UP   :
				my_tank.y--;
				break;  //上前进一格

			case DOWN :
				my_tank.y++;
				break;  //下前进一格

			case LEFT :
				my_tank.x--;
				break;  //左前进一格

			case RIGHT:
				my_tank.x++;
				break;  //右前进一格

		}                                        //若坦克当前方向上有障碍则跳过坐标变化直接打印该转向的坦克

	PrintTank (my_tank);

}





bool TankCheak(Tank tank, int direction) //检测坦克前方障碍函数,参量为假坐标。返值1为可通过,返值0为阻挡(人机共用)

{

	switch (direction)                   //direction变量   1上，2下，3左，4右

	{

		case UP:

			if (mapa[tank.y - 2][tank.x] == 0 && mapa[tank.y - 2][tank.x - 1] == 0 && mapa[tank.y - 2][tank.x + 1] == 0)

				return 1;

			else

				return 0;

		case DOWN:

			if (mapa[tank.y + 2][tank.x] == 0 && mapa[tank.y + 2][tank.x - 1] == 0 && mapa[tank.y + 2][tank.x + 1] == 0)

				return 1;

			else

				return 0;

		case LEFT:

			if (mapa[tank.y][tank.x - 2] == 0 && mapa[tank.y - 1][tank.x - 2] == 0 && mapa[tank.y + 1][tank.x - 2] == 0)

				return 1;

			else

				return 0;

		case RIGHT:

			if (mapa[tank.y][tank.x + 2] == 0 && mapa[tank.y - 1][tank.x + 2] == 0 && mapa[tank.y + 1][tank.x + 2] == 0)

				return 1;

			else

				return 0;

		default:

			printf("错误！！");

			Sleep(5000);

			return 0;

	}

}





void ClearTank(int x, int y)  //清除坦克函数（人机共用）

{

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

		{
			//将坦克占用的地图上的九格去掉

			mapa[y + j - 1][x + i - 1] = 0;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);

			GoToxy(2 * x + 2 * j - 2, y + i - 1);

			printf("  ");

		}

}





void PrintTank(Tank tank)     //打印坦克（人机共用） 由于读取的Tank参数较多,故就不将参数一一传入了

{
	// tank.color参数对应不同的颜色,范围 1 ~ 6

	ColorChoose(tank.color);  //颜色选择函数   定义一个数组里装着字符指针(既装字符串)的数组指针(指向一维数组首地址的指针)

	char *(*tankF)[4] = tank_figure[tank.model];  //将二维数组首址赋初值给数组指针 model==0为我的坦克,4为电脑1坦克,8为电脑2,类推

	for (int i = 0; i < 3; i++)

	{

		GoToxy((tank.x - 1) * 2, tank.y - 1 + i); //在坦克中心坐标的左边，上中下三行打印

		printf("%s", tankF[i][tank.direction - 1]); //打印的是地址，地址既字符串

		for (int j = 0; j < 3; j++)

			if (tank.my)      //若为我的坦克

				mapa[tank.y + j - 1][tank.x + i - 1] = 200; //在map上把"坦克"九格填满代表敌我坦克的参数。敌方此值为100~103,我方为200

			else

				mapa[tank.y + j - 1][tank.x + i - 1] = 100 + tank.num; //这样可以通过map值读取坦克编号,读取操作在BulletHit 函数

	}

}





void HideCursor()  //隐藏光标

{
	//CONSOLE_CURSOR_INFO结构体包含控制台光标的信息,DWORD dwSize光标百分比厚度（1~100）和BOOL bVisible光标是否可见

	CONSOLE_CURSOR_INFO cursor_info = {1, 0};

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //SetConsoleCursorInfo用来设置指定的控制台光标的大小和可见性。

}





void GoToxy(int x, int y) //光标移动函数，X表示横坐标，Y表示纵坐标。

{

	COORD  coord;         //使用头文件自带的坐标结构

	coord.X = x;          //这里将int类型值传给short,不过程序中涉及的坐标值均不会超过short范围

	coord.Y = y;

	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE); //获得标准输出句柄

	SetConsoleCursorPosition(a, coord);        //以标准输出的句柄为参数设置控制台光标坐标

}





void ColorChoose(int color)   //颜色选择函数

{

	switch (color)

	{

		case 1:               //天蓝色(我的坦克颜色)

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

			break;

		case 2:               //绿色

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

			break;

		case 3:               //黄色

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);

			break;

		case 4:               //红色

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

			break;

		case 5:               //紫色

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

			break;

		case 6:               //白色

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

			break;

		case 7:               //深蓝色(∵颜色深难与黑色背景辨识度不高 ∴坦克颜色不选用此颜色),只用在字体颜色闪烁中

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

			break;

	}

}





void Stop()    //暂停

{

	int color = 1, timing = 0;

	while (1)

	{

		if (timing++ % 30 == 0)

		{

			ColorChoose(color);   //颜色选择

			GoToxy(100, 13);      //副屏幕打印

			printf("游戏暂停");

			GoToxy(88, 17);

			printf("按回车键回到游戏");

			GoToxy(88, 18);

			printf("或按 Esc键退出游戏");

			if (++color == 8)

				color = 1;

		}

		if (GetAsyncKeyState( 0xD ) & 0x8000)     //回车键

		{

			GoToxy(100, 13);      //副屏幕打印

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

			printf("正在进行");   //覆盖掉原来的提示

			GoToxy(88, 17);

			printf("                     ");

			GoToxy(88, 18);

			printf("                     ");

			break;

		}

		else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc键退出

			exit(0);

		Sleep(20);

	}

}





void ClearMainScreen()  //主屏幕清屏函数，因使用system("cls");再打印框架有一定几率造成框架上移一行的错误，所以单独编写清屏函数

{

	for (int i = 1; i < 40; i++)

	{

		GoToxy(2, i);

		printf("                                                                              ");

	}

}





void Frame ()     //打印游戏主体框架

{
	//SetConsoleTextAttribute为设置文本颜色和文本背景颜色函数

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("  ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf("  ▂▂▂▂▂▂▂▂▂▂▂▂▂ \n");

	for (int i = 0; i < 14; i++)

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

		printf("▕                                                                              ▏");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

		printf(" |                          |\n");

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("▕                                                                              ▏");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf(" |═════════════|\n");

	for (int i = 0; i < 24; i++)

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

		printf("▕                                                                              ▏");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

		printf(" |                          |\n");

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("  ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔  ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf(" ﹊﹊﹊﹊﹊﹊﹊﹊﹊﹊﹊﹊﹊﹊\n");

	SideScreen ();  //打印副屏幕

}





void PrintMap()     // 打印地图(地图既地图障碍物)

{

	for (int j = 0; j < 41; j++)

		for (int i = 0; i < 41; i++)

			if (mapa[i][j] == 6)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN

				                        | FOREGROUND_RED | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE);

				GoToxy(2 * j, i);

				printf("■");

			}

			else if (mapa[i][j] == 2)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);

				GoToxy(2 * j, i);

				printf("▓");

			}

			else if (mapa[i][j] == 1)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);

				GoToxy(2 * j, i);

				printf("▓");

			}

			else if (mapa[i][j] == 5)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

				GoToxy(2 * j, i);

				printf("～");

			}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

	GoToxy(38, 37);
	printf("◣◢");

	GoToxy(38, 38);
	printf("███");    //∵无论地图怎么变,家所在位置不变,且家的字符多种,不方便用上述方式打印

	GoToxy(38, 39);
	printf("◢█◣");    //∴直接打印(且家的map值与符号无关)

}





void GetMap()      //地图存放函数

{
	//map里的值: 个位数的值为地图方块部分，百位数的值为坦克

	int i, j;      //map里的值: 0为可通过陆地，1为红砖，2待定，5为水，100为敌方坦克，200为我的坦克，

	int Map[8][41][41] =

	{

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 4},

			{4, 6, 6, 6, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 6, 6, 6, 1, 1, 1, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 6, 6, 6, 1, 1, 1, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 6, 6, 6, 1, 1, 1, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 2, 2, 2, 1, 1, 1, 6, 6, 6, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 2, 2, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 4},

			{4, 2, 2, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 4},

			{4, 2, 2, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 1, 1, 1, 4},

			{4, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 4},

			{4, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 4},

			{4, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 4},

			{4, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 6, 6, 6, 6, 6, 6, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 6, 6, 6, 6, 6, 6, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 6, 6, 6, 6, 6, 6, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 4},

			{4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 1, 1, 1, 1, 4},

			{4, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4},

			{4, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 4},

			{4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 6, 6, 6, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 6, 6, 6, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 4},

			{4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 1, 1, 1, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

		{

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 6, 6, 6, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 5, 5, 5, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 5, 5, 5, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 5, 5, 5, 5, 5, 5, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 6, 6, 6, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 4},

			{4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 0, 0, 0, 4},

			{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}

		},

	};

	for (i = 0; i < 41; i++)

		for (j = 0; j < 41; j++)

			mapa[i][j] = Map[level - 1][i][j];

	PrintMap();         //打印地图

}





void GameOver(bool home)

{

	int timing = 0, color = 1;

	while (1)

	{

		if (timing++ % 30 == 0)    //游戏结束原因为生命值为0

		{

			ColorChoose(color);    //颜色选择

			if (home)              //游戏结束原因为老家被毁,则多打印一行字以提示玩家

			{

				GoToxy(37, 19);    //主屏幕中心打印

				printf("老家被毁!");

			}

			GoToxy(37, 20);        //主屏幕中心打印

			printf("游戏结束!");

			GoToxy(100, 13);       //副屏幕打印

			printf("游戏结束");

			GoToxy(88, 17);

			printf("请按回车键重新开始!");

			GoToxy(88, 18);

			printf("或按 Esc键退出游戏!");

			if (++color == 8)

				color = 1;

		}

		if (GetAsyncKeyState( 0xD ) & 0x8000) //回车键

		{

			//            system("cls");       //清屏,这里清屏后再次打印框架有一定几率造成框架上移一行的bug，因此选用自建清屏函数

			//            Frame ();            //重新打印游戏框架

			score -= 500;        //分数-500

			ClearMainScreen();   //主屏清屏函数，无需再次打印框架

			Initialize();        //从本关重新开始

			break;

		}

		else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc键退出

			exit(0);

		Sleep(20);

	}

}





void NextLevel()	{

	int timing = 0, color = 1;

	level++;

	if (level <= MAX_LEVEL)

		while (1)

		{

			if (timing++ % 10 == 0)

			{


				ColorChoose(color);   //颜色选择

				GoToxy(37, 20);       //主屏幕中心打印

				printf("恭喜过关!");

				GoToxy(100, 13);      //副屏幕打印

				printf("等待下关");

				GoToxy(87, 17);

				printf("请按回车键进入下一关!");

				GoToxy(88, 18);

				printf("或按 Esc键退出游戏!");

				if (++color == 8)

					color = 1;

			}

			if (GetAsyncKeyState( 0xD ) & 0x8000) //回车键

			{

				GoToxy(88, 17);       //抹除副屏幕中的提示

				printf("                     ");

				GoToxy(88, 18);

				printf("                     ");

				ClearMainScreen();   //主屏清屏函数，无需再次打印框架

				Initialize();        //初始化从下一关开始,level已++

				break;

			}

			else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc键退出

				exit(0);

			Sleep(20);

		}

	else   //level>8 通关

		while (1)

		{

			if (timing++ % 5 == 0)

			{

				ColorChoose(color);

				GoToxy(33, 20);       //主屏幕中心打印

				printf("恭喜通过全部关卡!");

				GoToxy(100, 13);      //副屏幕打印

				printf("已通全关");

				GoToxy(88, 17);

				printf("恭喜通过全部关卡!");

				GoToxy(88, 19);

				printf("按 Esc键退出游戏!");
				GoToxy(88, 20);
				printf("作者：刘俊民");

				if (++color == 8)

					color = 1;

			}

			if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc键退出

				exit(0);

			Sleep(10);

		}

}





void GameCheak()

{
	//剩余敌人为0且四坦克全部不存活

	if (remain_enemy <= 0 && !AI_tank[0].alive && !AI_tank[1].alive && !AI_tank[2].alive && !AI_tank[3].alive )

		NextLevel();        //进入下一关

	if (my_tank.revive >= MAX_LIFE) //我的生命值(复活次数)全部用完 MAX_LIFE

		GameOver(0);        //游戏结束，传入0代表我的复活次数用光(生命值为0)。游戏结束有两种判断，另一种是老家被毁

}





void SideScreen ()  //副屏幕 行(84起,110末,若双字符宽则在108打印最后一个字）列(11上屏末,13下屏初,39下屏末。为美观最好打在38)

{
	// |         第  d  关         |   " |                          |\n"

	GoToxy(93, 2);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	printf("第     关");

	GoToxy(92, 5);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("分  数：");

	GoToxy(92, 7);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("生  命：");

	GoToxy(86, 9);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	printf("剩余敌方坦克：");

	GoToxy(86, 11);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("当前游戏速度：  %d", 21 - speed);

	GoToxy(86, 13);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

	printf("当前游戏状态：");

	GoToxy(94, 19);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	GoToxy(94, 24);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	printf("帮  助");

	GoToxy(86, 27);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("方向键  ←↑→↓  移动");

	GoToxy(93, 29);

	printf("x 键 射击");

	GoToxy(89, 31);

	printf("+ - 调整游戏速度");

	GoToxy(90, 33);

	printf("游戏速度范围1~20");

	GoToxy(90, 35);

	printf("回车键 暂停游戏");

	GoToxy(90, 37);

	printf("Esc键  退出游戏");

	GoToxy(90, 39);

	printf("作者：刘俊民");

	/*    printf("帮  助");     //这是第二种详细说明的样式
	    GoToxy(86,21);
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	    printf("方向键  ←↑→↓  移动");
	    GoToxy(93,23);
	    printf("x 键 射击");
	    GoToxy(89,25);
	    printf("+ - 调整游戏速度");
	    GoToxy(90,27);
	    printf("游戏速度范围1~20");
	    GoToxy(90,29);
	    printf("回车键 暂停游戏");
	    GoToxy(90,31);
	    printf("Esc键  退出游戏");
	    GoToxy(86,33);
	    printf("敌方坦克全部消灭则过关");
	    GoToxy(87,34);
	    printf("己方坦克生命值为0 或");
	    GoToxy(86,35);
	    printf("正下方的老家被毁则失败");
	    GoToxy(86,36);
	    printf("己坦克与敌坦克子弹碰撞");
	    GoToxy(87,37);
	    printf("则抵消，敌坦克间子弹碰");
	    GoToxy(86,38);
	    printf("撞不抵消且可穿过敌坦克");*/

}





void Initialize()      //初始化

{

	remain_enemy = 16;

	my_tank.revive = 0; //我的坦克复活次数为0

	position = 0;

	bul_num = 0;

	GetMap();

	BuildMyTank( &my_tank );

	for (int i = 0; i < 12; i++) //子弹初始化

	{

		bullet [i].exist = 0;

		bullet [i].initial = 0;

	}

	for (int i = 0; i <= 3; i++)  //AI坦克初始化

	{

		AI_tank [i].revive = 0;

		AI_tank [i].alive = 0; //初始化坦克全是不存活的，BuildAITank()会建立重新建立不存活的坦克

		AI_tank [i].stop = 0;

		AI_tank [i].num = i;

		AI_tank [i].my = 0;

		AI_tank [i].CD = 0;

	}

	GoToxy(97, 2);                       //在副屏幕上关卡数

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);

	printf("%d", level);

	GoToxy(102, 5);                      //在副屏幕上打印分数

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("%d   ", score);

	GoToxy(102, 7);                      //在副屏幕打印我的剩余生命值

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("%d", MAX_LIFE - my_tank.revive);

	GoToxy(102, 9);                      //在副屏幕上打印剩余坦克数

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	printf("%d ", remain_enemy);

	GoToxy(100, 13);                     //在副屏幕上打印状态

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);

	printf("正在游戏");


}


int xyx_zjm() {
	Sleep(100);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                                游戏大厅 v1.5.7                              /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                                    1.猜数                                  /" << endl;
	Sleep(dhdd);
	cout << "/                                   2.贪吃蛇                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                   3.大跑酷                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                  4.箱子解密                                /" << endl;
	Sleep(dhdd);
	cout << "/                                   5.狼人杀                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                  6.坦克大战                                /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                             输入编号打开  404退出                          /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);

	int x_qn = 0;
	cout << "小游戏>"; //输入

	cin >> x_qn;

	switch (x_qn) {
		case 1: //猜数字
			while (1) {
				int num, cs = -999;
				srand((unsigned int)time (NULL));
				int sr;
				cout << "最大数是多少？（最少数为1）>";
				cin >> sr;
				num = rand() % sr + 1;
				for (int i = 0; cs != num; i++) { //正常猜数

					cout << "请猜数>" << endl;
					cin >> cs;
					if (cs > num) {
						cout << "大了！" << endl;
					}
					if (cs < num) {
						cout << "小了！" << endl;
					}
					if (cs > sr) {
						cout << "你太不认真了，这都啥数字啊" << endl;
					}
				}
				cout << "猜对了！" << endl;
				Sleep(50);
				int zl = 0;
				cout << "要退出吗？（1继续/0退）" << endl; //是否继续
				cin >> zl;
				if (zl == 0) {
					Sleep(250);
					break;
				} else {
					xyx_zjm();
				}



			}
			break;
		case 2:
			cout << "--------------------贪吃蛇---------------------" << endl;
			cout << "先选择难度.请在1-10中输入1个数,1最简单,10则最难" << endl;
			cout << "然后进入游戏画面,以方向键控制方向.祝你游戏愉快!" << endl;
			cout << "-----------------------------------------------" << endl;
			cout << "请输入难度级别：" ;
			m = 25;
			n = 40;
			if (m < 10 || n < 10 || m > 25 || n > 40) {
				cout << "ERROR" << endl;
				system("pause");
				return 0;
			}
			int hard;
			cin >> hard;
			if (hard <= 0 || hard > 100) {
				cout << "ERROR" << endl;
				system("pause");
				return 0;
			}
			/*** 数据全部初始化，包括蛇长，位置，方向 ***/
			snake_length = 5;
			clock_t a, b;
			char ch;
			double hard_len;
			for (int i = 0; i <= 4; i++) {
				snake[i].x = 1;
				snake[i].y = 5 - i;
			}
			dir = 3;
			/*** 输出初始地图，蛇与食物 ***/
			system("cls");
			hide();
			print_wall();
			print_food();
			print_snake();
			locate(m + 2, 0);
			cout << "现在长度是: ";
			/*** 开始游戏 ***/
			while (1) {
				/*** 难度随长度增加而提高 ***/
				hard_len = (double)snake_length / (double) (m * n);
				/*** 调节时间，单位是ms ***/
				a = clock();
				while (1) {
					b = clock();
					if (b - a >= (int)(400 - 30 * hard) * (1 - sqrt(hard_len))) break;
				}
				/*** 接受键盘输入的上下左右，并以此改变方向 ***/
				if (kbhit()) {
					ch = getch();
					if (ch == -32) {
						ch = getch();
						switch (ch) {
							case 72:
								if (dir == 2 || dir == 3)
									dir = 0;
								break;
							case 80:
								if (dir == 2 || dir == 3)
									dir = 1;
								break;
							case 75:
								if (dir == 0 || dir == 1)
									dir = 2;
								break;
							case 77:
								if (dir == 0 || dir == 1)
									dir = 3;
								break;
						}
					}

				}
				/*** 前进 ***/
				if (!go_ahead()) break;
				/*** 在最后输出此时长度 ***/
				locate(m + 2, 12);
				cout << snake_length;
			}
			break;
		case 3:
			paoku();

			break;
		case 4:
			xiang();

			break;
		case 5:
			lys();
			break;
		case 6:
			tk();
			break;
		default:
			cout << "输入有误" << endl;

			break;


	}

}

//管理员操作器（应用ID：7）
int gly() {
	cout << "欢迎来到管理员操作系统，专为开发人员和管理员使用" << endl;
	Sleep(100);
	while (1) {
		cout << "请输入您的管理员账户密码(如果退出输入404)：" << endl;
		int gl_s_password;
		cin >> gl_s_password;
		if (gl_s_password == 404) {
			return 0;
		} else {
			if (gl_s_password == gl_password) { //密码正确
				break; //跳出循环进行管理员管理
			} else {
				cout << "密码错误，未找到此管理员。请重新输入。" << endl;
			}
		}
	}
	Sleep(150);
	cout << "密码正确，已进入管理员系统" << endl;
	while (1) { //管理员主系统
		cout << "|=======================================wick DOS管理员=====================================|" << endl;
		Sleep(sd);
		cout << "|                                   管理员系统为管理员所做                                 |" << endl;
		Sleep(sd);
		cout << "|                                      版本：0.3.5测试                                     |" << endl;
		Sleep(sd);
		cout << "|                              欢迎管理员，请输入操作编号,404退出                          |" << endl;
		Sleep(sd);
		cout << "|==========================================================================================|" << endl;
		Sleep(sd);
		cout << "|                                       关闭所有程序（1）                                  |" << endl;
		Sleep(sd);
		cout << "|                                      将系统信息混乱（2）                                 |" << endl;
		Sleep(sd);
		cout << "|                                     删除当前用户文件（3）                                |" << endl;
		Sleep(sd);
		cout << "|==========================================================================================|" << endl;
		Sleep(sd);

		cout << "你的管理员密码：" << gl_password << endl;
		Sleep(sd);
		//输入
		int f_gl;
		cout << endl << "wkC-guanli>>";
		cin >> f_gl;
		switch (f_gl) {
			case 404:  //退出功能
				Sleep(200);
				cout << "已退出" << endl;
				return 0;
			case 1: //强制退出系统
				Sleep(500);
				cout << "<wkC.quit>" << endl;
				Sleep(1255);
				exit(1); //退出
				break;
			case 2:
				//用户信息乱改
				cout << "警告！系统信息已混乱！" << endl;
				hy = "系统已被入侵，混乱%^&*IKJ5H3?ad^&*IKIWE(ep4+", yhm = "hunluan,,364yiheorl^&I*O*(LP:O24", ah = "ahsdituyp;^&*()P{456";
				nl = 98828455;
				password = 12444392885;
				gl_password = 6286663;
				ma = 80303948;
				chi = 453;
				sf = 9927;
				w = "fiuyo8qrui%^IO:PP3", as = "^&^Ilo3u;proeuiU^U&I*O(366";
				gms = 8878787269;

				sd = 243673846;
				break;
			case 3:
				cout << "警告，此操作会导致您的账号彻底无法找回，是否确定？（1确定，0取消）" << endl; //提示
				//是否确定
				int glys = 0;
				cin >> glys;
				if (glys == 1) {
					break;
				}
				Sleep(200);
				//修改
				ofstream flie(yhm + "\\Username.txt");
				flie << yhm + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n此文件已被管理员删除";
				ofstream flie2(yhm + "\\Userage.txt");
				flie2 << nl + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n此文件已被管理员删除";
				ofstream flie3(yhm + "\\Usermima.txt");
				flie3 << password + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n此文件已被管理员删除";
				break;
		}

	}


}

//以下为winkodeC底层程序↓

int dh() {
	//加载动画
	if (VIP == false) {
		system("cls");
		cout << "%0";
		system("cls");
		cout << "%1▌";
		system("cls");
		cout << "%2▌▌";
		system("cls");
		cout << "%3▌▌▌";
		system("cls");
		cout << "%4▌▌▌▌";
		system("cls");
		cout << "%5▌▌▌▌▌";
		system("cls");
		cout << "%6▌▌▌▌▌▌";
		system("cls");
		cout << "%7▌▌▌▌▌▌▌";
		system("cls");
		cout << "%8▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%9▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%10▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%11▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%12▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%13▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%14▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%15▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%16▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%17▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%18▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%19▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%20▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%21▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%22▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%23▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%24▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%25▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%26▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%27▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%28▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%29▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		system("cls");
		cout << "%30▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%31▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%32▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%33▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%34▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%35▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%36▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%37▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%38▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%39▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%40▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%41▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(15);
		system("cls");
		cout << "%42▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(25);
		system("cls");
		cout << "%43▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(75);
		system("cls");
		cout << "%44▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%45▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%46▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%47▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%48▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%49▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%50▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%51▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%52▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%53▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%54▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%55▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%56▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%57▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%58▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%59▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%60▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%61▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%62▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%63▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%64▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(5);
		system("cls");
		cout << "%65▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%66▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%67▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%68▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%69▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%70▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%71▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%72▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%73▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(5);
		system("cls");
		cout << "%74▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(5);
		system("cls");
		cout << "%75▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(5);
		system("cls");
		cout << "%76▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%77▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%78▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%79▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(50);
		system("cls");
		cout << "%80▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(300);
		system("cls");
		cout << "%81▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(10);
		system("cls");
		cout << "%82▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%83▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%84▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%85▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%86▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%87▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%88▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%89▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%90▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%91▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%92▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%93▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%94▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%95▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%96▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%97▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%98▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%99▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(0);
		system("cls");
		cout << "%100▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
		Sleep(300);

		//占位
		cout << endl;
		return 0;
	} else if (VIP == true) {
		cout << "VIP专属快速加载..." << endl;
		Sleep(5);
		cout << endl << "---[" << 27 << "%] running---";
		Sleep(5);
		cout << endl << "---[" << 56 << "%] running---";
		Sleep(10);
		cout << endl << "---[" << 92 << "%] running---";
		cout << endl << endl;
		Sleep(10);
	}

}


//主界面(main)
int zjm() {
	Sleep(1500);
	cout << endl << endl << endl;
	//GUI界面

	cout << hy << endl << "当前用户：" << nl << "岁的" << yhm << endl << "-------------------------------" << endl;
	Sleep(100);
	if (VIP == true) {
		cout << "欢迎至尊用户" + yhm + "来到系统！" << endl << endl;
	}
	Sleep(sd);
	cout << "|==========================================wick DOS========================================|" << endl;
	Sleep(sd);
	cout << "|                                       wickDOS v1.5.39                                    |" << endl;
	Sleep(sd);
	cout << "|                                      build 300-OUI-2.5                                   |" << endl;
	Sleep(sd);
	cout << "|                                    version:4.6H.0.6.25x86                                |" << endl;
	Sleep(sd);
	cout << "|==========================================================================================|" << endl;
	Sleep(sd);
	cout << "|                                         计算机（1）                                      |" << endl;
	Sleep(sd);
	cout << "|                           xiaodao-BCG神经网络模型（2）[正在开发]                         |" << endl;
	Sleep(sd);
	cout << "|                                        系统设置（3）                                     |" << endl;
	Sleep(sd);
	cout << "|                                         便签纸（4）                                      |" << endl;
	Sleep(sd);
	cout << "|                                         小游戏（5）                                      |" << endl;
	Sleep(sd);
	cout << "|                                          终端（6）                                       |" << endl;
	Sleep(sd);
	cout << "|                                         管理器（7）                                      |" << endl;
	Sleep(sd);
	cout << "|==========================================================================================|" << endl;
	Sleep(sd);
	cout << "|                      输入应用对应数字(退出输入404，帮助输入505,808设置)                  |" << endl;
	Sleep(sd);
	cout << "|                      你也可以输入202来重启系统，303强制关机(不保留数据)                  |" << endl;
	Sleep(sd);
	cout << "|==========================================================================================|" << endl;
	Sleep(sd);
	cout << "你的密码：" << password << endl;
	Sleep(sd);
	//输入
	cout << "注意：请不要输入非数字的字符，请输入应用编号或指令编号。" << endl;
	Sleep(sd * 2);
	cout << endl << "wickDOS APP ID or instruct>>";
	return 0;
}


//设置定义代码<\>------------------------------------------------------------------------------------------------------------------------------------------

int zjm_sj() {
	int q = 0, d = sd - 5;

	Sleep(1500);
	cout << endl << endl << endl;
	//GUI界面
	cout << "|--------------------------------------------设置------------------------------------------|" << endl;
	Sleep(d);
	cout << "|                                           wickDOS                                        |" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                      设置 版本0.6.9.02                                   /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                    更改主界面动画速度（1）                               /" << endl;
	Sleep(d);
	cout << "/                                     更改加载动画速度（2）                                /" << endl;
	Sleep(d);
	cout << "/                                      更改开机提示语（3）                                 /" << endl;
	Sleep(d);
	cout << "/                                    查看winkode更新日志（5）                              /" << endl;
	Sleep(d);
	cout << "/                                          密码设置（6）                                   /" << endl;
	Sleep(d);
	cout << "/                               查看winkode和childsoft大事年表（7）                        /" << endl;
	Sleep(d);
	cout << "/                                          检查更新（8）                                   /" << endl;
	Sleep(d);
	cout << "/                                          权益SVIP（9）                                   /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                输入内容对应数字(退出输入404)                             /" << endl;
	Sleep(d);
	cout << "/                                                                                          /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	//输入
	cout << endl << "wkC-设置>>";
	cin >> q;
	return q;
}
int yy = 0;

int qnz() {
	while (true) {
		Sleep(350);
		int o = 0;
		o = zjm_sj();

		if (o == 0) {
			Sleep(150);
			cout << "正在强制退出设置-非法输入" << endl;
			Sleep(285);
			cout << "--EOF--" << endl;
			Sleep(35);
			zjm();
			break;
		}
		if (o == 404) {
			Sleep(350);
			cout << "-已退出设置-" << endl;
			Sleep(200);
			break;
		}

		switch (o) {
			case 1:
				cout << "请输入你要的值>>";
				cin >> sd;
				Sleep(500);
				cout << "-设置完成-" << endl;
				Sleep(295);
				break;
			case 2:
				cout << "请输入你要的值>>";
				cin >> dhdd;
				Sleep(500);
				cout << "-设置完成-" << endl;
				Sleep(295);
				break;
			case 3:
				cout << "请输入你要的值>>";
				cin >> hy;
				Sleep(500);
				cout << "-设置完成-" << endl;
				Sleep(295);
				break;
			case 5:
				Sleep(500);
				cout << "---------------------------------winkode更新日志---------------------------------" << endl;
				Sleep(35);
				cout << "1.sf.cpp                            -2023.11.26          一个简单的高精度加法机器" << endl;
				Sleep(35);
				cout << "2.高精度算法.cpp                    -2023.11.30          一个有用户界面的高精度加法机器，有优化" << endl;
				Sleep(35);
				cout << "3.高精度算法v0.2.0.cpp              -2023.12.2           优化用户界面，有GUI，还可查看具体内容" << endl;
				Sleep(35);
				cout << "4.高精度算法v0.2.103.7a.cpp         -2023.12.3           增加开发者模式和可调控个性化设置" << endl;
				Sleep(35);
				cout << "5.winkodeC_cs.cpp                   -2023.12.5           在高精度加法器基础上增加了文件管理和应用打开器，成为winkodeC" << endl;
				Sleep(35);
				cout << "6.winkodeC_cs2.cpp                  -2023.12.6           开始打磨winkodeC,增加许多功能，进入Alpha版" << endl;
				Sleep(35);
				cout << "7.winkodeC v2.5.01.cpp              -2023.12.8           进入beta测试版，新增用户界面，修复BUG" << endl;
				Sleep(35);
				cout << "8.winkodeC v3.0.1.2s.cpp            -2023.12.10          修复Bug，增加BCG，优化界面" << endl;
				Sleep(35);
				cout << "9.winkodeC v3.0.15b.cpp             -2023.12.11          修复重要问题-输入问题" << endl;
				Sleep(35);
				cout << "10.winkodeC v3.1.67a.cpp           -2023.12.15           优化了应用打开器（更名为Find），开发基本BCG界面和内核" << endl;
				Sleep(35);
				cout << "11.winkodeC sasiki.cpp              -2023.12.18          第一个正式版开发代号，新增内beta测试完毕，新增内容包括设置，Find，开机提\
				示语和底层内核优化，增加效果" << endl;
				Sleep(35);
				cout << "12.winkodeC sasiki1.10.2.cpp        -2023.12.20          主界面优化，增加密码机制，修改设置，增加登录系统，强化开机速度" << endl;
				Sleep(35);
				cout << "13.winkodeC sasiki1.10.9.cpp        -2023.12.24          修复已知问题，改善Find调用" << endl;
				Sleep(35);
				cout << "14.winkodeC sasiki1.15.5.cpp        -2023.12.27          主要更改BCG，开发BCG_Find系统，后续版本将继续开发BCG和新的应用程序(预更\
				名为winkodeC2024)" << endl;
				Sleep(35);
				cout << "15.winkodeC sasiki1.17.2.cpp        -2023.12.29          继续上一版的开发，做好了便签！更新了系统" << endl;
				Sleep(35);
				cout << "16.winkodeC sasiki1.19.1.cpp        -2024.1.3            继续更新winkodeC,做出了小游戏的文件层和基本的应用层，加速了开机，优化了\
				设置内容和系统，代码简洁了些，将在2022.1.10发布winkodeC sasiki5.0" << endl;
				Sleep(35);
				cout << "17.wickDOS 1.0.1.cpp                -2024.1.3            与winkodeC sasiki1.19.1一样，但以后会慢慢有不同，是要开发的另一款DOS系\
				统" << endl;
				Sleep(35);
				cout << "18.wickDOS 1.2.0(wickDOS-300).cpp   -2024.4.28           第一个wickDOS的发布版，更新了终端，小游戏等，优化了系统，使其与winkodeC\
				彻底分开，总体优化更自然。命名为wickDOS.300" << endl;
				Sleep(35);
				cout << "19.wickDOS300.cpp                  -2024.7.3            增加了管理员系统，并且对文件系统做了微调，300E的“E”代表easier，更好使\
				用，将来会制作wickDOS官网。" << endl;
				Sleep(35);
				cout << "20.wickDOS300E.cpp                  -2024.7.4            增加了VIP系统，加快加载速度。" << endl;
				Sleep(35);
				cout << "21.wickDOS300-OUI.cpp               -2024.7.6            优化了界面，更简洁的UI。修改VIP系统的问题和系统问题。" << endl;
				Sleep(35);
				cout << "21.wickDOS300-OUI.cpp               -2024.8.10           修复了长久以来的计算器问题，现在更方便了。" << endl;
				Sleep(35);
				Sleep(295);
				cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^当前版本" << endl;
				cout << "看完了输入1可退出>>";
				cin >> yy;
				if (yy == 1) {
					break;
				}

			case 6:
				Sleep(200);
				cout << "你要恢复密码（0）还是关闭密码（1）？";
				cin >> ma;
				Sleep(500);
				cout << "-已设置完成-" << endl;
				Sleep(25);
				break;

			case 7:
				Sleep(100);
				cout << "------------childsoft发展历程------------" << endl;
				Sleep(20);
				cout << "1. 2018.6.30          岛屿娱乐 成立！" << endl;
				cout << "2. 2021.8.22          小岛 开始尝试制作“操作系统”" << endl;
				cout << "3. 2023.8.27          第一个winkode(python)原始实现！" << endl;
				cout << "4. 2023.9.18          childsoft 成立！" << endl;
				cout << "5. 2023.10.8          第一个桌面化winkodeP—2.00原始实现！" << endl;
				cout << "6. 2023.10.19         基于移动端开发的winkodeWP原始实现！" << endl;
				cout << "7. 2023.11.3          第一个winkodeC原始实现！意味着winkode突破了python的牢笼！" << endl;
				cout << "8. 2023.11.22         深度开发winkodeC,开发代号sasiki（将在2024年3月结束开发）！" << endl;
				cout << "9. 2024.1.4           基于WKC的wickDOS系统原始实现！" << endl;
				cout << "10. 2024.1.24         WKC的文件管理系统，用户记录原始实现！" << endl;
				cout << "11. 2024.4.28         wickDOS的第一个版本300发布！" << endl;
				cout << "12. 2024.7.3          wickDOS的第一管理员系统原始实现！" << endl;
				Sleep(85);
				cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^最新大事" << endl;
				cout << "winkode/wickDOS系列系统将紧锣密鼓地开发新版本！" << endl;
				Sleep(200);
				int syy;
				cout << "按回车退出";
				cin >> syy;

				break;
			case 8:
				Sleep(150);
				cout << "正在加载..." << endl;
				Sleep(5000);
				cout << "-暂无更新-" << endl;
				Sleep(200);
				cout << "如有更新，请到winkodeC官网查看更新" << endl;
				Sleep(100);
				break;
			case 9:
				Sleep(200);
				cout << "接下来为您进行VIP和SVIP权益讲解：" << endl;
				Sleep(dhdd);
				cout << "VIP现有的权益：开机和加载变快，更好的主页。" << endl;
				Sleep(50);
				int sf_v = 0;
				cout << "是否现在支付VIP？(0/1)" << endl;
				cin >> sf_v;
				if (sf_v == 1) {
					cout << "现在开始VIP信息录入..." << endl;
					string V_ps;
					cout << "请输入您的VIP密码：" << endl;
					cin >> V_ps;

					cout << "-[100%]用户文件准备完毕" << std::endl;

					ofstream flie(yhm + "\\VIP.txt");
					flie << V_ps;
				}

				break;

		}

	}
	return 0;
}

//系统设置（APP ID：3）
int run_sj() {
	qnz();
	return 0;
}
//设置代码-结束</>=========================================================================================================================================

//Find-文件管理系统
int yonghu() {
	//用户主文件夹
	string folder_path = yhm;
	string cmd = "mkdir " + folder_path;
	if (system(cmd.c_str()) == 0) {
		cout << "-[100%]用户文件准备完毕" << std::endl;
	} else {
		cout << "发生错误！" << std::endl;
	}

	ofstream flie(yhm + "\\Username.txt");
	flie << yhm;
	ofstream flie2(yhm + "\\Userage.txt");
	flie2 << nl;
	ofstream flie3(yhm + "\\Usermima.txt");
	flie3 << password;

}
int dl() {
	cout << endl;
	Sleep(250);
	cout << "正在进入注册界面..." << endl;
	Sleep(500);
	cout << "请输入名字：";
	cin >> yhm;
	Sleep(300);
	cout << endl;
	cout << "请输入您的年龄：";
	cin >> nl;
	cout << endl;
	Sleep(200);
	cout << "请输入您的密码：（当前密码为" << password << "）";
	cin >> password;
	Sleep(425);
	yonghu();
	cout << "好的，注册完成，已登录。" << endl;
	return 0;
}

int dll() {
	try {
		Sleep(150);
		cout << endl;
		cout << "---进入wickDOS.300登录界面---" << endl;
		string U_m = "";
		cout << "请输入您的用户名：";
		cin >> U_m;
		string path = (U_m + "\\Username.txt");
		ifstream input;
		input.open(path);
		string line = "null";
		getline(input, line);
		yhm = line;

		string path2 = (U_m + "\\Userage.txt");
		ifstream input2;
		input2.open(path2);
		string line2;
		getline(input2, line2);
		int l2 = stoi(line2);
		nl = l2;

		string path3 = (U_m + "\\Usermima.txt");
		ifstream input3;
		input3.open(path3);
		string line3;
		getline(input3, line3);
		int l3 = stoi(line3);
		password = l3;

		cout << "-[100%]用户信息已载入" << endl;
		while (1) {
			cout << "请输入密码：";
			int pn = 0;
			cin >> pn;
			if (password == pn) {
				break;
			} else {
				cout << "密码错误，请重试" << endl;

			}

		}
		string V_mm;
		string V_ms;
		cout << "请输入您的VIP密码：（没有请输入0）" << endl;
		cin >> V_mm;
		if (V_mm != "0") {
			try {
				string path = (yhm + "\\VIP.txt");
				ifstream input;
				input.open(path);
				string line = "null";
				getline(input, line);
				V_ms = line;
				if (V_ms == V_mm) {
					VIP = true;
				} else {
					VIP = false;
				}
			} catch (exception variable) {
				cout << "好的!" << endl;
				VIP = false;
				Sleep(100);
			}
		} else {
			cout << "好的" << endl;
			VIP = false;

		}

		input.close();
		input2.close();
		input3.close();
		cout << "-登录成功-" << endl;
	} catch (exception variable) {
		cout << "未找到用户，请重试" << endl;
		Sleep(100);
		int sfdl = 1;
		cout << endl << "是否现在注册？（1是 0不）";
		cin >> sfdl;
		if (sfdl == 1) {
			dl();
		}
		dll();
	}

}

void lanping() {
	cout << ":(" << endl;
	Sleep(100);
	for (int i = 0; i <= 10; i++) {
		cout << "#$%^HSRTYUIpisda,T^'dfio879Qsdsda].^784;w.alfTYUudfhs%TG23463h~!uip;dfsl}}iyydsa:Pxijngj&Jd()_j,%:?pkdfs//dio;xinhd&&ud7u9o4wlkXZCVHAJOL\
		K12dd*OD;ux&*(d{%^&*idfin*dils$$34;)sx*IWERTri8jintsruidla%^Y*njingkl%^&dnydu$^*DKD:d);lj6^d456z@#%`H_JS" << endl;
		Sleep(50);
	}

}


int Find() {  //总.Find
	switch (gms) {
		case 0:
			cout << "			---监测到系统遇到故障，已强制退出---" << endl;
			Sleep(1000);
			cout << "		       ---注意，请不要输入除数字以外的符号---" << endl;
			Sleep(300);
			cout << "   :(  your PC is broken" << endl;
			Sleep(1000);
			lanping();
			exit(0);

		case 1:
			//计算机
			jsq();
			break;
		case 2:
			//BCG
			bcg();
			break;
		case 3:
			//设置
			run_sj();
			break;
		case 4:
			bqz_zjm();
			break;;
		case 5:
			xyx_zjm();
			break;
		case 6:
			zd();
			break;
		case 7:
			gly();
			break;
		case 404:
			zdh("正在退出...");
			Sleep(1550);
			exit(0);
			break;
		case 505:
			zdh("欢迎使用wickDOS!这是一个操作系统！");
			break;
		case 808:
			run_sj();
			break;
		case 202:
			zdh("正在重启...");
			Sleep(200);

		default:
			//输入有误，无法被识别
			cout << endl << "输入有误，请重新输入 -Error 0x0000005f-";
			break;
	}
}
//Find-文件管理器结束<\>


//运行整合
int run_z() {
	//效果
	int s_password = 0;
	while (true) {
		cout << endl << "正在进入主页…";
		Sleep(75);
		if (ma == 1) {
			s_password = password;
		}

		int cs = 0;
		while (true) {
			cout << "请输入密码：" << endl;
			if (ma != 1) {
				cin >> s_password;
			}
			cs++;
			if (cs > 10) {
				Sleep(250);
				cout << "-=错误次数太多，将重启系统=-" << endl;
				Sleep(300);
				run_z();
			}
			cout << endl;
			if (s_password == password) {
				Sleep(300);
				cout << "密码";
				cout << "验证成功" << endl;
				zjm();
				gms = 0;
				cin >> gms;
				Find();
				break;
			} else {
				cout << "验证失败" << endl;
			}
		}




		//主界面
		zjm();
		gms = 0;
		//输入应用ID
		cin >> gms;
		//载入动画
		Sleep(350);
		dh();


		//帮助
		if (gms == 505) {
			cout << hy << endl;
		}

		//强制关机
		if (gms == 303) {
			Sleep(500);
			cout << "<wkC.quit>" << endl;
			Sleep(1255);
			exit(1);
		}

		//重启
		if (gms == 202) {
			Sleep(350);
			cout << "重启中..." << endl;
			Sleep(2000);
			run_z();
		}


		//关机
		if (gms == 404) {
			cout << endl << "正在退出..." << endl;
			Sleep(1550);
			exit(0);

		}

		if (gms == 808) {
			Sleep(500);
			cout << "-正在进入设置主界面-" << endl;
			Sleep(650);
			cout << "请在主界面输入3进入设置系统，本路径已弃用" << endl;
			Sleep(155);

		}
		//主程序-Find
		Find();
		gms = 0;
	}
}

void kjdh() {
	system("cls");
	cout << "%0";
	system("cls");
	cout << "%1▌";
	system("cls");
	cout << "%2▌▌";
	system("cls");
	cout << "%3▌▌▌";
	system("cls");
	cout << "%4▌▌▌▌";
	system("cls");
	cout << "%5▌▌▌▌▌";
	system("cls");
	cout << "%6▌▌▌▌▌▌";
	system("cls");
	cout << "%7▌▌▌▌▌▌▌";
	system("cls");
	cout << "%8▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%9▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%10▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%11▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%12▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%13▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%14▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%15▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%16▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%17▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%18▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%19▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%20▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%21▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%22▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%23▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%24▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%25▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%26▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%27▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%28▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%29▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	system("cls");
	cout << "%30▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%31▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%32▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%33▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%34▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%35▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%36▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%37▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%38▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%39▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%40▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%41▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(15);
	system("cls");
	cout << "%42▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(25);
	system("cls");
	cout << "%43▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(75);
	system("cls");
	cout << "%44▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%45▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%46▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%47▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%48▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%49▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%50▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%51▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%52▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%53▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%54▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%55▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%56▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%57▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%58▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%59▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%60▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%61▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%62▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%63▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%64▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(5);
	system("cls");
	cout << "%65▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%66▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%67▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%68▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%69▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%70▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%71▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%72▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%73▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(5);
	system("cls");
	cout << "%74▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(5);
	system("cls");
	cout << "%75▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(5);
	system("cls");
	cout << "%76▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%77▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%78▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%79▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(50);
	system("cls");
	cout << "%80▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(300);
	system("cls");
	cout << "%81▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(10);
	system("cls");
	cout << "%82▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%83▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%84▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%85▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%86▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%87▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%88▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%89▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%90▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%91▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%92▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%93▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%94▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%95▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%96▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%97▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%98▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%99▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(0);
	system("cls");
	cout << "%100▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌";
	Sleep(300);
	system("cls");
	cout << "正在开机.";
	Sleep(200);
	system("cls");
	cout << "正在开机..";
	Sleep(200);
	system("cls");
	cout << "正在开机...";
	Sleep(200);
	system("cls");
	cout << "正在开机.";
	Sleep(200);
	system("cls");
	cout << "正在开机..";
	Sleep(200);
	system("cls");
	cout << "正在开机...";
	Sleep(200);
	system("cls");
	cout << "正在开机.";
	Sleep(200);
	system("cls");
	cout << "正在开机..";
	Sleep(200);
	system("cls");
	cout << "正在开机...";
	Sleep(200);
	system("cls");
	cout << "欢" << endl;
	Sleep(50);
	system("cls");

	cout << "迎" << endl;
	Sleep(100);

	system("cls");
	cout << "来" << endl;
	Sleep(100);
	system("cls");

	cout << "到" << endl;
	Sleep(100);

	system("cls");
	cout << "w" << endl;
	Sleep(100);

	system("cls");
	cout << "i" << endl;
	Sleep(100);

	system("cls");
	cout << "c" << endl;
	Sleep(100);

	system("cls");
	cout << "k" << endl;
	Sleep(100);

	system("cls");
	cout << "D" << endl;
	Sleep(100);

	system("cls");
	cout << "O" << endl;
	Sleep(100);

	system("cls");
	cout << "S" << endl;
	Sleep(100);
	system("cls");
	Sleep(300);

	cout << "欢";
	Sleep(50);
	cout << "迎";
	Sleep(50);
	cout << "使";
	Sleep(50);
	cout << "用";
	Sleep(50);
	cout << "w";
	Sleep(50);
	cout << "i";
	Sleep(50);
	cout << "c";
	Sleep(50);
	cout << "k";
	Sleep(50);
	cout << "D";
	Sleep(50);
	cout << "O";
	Sleep(50);
	cout << "S";
	Sleep(50);
	Sleep(1575);
	system("cls");
	cout << "加载.";
	Sleep(200);
	system("cls");
	cout << "加载..";
	Sleep(200);
	system("cls");
	cout << "加载...";
	Sleep(200);
	system("cls");
	cout << "加载.";
	Sleep(200);
	system("cls");
	cout << "加载..";
	Sleep(200);
	system("cls");
	cout << "加载...";
	Sleep(200);
	system("cls");
	cout << "加载.";
	Sleep(200);
	system("cls");
	cout << "加载..";
	Sleep(200);
	system("cls");
	cout << "加载...";
	Sleep(200);
	system("cls");

}




//底层调控-运行整合调用
int main() {
	system("color F0");

	SetTitle("wickDOS.300-OUI");
	cout << "wickDOS>>" << endl;
	Sleep(200);
	zdh("version : Optimizing and upgrading the intuitive version");
	Sleep(50);
	zdh("windows kid code C++ - DOS - welcome!");

	Sleep(500);
	cout << endl;
	zdh("Hello! your password is 300,welcome use wick - D - O - S - !");
	Sleep(2000);

	kjdh(); //动画

	//正式程序-登录
	dll();

	Sleep(650);
	dh();
	Sleep(200);
	//总.正式程序-
	run_z();

	//退出
	Sleep(800);
	zdh("正在注销...");
	Sleep(1200);
	zdh("欢迎下次使用wickDOS！");
	Sleep(550);

	return 0;
}


//end.
