//ͷ�ļ������ã�
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
using namespace std; //ʹ�������ռ䣬std������������ʡ���˺Ǻǣ�

//������ʾ����
void zdh(std::string word, int time = 10, bool hh = true) { //word����Ҫ����������ı���timeΪЧ���ȴ�ʱ�䣨���룩��Ĭ��Ϊ10���룬��˿����)����hhΪ�Ƿ�
	//   �У�Ĭ��Ϊ�ǣ�

	//��stringת��Ϊchar*
	const char *words = word.c_str();

	//�������
	for (int i = 0; i <= strlen(words); i++) {
		cout << words[i];
		Sleep(time);//Ч���ȴ�
	}

	//�Ƿ���
	if (hh == true) {
		cout << endl;
	}
}



//�������
void SetTitle(LPCSTR lpTitle) {
	SetConsoleTitle(lpTitle); //���ú���
}

//�߾����㷨��ʼ��
int a[99999999], b[99999999], c[99999999];
//�û���Ϣ��ʼ��
string hy = "wickDOS ��ӭʹ�ã������������Գ���Ĺ�����ѧϰ��", yhm = "�����û�", ah = "��"; //stringʽ��Ϣ

//intʽ��Ϣ
int nl = 0; //��ǰ�û�����
int password = 300; //��ǰ�û����루Ĭ��Ϊ300��
int gl_password = 271828; //��ǰ�û��Ĺ���Ա���루����ǹ���Ա�Ļ���
int ma = 1; //��������ϵ���ʱ����
bool VIP = false; //�Ƿ�������VIP
int gms = 0, sd = 25; //gmsΪҪ�򿪵�Ӧ�ñ�ţ����Findʹ�ã�sdΪ��������


/*-----------����ΪӦ�ô���-----------*/

int jsq() {
	//�߾��ȼӷ���(APP_ID:1)

	cout << endl << "��ӭ�����߾��ȼӷ��������"; //���
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
			cout << "���벻�Ϸ�" << endl;
			break;
	}
	cout << "��Ҫ�������𣿣�1/0��";
	cin >> ss;
	if (ss == 1) {
		jsq();
	} else {
		Sleep(200);
		cout << "���˳�";
		Sleep(300);
		system("cls");

	}

}
void add() {
	string a, b;
	cout << "��������������������";
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
	cout << "���Ϊ��";

	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
}
void subtract() {
	string a, b;
	cout << "��������������������";
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
	cout << "���Ϊ��";

	if (flag == 1) {
		cout << '-';
	}
	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
}
void multiply() {
	string a;
	cout << "��������������������";
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
	cout << "��������������������";
	cin >> a;
	long long b;
	cin >> b;
	if (b == 0) {
		cout << "���벻�Ϸ�";
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
	cout << "���Ϊ��";

	for (int i = c.size() - 1; i >= 0; i--)
		cout << c[i];
	cout << endl;
	cout << r << endl;


}

//BCG����-------------------------------------------------------------------------
int chi = 0;

//sf:�Ƿ���Ч�ش�
int sf = 1;

//��ʼ��
string w = "", as = "";

//BCG��Findϵͳ
int bcg_Find() {
	int bgzg;
	//�ش�Ԥ��
	if (w == "����") {
		as = "�Ҳ������裡�㡭";
	}
	if (w == "�ְ�") {
		as = "�Ҳ�����֣����ȵȣ��������֡�( ^ ��^ )";
	}
	if (w == "���") {
		as = "��ã���ʲô���԰�������";
	}
	if (w == "ɵ��") {
		as = "�������ж�ɵ�������������";
	}
	if (w == "����") {
		as = "�𰡣��Ҳ�����";
	}
	if (w == "����") {
		as = "���ڰ���һֱ���ڡ�";
	}
	if (w == "���ܸ���") {
		as = "˵ʵ����BCG������Ŭ�������Լ��أ�Ŀǰ����һ�л��������죬ʶ�𲻳���Ҳ�����Ŷ��";
	}
	if (w == "��������Ů") {
		as = "��ϣ���Լ��Ǹ�˫���ˡ�";
	}
	if (w == "1+1") {
		as = "��ѽ������ѽ����ô���ţ�";
	}
	if (w == "windode") {
		as = "�ԣ�����winkode���������д���������˹��ǣ��ϣ���";
	}
	if (w == "�㼸����") {
		as = "993824590238452309805473947392374907328574735928359090235890248520980924580928���˰ɡ�";
	}
	if (w == "��ɱ") {
		as = "�������޷�ִ�д˲��������û��ôʲ�������ʼ��ɱ�û�������";
	} else {
		//���ڻش�Ԥ����
		cout << "What is �� " << w << " ��mean? Please input again." << endl;
		sf = 0;
	}
	//���
	return bgzg;
}

int bcg() {
	//BCG������ģ��(APP_ID:2)
	Sleep(500);
	//������
	cout << endl << "-������-";
	Sleep(200);
	cout << "    Better C++ GPT 0.12.39sV1" << endl;
	Sleep(0.3);


	//��ͷ
	cout << "    |>You can input ��*help��to get some message about BGC,input ��*quit�� to quit BGC<|" << endl;
	//��ʼ��
	int x = {}, g = {}, z = {};
	int i = 0;
	Sleep(200);
	//��װ�������԰�
	cout << "Downlode chinese?(0/1)" << endl;
	cin >> chi;
	if (chi == 1) {
		Sleep(150);
		cout << "loding---" << endl;
		Sleep(850);
		cout << "���ڰ�װ---" << endl;
		Sleep(500);
		cout << "��װ���" << endl;
	}


	//��ѭ��
	while (true) {
		//�ʴ����
		i++;


		//sf:�Ƿ���Ч�ش�
		int sf = 1;

		//�û�����
		cout << "  you: >>";
		cin >> w;

		//�ؼ��� ����
		if (w == "*help") {
			as = "BCG 0.1 V1 build 17.5 C++ (windodeC)";
		}

		//�ؼ��� �˳�
		if (w == "*quit") {
			cout << "Bye!" << endl;
			Sleep(10);
			break;
		}

		//�ؼ��� С��
		if (w == "xiaodao") {
			as = "����С������ã�";
		}

		bcg_Find();

		//��ʶ�𣬸�ʽ�����
		if (sf == 1) {
			cout << "------------" << i << "------------" << endl;
			cout << "BCG:" << as << endl;
			cout << "------------" << endl << endl;
		}

	}
	return 0;
	//end.
}

//�����ȴ���ʼ��
int dhdd = 1;

//BCG����--------------------------------------------------------------------------------------

//��ǩӦ��������----------------------------------------------------------------------------------------------------
//���ñ�ǩ����
int bqs = 1, k_bq;
string sybq_m[999999];
char ss;
char sybq[9999999];

//�򿪱�ǩ-���ݱ༭��
int k_cbq() {

	//С��ʾ
	cout << endl << "���롰@�����˳��༭����,�á�#��������,|���档" << endl << endl;
	Sleep(3);

	//���ϴα༭����
	for (int i = 0; sybq[i] != '-'; i++) {

		//�Ƿ���
		if (sybq[i] == '#') {
			cout << endl;
		}

		//��������ϴα༭����
		if (sybq[i] != '#') {
			cout << sybq[i];
		}

		Sleep(1);
	}

	//����ʱδ�õ�������ѭ������
	int ii = 0;

	//���ݱ༭��-��ѭ��
	while (true) {
		ii++;

		//�������ݣ��ַ���ʽ��
		cin >> ss;

		//�˳���
		if (ss == '@') {
			break;
		}

		//�����¼�������
		for (int i = 0; i <= 999999; i++) {
			//����ĵ�i���ǿյģ�Ҫ¼�롭
			if (sybq[i] == '-') {
				//¼�뻻��
				if (ss == '#') {
					sybq[i] = '#';
				} else if (ss == '|') {
					//���ļ�
					cout << "�������ļ���:";
					string wjm;
					cin >> wjm;

					//��
					ofstream flie4(yhm + "\\" + wjm + ".txt");
					//����
					for (int i = 0; i <= 999999; i++) {
						//���ص�ͷֹͣ
						if (sybq[i] == '-') {
							break;
						}
						//���ص����з�����
						if (sybq[i] == '#') {
							flie4 << "\n";
						} else {
							//�����ص����ݷ����ı��༭��
							flie4 << sybq[i];
						}
					}
				} else {
					//���û��У�����¼����Ϣ
					sybq[i] = ss;
				}
				break;
			}
		}
	}

}

//��ǩ������
int bqz_zjm() {

	//��ʼ�����ݱ༭����������
	for (int i = 0; i <= 999999; i++) {
		sybq[i] = '-';
		//��-��=������
	}
	//��ʼÿ���ı���ϢΪ��-��Ҳ���Ǵ���յģ�û���ı�
	for (int i = 0; i <= 999999; i++) {
		sybq_m[i] = "-";
	}
	//������
	while (true) {
		sybq_m[0] = "-ϵͳ��Ϣ-";
		sybq_m[1] = "δ������ǩ";
		Sleep(200);
		cout << "~��ǩ��ҳ~" << endl;
		Sleep(100);

		//����
		cout << "-------------------------------------------------------------------" << endl;
		Sleep(dhdd);//dhddΪ����Ч���ȴ�
		cout << "/                             ��ǩֽ v0.6.7                        /" << endl;
		Sleep(dhdd);
		cout << "--------------------------------------------------------------------" << endl;
		Sleep(dhdd);
		cout << "/                             ������404�˳�                        /" << endl;
		Sleep(dhdd);
		cout << "--------------------------------------------------------------------" << endl;
		Sleep(dhdd);

		//�����ʹ�õı�ǩ
		for (int i = 1; i <= bqs; i++) {
			cout << "/      " << i << '.' << ' ' << sybq_m[i] << endl;

		}

		//�򿪱�ǩ��
		Sleep(100);
		cout << "������򿪵ڼ�����ǩ��999�½���>>" << endl;
		cin >> k_bq;//�򿪵��Ǹ���ǩ

		//�˳�����
		if (k_bq == 404) {
			break;
		}
		//�½���ǩ
		if (k_bq == 999) {
			for (int i = 0; i <= 9999999; i++) {
				//�ҵ��յı�ǩλ��
				if (sybq_m[i] == "-") {		//����û�д��ǩ����-���յģ�
					//�����ǩ��
					cout << "����������>" << endl;
					int mz;
					cin >> mz;
					//����ǩ���ݷ���2ά����
					sybq_m[i] = mz;
					Sleep(200);
					cout << "-�½����-" << endl;
					Sleep(100);
					break;
				}
			}
		}
		//�򿪱�ǩ�������ڱ��أ�
		if (k_bq == 888) {
			string U_s = "";		//�ļ���
			cout << "�������ļ�����";
			cin >> U_s;				//����
			string path4 = (yhm + "\\" + U_s + ".txt");
			//���ļ�
			ifstream file(path4);

			char line;
			//���ļ�����ʼ����ָ���ַ�����              //��-------
			for (int i = 0; i <= 9999999; i++) {          //��-------
				//getline(file, line);                    //��-------
				//	strcpy(sybq, line);                   //��-------
				//��-------
				cout << line;
				if (sybq[i] == '-') {
					//¼�뻻��
					if (ss == '#') {
						//¼�뻻�з�
						sybq[i] = '#';
						cout << endl;		//����
					}
				} else {
					//���û��У�����¼����Ϣ
					sybq[i] = line;
				}
			}
			//����������
			k_cbq();
			//�������رմ򿪵��ļ�����Ҫ��
			file.close();
		} else {
			k_cbq();
		}
	}



	Sleep(50);	//Ч��
}

//��ǩ�������ý���-----------------------------------------------------------------------------------
string fh = "C:\\>";	//�����ն�Ĭ����ʾ��
int zd() {
	//�նˣ�Ӧ��ID��6��
	string z_zl;		//�����ָ����ڱ��ص�cmd��ִ�У�
	Sleep(100);
	cout << "��ӭ�����նˣ�" << endl;    //��ʾ
	Sleep(200);
	cout << "������ָ��(quit()�˳�)" << endl;
	Sleep(50);
	cout << "C:\\>";//��ʾ��
	cin >> z_zl;//����ָ��
	Sleep(20);

	if (z_zl == "quit()") {
		//ָ��Ϊ�˳���
		fh = "quit...";
		Sleep(100);
		return 0; //�˳�
	} else {
		int systems = system(z_zl.c_str());	//��������ָ��
	}



}
//С��Ϸ��Ӧ��ID��5��
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord;

void locate(int x, int y) {
	coord.X = y;
	coord.Y = x;
	SetConsoleCursorPosition(hout, coord);
};

/*** ���ع�� ***/
void hide() {
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(hout, &cursor_info);
}

/*** ��������� ***/
double random(double start, double end) {
	return start + (end - start) * rand() / (RAND_MAX + 1.0);
}

/*** �����ͼ�ĳ����ߵ����꣬���ȣ�����ʳ���λ�� ***/
int m, n;

struct node {
	int x, y;
} snake[1000];

int snake_length, dir;
node food;
int direct[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

/*** ���ǽ ***/
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

/*** �״�����ߣ�����snake[0]����ͷ ***/
void print_snake() {
	locate(snake[0].x, snake[0].y);
	cout << "@";
	for (int i = 1; i <= snake_length - 1; i++) {
		locate(snake[i].x, snake[i].y);
		cout << "*";
	}
}

/*** �ж��Ƿ�ײǽ������ײ ***/
bool is_correct() {
	if (snake[0].x == 0 || snake[0].y == 0 || snake[0].x == m + 1 || snake[0].y == n + 1) return false;
	for (int i = 1; i <= snake_length - 1; i++) {
		if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) return false;
	}
	return true;
}

/*** ������ɲ����ʳ��λ�� ***/
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

/*** �ߵ�ǰ�� ***/
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
	/*** �Ե���ʳ�� ***/
	if (snake[0].x == food.x && snake[0].y == food.y) {
		snake_length++;
		e = true;
		snake[snake_length - 1] = temp;
	}
	/*** �����ʱ��״̬ ***/
	if (!e) {
		locate(temp.x, temp.y);
		cout << " ";
	} else
		print_food();
	locate(snake[0].x, snake[0].y);
	cout << "@";
	/*** �����ײ ***/
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
			if (Bwhat1 == 5)Color(5), Setpos(Bx1, By1), cout << "��", Color(0);
			else if (Bwhat1 == 4 && Bgo1[1] > 6 && Bgo1[1] < 11)Color(4), Setpos(Bgo1[5] - 1, Bgo1[6]), cout << "��", Setpos(Bgo1[5], Bgo1[6] - 1), cout << "��", Setpos(Bgo1[5], Bgo1[6] + 1), cout << "��", Setpos(Bgo1[5] + 1, Bgo1[6]), cout << "��", Color(0);
			else {
				Setpos(Bx1 - 1, By1 - 0.5), Color(0), cout << "���";
				Setpos(Bx1, By1 - 1);
				if (Bwhat1 == 2 && Bgo1[1] <= 5)Color(1);
				else if (Bwhat1 == 3 && Bgo1[1] <= 5)Color(5);
				else if (Bwhat1 == 6 && Bgo1[1] <= 5)Color(8);
				else Color(4);
				if (Bwhat1 == 4) Setpos(Bx1, By1 - 0.5), cout << "����(";
				else cout << ")����(";
				Setpos(Bx1 + 1, By1 - 0.5), cout << "����";
				Color(0);
			}
		}
		if (Boss == 2 || Boss == 6) {
			Setpos(Bx2 - 1, By2 - 1);
			Color(0), cout << "\\ ";
			Color(0);
			cout << "��";
			Setpos(Bx2, By2 - 1);
			Color(3);
			cout << "��";
			Color(5), cout << "JJJ";
			Color(0), cout << ">";
			Color(3);
			Setpos(Bx2 + 1, By2 - 1), cout << "������";
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
			cout << "��-";
			Setpos(Bx3, By3);
			if (Bwhat3 == 11)cout << "/";
			else cout << "��";
			Color(0);
			Setpos(Bx3 + 1, By3 - 1), cout << "����";
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
			cout << "��";
			Setpos(X, Y - 1);
			cout << "��/";
			if (T % 10 < 3) Setpos(X + 1, Y - 1), cout << "���v";
			else if (T % 10 < 6) Setpos(X + 1, Y - 1), cout << "�� ";
			else Setpos(X + 1, Y - 1), cout << "�s>";
			if (Wind > 0 && T % 3 == 0) Setpos(X + 1, Y - 1), cout << "���v";
			else if (Wind > 0 && T % 3 == 1) Setpos(X + 1, Y - 1), cout << "�� ";
			else if (Wind > 0 && T % 3 == 2)Setpos(X + 1, Y - 1), cout << "�s>";
		} else if (X <= 23 && X >= 21) {
			Setpos(X + 1, Y);
			cout << "��";
			Setpos(X, Y - 1);
			cout << "��\\";
			if (T % 10 < 3) Setpos(X - 1, Y - 1), cout << "���u";
			else if (T % 10 < 6) Setpos(X - 1, Y - 1), cout << "�� ";
			else Setpos(X - 1, Y - 1), cout << "�r>";
			if (Wind > 0 && T % 3 == 0) Setpos(X - 1, Y - 1), cout << "���u";
			else if (Wind > 0 && T % 3 == 1) Setpos(X - 1, Y - 1), cout << "�� ";
			else if (Wind > 0 && T % 3 == 2)Setpos(X - 1, Y - 1), cout << "�r>";
		} else if (X > 23) {
			Setpos(X, Y - 1);
			cout << "�� ��";
			Setpos(X - 1, Y - 0.5), cout << "��>";
		} else if (X < 17 && Upt != 0) {
			Setpos(X, Y - 1);
			cout << "�� ��";
			Setpos(X + 1, Y - 1.5), cout << "�u >";
		} else if (X < 17) {
			Setpos(X, Y - 1);
			cout << "�� ��";
			Setpos(X + 1, Y - 0.5), cout << "��>";
		}
		if (Thun > 0) {
			Setpos(X - 2, Y - 1), cout << "�{�{";
			Setpos(X + 2, Y - 1), cout << "�{�{";
			Setpos(X, Y + 2), cout << "��";
			Setpos(X, Y - 2.5), cout << "��";
			Setpos(X - 1, Y + 1), cout << "��";
			Setpos(X + 1, Y + 1), cout << "��";
			Setpos(X - 1, Y - 2), cout << "��";
			Setpos(X + 1, Y - 2), cout << "��";
		}
		if (Magne > 0 && T % 7 < 2)Setpos(X, Y), Color(5), cout << "��";
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
				cout << "��";
				Setpos(X + 1, Y - 3.5);
				cout << "��";
				Setpos(X - 1, Y - 2.5);
				cout << "��";
				Setpos(X - 2, Y - 3);
				cout << "��";
			} else if (T % 20 < 10 || T % 20 >= 15) {
				Setpos(X + 2, Y - 3);
				cout << "��";
				Setpos(X, Y - 4);
				cout << "����";
				Setpos(X - 2, Y - 3);
				cout << "��";
			} else if (T % 20 < 15) {
				Setpos(X + 2, Y - 3.5);
				cout << "��";
				Setpos(X + 1, Y - 3);
				cout << "��";
				Setpos(X - 1, Y - 3.5);
				cout << "��";
				Setpos(X - 2, Y - 3);
				cout << "��";
			}
		}
		if (Fire != 0) {
			if (T % 6 < 3)Color(4);
			else Color(5);
			if (Fir >= 1)Setpos(X, Y + 1), cout << "��";
			if (Fir >= 2)Setpos(X + 1, Y), cout << "��";
			if (Fir >= 3)Setpos(X - 1, Y - 1), cout << "��";
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
				cout << "��";
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
					Setpos(B[b].x - 1, B[b].y), cout << "��";
					Setpos(B[b].x, B[b].y - 1), cout << "���� ��";
					Setpos(B[b].x + 1, B[b].y), cout << "��";
				} else if (B[b].How == 1) {
					Setpos(B[b].x - 1, B[b].y - 1), cout << "�I  �J";
					Setpos(B[b].x, B[b].y), cout << "�w";
					Setpos(B[b].x + 1, B[b].y - 1), cout << "�L  �K";
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
				cout << "��";
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
				for (int i = max(0, (int)B[b].y - 8); i <= B[b].y; i++)cout << "�T";
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
				cout << "��";
				Setpos(B[b].x + 1, B[b].y);
				cout << "��";
				Setpos(B[b].x, B[b].y - 1);
				if (B[b].How % 2 == 1) cout << "����";
				else cout << "�z��{";
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
						cout << "�U";
						if (a == 1) Pan(7, i, B[b].y, b);
					}
				if (B[b].How > 0) for (int i = 21; i <= 20 + B[b].How; i++) {
						Setpos(i, B[b].y);
						cout << "�U";
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
				if (B[b].t % 4 < 2)cout << "�z";
				else cout << "��";
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
				cout << "��";
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
				if (B[b].what == 99)cout << "��";
				if (B[b].what >= 100 && B[b].what < 200) {
					if (B[b].what % 5 == 0)cout << "��";
					if (B[b].what % 5 == 1)cout << "��";
					if (B[b].what % 5 == 2)cout << "��";
					if (B[b].what % 5 == 3)cout << "ǿ";
					if (B[b].what % 5 == 4)cout << "��";
				}
				if (B[b].what >= 200 && B[b].what < 300) {
					if (B[b].what % 6 == 0)cout << "��";
					if (B[b].what % 6 == 1)cout << "��";
					if (B[b].what % 6 == 2)cout << "��";
					if (B[b].what % 6 == 3)cout << "��";
					if (B[b].what % 6 == 4)cout << "֮";
					if (B[b].what % 6 == 5)cout << "��";
				}
				if (B[b].what >= 300 && B[b].what < 400) {
					if (B[b].what % 8 == 0)cout << "��";
					if (B[b].what % 8 == 1)cout << "��";
					if (B[b].what % 8 == 2)cout << "��";
					if (B[b].what % 8 == 3)cout << "��";
					if (B[b].what % 8 == 4)cout << "��";
					if (B[b].what % 8 == 5)cout << "��";
					if (B[b].what % 8 == 6)cout << "��";
					if (B[b].what % 8 == 7)cout << "��";
				}
				if (B[b].what >= 400 && B[b].what < 500) {
					if (B[b].what % 8 == 0)cout << "��";
					if (B[b].what % 8 == 1)cout << "��";
					if (B[b].what % 8 == 2)cout << "��";
					if (B[b].what % 8 == 3)cout << "��";
					if (B[b].what % 8 == 4)cout << "��";
					if (B[b].what % 8 == 5)cout << "��";
					if (B[b].what % 8 == 6)cout << "��";
					if (B[b].what % 8 == 7)cout << "ǰ";
				}
				if (B[b].what >= 500 && B[b].what < 600) {
					if (B[b].what % 8 == 0)cout << "��";
					if (B[b].what % 8 == 1)cout << "��";
					if (B[b].what % 8 == 2)cout << "��";
					if (B[b].what % 8 == 3)cout << "��";
					if (B[b].what % 8 == 4)cout << "��";
					if (B[b].what % 8 == 5)cout << "��";
					if (B[b].what % 8 == 6)cout << "��";
					if (B[b].what % 8 == 7)cout << "��";
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
				if (B[b].t % 2 == 0) cout << "��";
				else cout << "��";
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
				cout << "��";
				Setpos(B[b].x + 1, B[b].y);
				cout << "��";
				Setpos(B[b].x, B[b].y - 1);
				if (B[b].what == -2) cout << "�z�ک{";
				if (B[b].what == -3) cout << "�z��{";
				if (B[b].what == -4) cout << "�zˮ�{";
				if (B[b].what == -5) cout << "�z��{";
				if (B[b].what == -6) cout << "�z�ש{";
				if (B[b].what == -7) cout << "�z�ũ{";
				if (B[b].what == -8) cout << "�zѪ�{";
				if (B[b].what == -9) cout << "�z�̩{";
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
				cout << "��";
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
				cout << "��";
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
		else Color(1), Setpos(I[i][0], I[i][1]), cout << "��";
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
			Setpos(bx, by), cout << "��";
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
			else cout << "��";
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
				Setpos(bx, by), cout << "��";
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
				if (r <= 1) cout << "��";
				else cout << "��";
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
						Setpos(bx, by), cout << "��";
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
			if (Bgo2[3] == 0) Setpos(X - 3, Y), cout << "��", Setpos(X + 3, Y), cout << "��", Bgo2[4] = (int)(X + 0.5), Bgo2[5] = (int)(Y + 0.5);
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
			if (Bgo2[3] == 0) Setpos(Bgo2[4] - 3, Bgo2[5]), cout << "��", Setpos(Bgo2[4] + 3, Bgo2[5]), cout << "��";
			if (Bgo2[3] == 1) Setpos(Bgo2[4], Bgo2[5] - 3), cout << " ", Setpos(Bgo2[4], Bgo2[5] + 3), cout << " ";
			Color(0);
		}
		if (Bgo2[1] == 25) {
			if (Bgo2[2] == 0) {
				Color(3);
				for (int i = 4; i <= 29; i++) {
					Setpos(i, Bgo2[5]), cout << "��";
					Bbl++;
					Panboss(i, Bgo2[5]);
					Bway[Bbl][0] = i;
					Bway[Bbl][1] = Bgo2[5];
				}
			}
			if (Bgo2[2] == 1) {
				Color(3);
				for (int i = 0; i <= 28; i++) {
					Setpos(Bgo2[4], i), cout << "��";
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
		cout << "���츳��";
Y:
		int rr = rand() % 4 + 2;
		Setpos(12, 10);
		if (rr == Ren) goto Y;
		if (rr == 2)cout << "ˮ�������ࣨ��ϡ�У�����������";
		if (rr == 3)cout << "��֮��";
		if (rr == 4)cout << "������";
		if (rr == 5)cout << "˲��";;
		if (rr == 6)cout << "��������Ծ";
		Setpos(14, 10);
		cout << "��ǰ�츳��";
		if (Ren == 1)cout << "С�޵�";
		if (Ren == 2)cout << "˲��";
		if (Ren == 3)cout << "��֮��";
		if (Ren == 4)cout << "������";
		if (Ren == 5)cout << "ˮ�������ࣨ��ϡ�У�����������";
		Setpos(16, 10);
		cout << "���񣿣�y/n��";
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
		for (float i = 1; i <= Bblo; i += Bblomax / 20.0)cout << "�{";
		Color(0);
		cout << ' ' << Bblo << "                              ";
		Color(0);
	}
	if (ball == 7) {
		Color(1);
		if (Win == 7 && T % 6 < 3)Color(3);
		for (float i = 1; i <= Blo; i += Blomax / 20.0)cout << "�{";
		Color(0);
		if (Win == 7 && T % 6 < 3)Color(3);
		printf(" %0.1f                              ", Blo);
	}
}

int  mp[2][7][8] = {


	//0:�յ� 1:�� :ǽ
	//3���� 4����  //Ŀ�ĵغ�����
	//5����		  //��
	//7:��		  //Ŀ��(3)������(4)��һ��
	//8����		  //��(5)��Ŀ��(3)��һ��
	//Ϊ�ö������ʹ��һ���㷨

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
int cas = 0;	//Ϊ0��ʾ��һ��
//��¼ÿһ�ص������� ��������Ŀ��Ŀ����һ�������
int boxSum[2] = {3, 4};
//��ͼ��ͼ
void drawMap() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == 0)
				printf("\t\t");
			switch (mp[cas][i][j]) {
				//	//0:�յ� 1:�� :ǽ
				case 0:
					printf("  ");
					break;
				case 1:
					printf("��");
					break;
				//3���� 4����  //Ŀ�ĵغ�����
				case 3:
					printf("��");
					break;
				case 4:
					printf("��");
					break;
				//5����		  //��
				case 5:
				case 8:
					printf("��");
					break;
				case 7:
					printf("��");
					break;
					//7:��		  //Ŀ��(3)������(4)��һ��
					//8����		  //��(5)��Ŀ��(3)��һ��
			}
		}
		printf("\n");
	}
}
//��������
void keyDown() {
	//������������
	//��λ��������
	//���������������һ���ǣ��ˣ��ڶ�������վ��Ŀ����
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

	char ch = _getch();	//���������ַ����룬+ͷ�ļ� conio.h
	switch (ch) {
		//72 80   75 77
		case 'w':
		case 'W':
		case 72:
			//��һ���ط����ڿյػ�����Ŀ�� ����
			if (mp[cas][i - 1][j] == 0 || mp[cas][i - 1][j] == 3) {
				//3+5=8 ����ʾĿ�ĺ�����һ��
				//�µط�(map[i-1][j])�ˣ�5������
				mp[cas][i - 1][j] += 5;
				//�ϵط�(map[i][j])�ˣ�5������
				mp[cas][i][j] -= 5;
			}
			//�����һ�������ӣ�Ҫ��һ���ж�����
			//ע��㣺��������״̬�����ӣ����Ӻ�Ŀ����һ��
			else if (mp[cas][i - 1][j] == 4 || mp[cas][i - 1][j] == 7) {
				//�����ӵ���һ���ط��ж��ܲ�����
				if (mp[cas][i - 2][j] == 0 || mp[cas][i - 2][j] == 3) {
					//�µĵط���������
					mp[cas][i - 2][j] += 4;
					//���ӵ�λ�ã����ӣ�-4������ ������+5��
					mp[cas][i - 1][j] += 1;
					//ԭ���ĵط�������
					mp[cas][i][j] -= 5;
				}

			}

			break;
		case 's':
		case 'S':
		case 80:
			//��һ���ط����ڿյػ�����Ŀ�� ����
			if (mp[cas][i + 1][j] == 0 || mp[cas][i + 1][j] == 3) {
				//3+5=8 ����ʾĿ�ĺ�����һ��
				//�µط�(map[i-1][j])�ˣ�5������
				mp[cas][i + 1][j] += 5;
				//�ϵط�(map[i][j])�ˣ�5������
				mp[cas][i][j] -= 5;
			} else if (mp[cas][i + 1][j] == 4 || mp[cas][i + 1][j] == 7) {
				//�����ӵ���һ���ط��ж��ܲ�����
				if (mp[cas][i + 2][j] == 0 || mp[cas][i + 2][j] == 3) {
					//�µĵط���������
					mp[cas][i + 2][j] += 4;
					//���ӵ�λ�ã����ӣ�-4������ ������+5��
					mp[cas][i + 1][j] += 1;
					//ԭ���ĵط�������
					mp[cas][i][j] -= 5;
				}

			}
			break;

		case 'a':
		case 'A':
		case 75:
			//��һ���ط����ڿյػ�����Ŀ�� ����
			if (mp[cas][i][j - 1] == 0 || mp[cas][i][j - 1] == 3) {
				//3+5=8 ����ʾĿ�ĺ�����һ��
				//�µط�(map[i-1][j])�ˣ�5������
				mp[cas][i][j - 1] = mp[cas][i][j - 1] + 5;
				//�ϵط�(map[i][j])�ˣ�5������
				mp[cas][i][j] = mp[cas][i][j] - 5;
				//j+=5  j=j+5

			} else if (mp[cas][i][j - 1] == 4 || mp[cas][i][j - 1] == 7) {
				//�����ӵ���һ���ط��ж��ܲ�����
				if (mp[cas][i][j - 2] == 0 || mp[cas][i][j - 2] == 3) {
					//�µĵط���������
					mp[cas][i][j - 2] += 4;
					//���ӵ�λ�ã����ӣ�-4������ ������+5��
					mp[cas][i][j - 1] += 1;
					//ԭ���ĵط�������
					mp[cas][i][j] -= 5;
				}

			}

			break;
		case 'D':
		case 'd':
		case 77:
			//��һ���ط����ڿյػ�����Ŀ�� ����
			if (mp[cas][i][j + 1] == 0 || mp[cas][i][j + 1] == 3) {
				//3+5=8 ����ʾĿ�ĺ�����һ��
				//�µط�(map[i-1][j])�ˣ�5������
				mp[cas][i][j + 1] += 5;
				//�ϵط�(map[i][j])�ˣ�5������
				mp[cas][i][j] -= 5;
			}

			//��һ���ط������ӣ��ж����ӵ���һ���ط��ǲ���Ŀ�ĺͿյ�
			else if (mp[cas][i][j + 1] == 4 || mp[cas][i][j + 1] == 7) {
				//�����ӵ���һ���ط��ж��ܲ�����
				if (mp[cas][i][j + 2] == 0 || mp[cas][i][j + 2] == 3) {
					//�µĵط���������
					mp[cas][i][j + 2] += 4;
					//���ӵ�λ�ã����ӣ�-4������ ������+5��
					mp[cas][i][j + 1] += 1;
					//ԭ���ĵط�������
					mp[cas][i][j] -= 5;
				}

			}
			break;
	}
}
//ʤ���ж�
//��ʲô�ж�ʤ���� ���ӵ���Ŀ�ĵĸ���
int gameOver() {
	int count = 0;
	//���еĵط���һ��
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (mp[cas][i][j] == 7)
				count++;
		}
	}
	return count;
}
//�����������ʱ��Ҳ��ʤ��
int gameOver2() {
	int count = 3;
	//���еĵط���һ��
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

	cout << "�����ܿἴ����ʼ��" << endl;
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
				cout << "��/�� ��Ծ/�·������� Щ΢�ƶ������ּ����أ�";
				Setpos(8, 6);
				cout << "����Կ�������Ч�������������300������������";
				Setpos(8, 6);
				cout << "��� 7 ����ʤ������� BOSS �����츳��";
				Setpos(10, 15);
				cout << "�ո������ͣ��";
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
		if (Boss == 0)cout << "Ѫ��: " << (int)Blo << "  ";
		Color(0);
		Setpos(1, 9), cout << "��������: " << D << "  ";
		Setpos(2, 1);
		Exp = min(Exp, Expmax);
		if (Exp >= Expmax)Exp = 0, Lv++, Lvl++, Hui++, Blomax += 5;
		if (Lvl > 0)Color(5);
		cout << "����: " << Lv;
		Color(0);
		Setpos(2, 9);
		cout << "����: " << Exp << "  ";
		if (Boss > 0) Setpos(3, 1), cout << "Ѫ��     : ", Ball(7);
		if (Boss > 0 && Boss != 6) Setpos(4, 1), cout << "����Ѫ��: ", Ball(6);
		if (Boss == 6) Setpos(1, 9), printf("ʱ��: %0.1f s  ", T / 15.0);
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
		printf("\n\t�÷������w a s d���ƶ����ƶ�������\n", cas + 1);
		printf("\n\t\t ������ �� %d ��\n", cas + 1);
		drawMap();
		if (gameOver() == boxSum[cas]) {
			cas++;
			if (cas == 2)
				break;
			else
				printf("\n\t\t �ù� OK������һ��������\n");
		}
		keyDown();
		system("cls");
	}
	printf("��Ϸ������");
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
	cout << "                                ����" << n << "��" << endl;
	cout << "                               ���ڷ������" << endl;
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
		cout << "                               ����>>ɱ��<<" << endl;
	else if (s[n] == 2)
		cout << "                               ����>>Ԥ�Լ�<<" << endl;
	else if (s[n] == 3)
		cout << "                               ����>>ƽ��<<" << endl;
	else
		cout << "                               ����>>��ʦ<<" << endl;
	cout << "                             ��Ϸ����5���ʼ" << endl;
	Sleep(5000);
	long long c = 15;
	long long f = 0, flag = 0;
	long long day = 1;
	long long lr;
	long long tp[20] = {0};
	do {
		lr = 0;
		system("cls");
		cout << "                                 ��" << day << "��ʼ" << endl;
		cout << "����" << n << "��" << endl;
		long long x;
		for (long long i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				if (s[n] == 1) {
					cout << "                                 ����ɱ��" << endl;
					for (long long j = 1; j <= 15; j++)
						if (m[j] == 1 && s[j] != 1)
							cout << j << " ";
					cout << endl;
					cout << "                                 ��ѡ��ɱ��" << endl;
					long long a;
					cin >> a;
					m[a] = 0;
					cout << endl;
					cout << "                                 ɱ��ɱ��" << a << "��";
					if (s[a] == 1)
						cout << "(ɱ��)" << endl;
					else if (s[a] == 2)
						cout << "(Ԥ�Լ�)" << endl;
					else if (s[a] == 3)
						cout << "(ƽ��)" << endl;
					else
						cout << "(��ʦ)" << endl;
					c--;
				} else if (s[n] == 2) {
					cout << "                                 ����Ԥ�Լ�" << endl;
					cout << "                               ";
					for (long long j = 1; j <= 15; j++)
						if (m[j] == 1)
							cout << j << " ";
					cout << endl << "                              ��ѡ��Ԥ��˭�����" << endl;
					long long a;
					cin >> a;
					if (s[a] == 1) {
						cout << "                        " << a << "����ɱ�֣���ע��" << endl;
						Sleep(1000);
					} else
						cout << "                            " << a << "���Ǻ���" << endl;
				}
			} else if (s[i] == 1 && m[i] == 1) {
				long long a;
				do {
					a = rand() % 15 + 1;
				} while (a == i || m[a] == 0 || s[a] == 1);
				cout << "                           ɱ��ɱ����" << a << "��";
				if (s[a] == 1)
					cout << "(ɱ��)" << endl;
				else if (s[a] == 2)
					cout << "(Ԥ�Լ�)" << endl;
				else if (s[a] == 3)
					cout << "(ƽ��)" << endl;
				else
					cout << "(��ʦ)" << endl;
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
							cout << "                           ��ʦ������" << b << "��";
							if (s[b] == 1)
								cout << "(ɱ��)" << endl;
							else if (s[b] == 2)
								cout << "(Ԥ�Լ�)" << endl;
							else if (s[b] == 3)
								cout << "(ƽ��)" << endl;
							c--;
							if (s[b] == 1 && n != sr) {
								cout << endl << "							   " << sr << "����ɱ�֣�";
								cout << endl << "								ɱ����������" << endl;
								cout << "                          	��Ϸ����" << endl;
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
							cout << "                           ��ʦ������" << b << "��" << endl;
							m[b] = 1;
							if (m[sr] == 0 && n != sr) {
								cout << endl << "							   " << sr << "����ɱ�֣�";
								cout << endl << "						ɱ����������" << endl;
								cout << "                          	��Ϸ����" << endl;
								return ;
							}
							break;//
						}
					}

				}
			}
		}
		if (s[n] == 4) {
			cout << "                                 ���Ƿ�ʦ" << endl;
			cout << "���״����" << endl;
			for (long long j = 1; j <= 15; j++)
				if (m[j] == 1)
					cout << j << " ";
			cout << endl;
			cout << "                        ��ѡ�� 1.* ɱ *���� 2.* �� * 3.* ɶ������ *" << endl;
			long long a, f = 0;
			while (f == 0) {
				cin >> a;
				if (a == 3) break;
				if (a == 1) {
					if (wd > 0) {
						wd--;
						f = 1;
						cout << "                                ��ѡ����ɱ��" << endl;
						for (long long i = 1; i <= 15; i++)
							if (m[i] == 1)
								cout << i << " ";
						cout << endl;
						long long b;
						cin >> b;
						if (s[b] == 1)
							cout << "(ɱ��)" << endl;
						else if (s[b] == 2)
							cout << "(Ԥ�Լ�)" << endl;
						else if (s[b] == 3)
							cout << "(ƽ��)" << endl;
						else
							cout << "(��ʦ)" << endl;
						m[b] = 0;
						c--;
						if (m[sr] == 0 && n != sr) {
							cout << endl << "							   " << sr << "����ɱ�֣�";
							cout << endl << "						ɱ����������" << endl;
							cout << "                          	��Ϸ����" << endl;
							return ;
						}
					} else {
						cout << ">>��ҩ<<����" << endl;
					}
				} else if (a == 2) {
					if (wj > 0) {
						wj--;
						f = 1;
						cout << "��ѡ���˸���" << endl;
						cout << "����������" << endl;
						for (long long i = 1; i <= 15; i++)
							if (m[i] == 0)
								cout << i << "��,���:" << s[i] << " " << endl;;
						long long b;
						cin >> b;
						m[b] = 1;
						c++;
					} else {
						cout << ">>����ҩˮ<<����" << endl;
					}
				}
			}
		}
		Sleep(1000);
		long double p[20] = {0};
		cout << "                                 ��" << day << "�����" << endl;
		cout << endl;
		if (m[n] == 0) {
			cout << "                             ���Ѿ�>>��<<��";
			break;
		}

		cout << "                                    ��" << endl;
		cout << "                       ";
		for (long long i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << i << " ";
		cout << endl;
		cout << "                                    ��ͶƱ...." << endl;
		for (long long i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				cout << endl;
				cout << "                                 ��ѡ��Ͷ����" << endl;
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
		cout << "                                 ͶƱ�����" << endl;
		for (long long i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << "                                 " << i << "��" << "  Ʊ����" << p[i] << endl;
		long long sw, max = -100;
		for (long long i = 1; i <= 15; i++) {
			if (p[i] > max) {
				sw = i;
				max = p[i];
			}
		}
		m[sw] = 0;
		cout << "                                  " << sw << "����" << endl;
		c--;
		cout << "                              " << sw << "�ŵ������";
		if (s[sw] == 1)
			cout << "ɱ��" << endl;
		else if (s[sw] == 2)
			cout << "Ԥ�Լ�" << endl;
		else if (s[sw] == 3)
			cout << "ƽ��" << endl;
		else
			cout << "��ʦ" << endl;
		if (s[sw] == 1 && n != sr) {
			cout << endl << "							   " << sr << "����ɱ�֣�";
			cout << endl << "						ɱ����������" << endl;
			cout << "                          	��Ϸ����" << endl;
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
			cout << endl << "							   " << sr << "����ɱ�֣�" << endl;
			cout << endl << "						ɱ����������" << endl;
			cout << "                          	��Ϸ����" << endl;
			return ;
		}
	} while (m[n] == 1 && c > 1);
	if (sr == n && m[n] == 1) {
		cout << "								��ɱ���������ˣ�����" << endl;
	}
	cout << "                          	��Ϸ����" << endl;
	return ;
}
int lys() {

	srand((int)time(0));
	char a = '1';
	while (1) {
		system("cls");
		cout << "                                   			ɱ����Ϸ" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";
		cout << "                                 		   1.��ʼ��Ϸ" << endl;
		cout << "                                		  2.�鿴��Ϸ����" << endl;
		a = getch();
		if (a == '1') {
			cout << "                                 		   1. 15�˳�" << endl;
			cout << "                          			2. 30������ս(10����)<�����ڴ�>" << endl;
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
			cout << "ɱ�֣�ÿ�����ϵ�ʱ���ʹ��ɱ��Ȩɱ��һ��" << endl; //1
			cout << "Ԥ�Լң�ÿ�����Ͽ���֪��һ���˵����" << endl; //2
			cout << "ƽ���޼���,�������ƽ��ʱ���ڵ�5��ӵ��1.5Ʊ��ͶƱȨ" << endl; //3
			cout << "���ˣ�����ݽ�����30�����־��У�������ɴ���һ��" << endl;
			cout << "ͶƱϸ��\n����Ϸ�г���������ȫ���ɳ���AI�˹����棩" << endl;
			cout << "Ԥ�Լ����Ԥ�Ե�ɱ�ֽ�һֱ����ͶƱ�����Ԥ�Ե����˽���Զ�������ͶƱ" << endl;
			cout << "ƽ��Ͷ��һ�����϶���ͶƱ������" << endl;
			cout << "********���úó���AI��Ϸ�����ҳ�ɱ��**********" << endl;
			system("pause");
		}
	}
	return 0;


}


#include<iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>

//���񣺳�39*2=78 �������꣩(�������Ϊ39)  ��39

//���񣺳�41*2=82 �������꣩(�������Ϊ41)  ��41

#define UP    1

#define DOWN  2

#define LEFT  3

#define RIGHT 4

#define MAX_LEVEL 8

#define BULLET_NUM 20

#define MAX_LIFE 4



//������δд�뺯������������δ˵���ı���ֻ��map��ά����,level_info�����level



/*
      �˳������漰��x,y�������ֵ����Ϊ�������֣�

�����꣺���������ָ������һ��������Ϊ��λ�����꣬������������coord���� (����map���������)

�����꣺ͷ�ļ��Դ�������ṹcoord�е����꣨Ҳ����˵�ǿ���̨�����������ֵ��

  ����������y��ֵһ�£��ٺ�����xֵ������coord�����꣨�����꣩��ϵ�� x * 2 = coord ������

          coord�������ָGoTo�����е�x����,��Ϊ��������Ϸ������һ��������Ϊ������λ��

          ����˵�漰��coord������ȫ��ż�����ȼ�����Ҫ�������꣨����������ܷ����������ã��������������2

*/

typedef struct             //����ĳ��ִ���ָ����һ��AI_tank�����еĴ�����Ϸ�����ĸ�AI_tank����

{
	//���趨ÿ��AI_tankÿ������̹��ֻ����һ�� ��fast_tank & firm_tank �����ִ���������1

	int fast_tank_order;   //fast_tank���ֵĴ���(�ڵ�fast_tank_order�θ������,�ӵ�0�ο�ʼ)����ÿ��AI_tankֻ����һ��

	int firm_tank_order;   //firm_tank���ֵĴ���ͬ��

} LevInfo;                 //�ؿ���Ϣ(׼ȷ˵�Ǹùس��ֵ�̹����Ϣ)

LevInfo level_info [MAX_LEVEL] = {{-1, -1}, {3, -1}, {-1, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}}; //��ʼ����-1����û�и�����̹��





typedef struct      //�ӵ��ṹ��

{

	int x, y;       //�ӵ�����,������

	int direction;  //�ӵ��������

	bool exist;     //�ӵ��������ı���,1Ϊ���ڣ�0������

	bool initial;   //�ӵ��Ƿ��ڽ�����״̬��ֵ��1Ϊ���ڽ�����״̬��0Ϊ���ڷǽ�����״̬

	bool my;        //����AI�ӵ�������ӵ��ı��,0ΪAI�ӵ���1Ϊ��ң��ҵģ��ӵ�

} Bullet;

Bullet bullet [BULLET_NUM];  //���ǵ���ͼ�ϲ�̫����ͬʱ����20���ӵ�����������Ԫ������20��





typedef struct      //̹�˽ṹ��

{

	int x, y;       //̹����������

	int direction;  //̹�˷���

	int color;      //��ɫ�η�������1��6�ֱ����ͬ��ɫ��������PrintTank����������˵��

	int model;      //̹��ͼ��ģ�ͣ�ֵΪ1,2,3���ֱ����ͬ��̹��ͼ��,0Ϊ�ҵ�̹��ͼ����AI����ʹ��

	int stop;       //ֻ����AI̹��ʹ�õĲ�������0����̹��ֹͣ�߶�,0Ϊ�����߶�

	int revive;     //̹�˸������

	int num;        //AI̹�˱�ţ��̶�ֵ��Ϊ��������ʼ�������ж��£�0~3

	int CD;         //�����ӵ���ȴ��ʱ

	bool my;        //�Ƿ�з�̹�˲������ҵ�̹�˴˲���Ϊ1,Ϊ����

	bool alive;     //���Ϊ1�������Ϊ0

}  Tank;

Tank AI_tank[4], my_tank;   //my_tankΪ�ҵ�̹�ˣ�Ai_tank ����AI̹��



//�����еĺ������п��ܶ�ȫ�ֱ���map���ж�д(�ı�)��

//�ຯ���в���˵���Ƿ���ȫ�ֱ���map��д

//������������Ϸ��������

void GoToxy(int x, int y);   //����ƶ�

void HideCursor();           //���ع��

void keyboard ();            //���ܼ�������

void Initialize();           //��ʼ��(���жԶ�����ݵĶ�д)

void Stop();                 //��ͣ

void Getmap();               //��ͼ���ݴ�����ȡ

void Frame ();               //��ӡ��Ϸ������

void PrintMap();             //��ӡ��ͼ(��ͼ�ȵ�ͼ�ϰ���)(����level�Ķ�ȡ)

void SideScreen ();          //����Ļ��ӡ

void GameCheak();            //�����Ϸ��Ӯ

void GameOver( bool home );  //��Ϸ����

void ClearMainScreen();      //����Ļ����������system("cls")���ӡ�����һ��������ɿ������һ�еĴ���൥����д��������

void ColorChoose(int color); //��ɫѡ����

void NextLevel();            //��һ��(���ж�levelȫ�ֱ����Ķ�д)



//�ӵ�����

void BuildAIBullet(Tank *tank);                //AI̹�˷����ӵ������ж�my_tank�Ķ�ȡ,ֻ��ȡ��my_tank���꣩

void BuildBullet  (Tank tank);                 //�ӵ����䣨���������˻����ã�(��ȫ�ֱ���bullet���޸�)�ҵ�̹�˷����ӵ�ֱ�ӵ��øú���,AIͨ��AIshoot��ӵ���

void BulletFly    (Bullet bullet[BULLET_NUM]); //�ӵ��ƶ��ʹ�����˻����ã�,

void BulletHit    (Bullet* bullet);            //�ӵ���ײ���˻����ã�(��Tankȫ�ֱ������޸�)��ֻͨ��BulletFly���ã��ӵ������ײ���ڱ�����,�ӵ�����ײ����BulletShoot�м�Ⲣ����

void PrintBullet  (int x, int y, int T);       //��ӡ�ӵ����˻����ã�

void ClearBullet  (int x, int y, int T);       //����ӵ����˻����ã�

int  BulletCheak  (int x, int y);              //�ж��ӵ�ǰ��������˻����ã�



//̹�˲���

void BuildAITank (int* position, Tank* AI_tank); //����AI̹��

void BuildMyTank (Tank* my_tank);                //�����ҵ�̹��

void MoveAITank  (Tank* AI_tank);                //AI̹���ƶ�

void MoveMyTank  (int turn);                     //�ҵ�̹���ƶ���ֻͨ��keyboard�������ã��ȼ��̿���

void ClearTank   (int x, int y);                 //���̹�ˣ��˻����ã�

void PrintTank   (Tank tank);                    //��ӡ̹�ˣ��˻����ã�

bool TankCheak   (Tank tank, int direction);     //���̹��dirtection������ϰ���,��ֵ1�谭,0 ��ͨ

int  AIPositionCheak (int position);           //���AI̹�˽���λ���Ƿ����ϰ���AIPositionCheak



//DWORD WINAPI InputX(LPVOID lpParameter); //�����̺߳��������ڼ��X�����벢����X����������ȴʱ��





//ע��map����Ӧ����������ǰ���������ں󣬼�map[y][x]��(�������г�����ǰ���г����ں�)

//map���ֵ: ��λ����ֵΪ��ͼ���鲿�֣���λ����ֵΪ̹��,�ӵ���map��û��ֵ(�ӵ�������һ��������)

//map���ֵ: 0Ϊ��ͨ��½�أ�1Ϊ��ש��2��ש��5Ϊˮ��100~103Ϊ�з�̹�ˣ�200Ϊ�ҵ�̹�ˣ�



//ȫ�ֱ���

int mapa[41][41];  //��ͼ��ά����

int key_x;        // X���Ƿ񱻡����롱�ı�����Ҳ���ӵ��Ƿ���Է���ı䣬

int bul_num;      //�ӵ����

int position;     //λ�ü���,��ӦAI̹������λ��,-1Ϊ��λ��,0Ϊ�м�,1Ϊ��,2Ϊ�ҵ�̹��λ��

int speed = 7;    //��Ϸ�ٶ�,������

int level = 1;    //��Ϸ�ؿ���

int score = 0;    //��Ϸ����

int remain_enemy; //ʣ�����(δ���ֵĵ���)



char* tank_figure[4][3][4] =

{

	{

		{"������", "������", "���ר�", "���ר�"},

		{"�ǡ��", "�ǡ��", "����", "����"},

		{"������", "������", "���ߨ�", "���ߨ�"}

	},

	{

		{"������", "���ש�", "���ש�", "���ש�"},

		{"�ǡ��", "�ǡ��", "�����", "�ǡ�"},

		{"���ߩ�", "������", "���ߩ�", "���ߩ�"}

	},

	{

		{"������", "������", "���ר�", "���ש�"},

		{"�ǡ��", "�ǡ��", "����", "����"},

		{"������", "������", "���ߨ�", "���ߩ�"}

	},

	{

		{"�X���[", "�X�j�[", "�X�j�[", "�X�j�["},

		{"�d���g", "�d���g", "�����g", "�d����"},

		{"�^�m�a", "�^���a", "�^�m�a", "�^�m�a"}

	}

};



int tk() {


	int i;

	unsigned int interval[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} ; //������������飬���ڿ����ٶ�

	srand(time(NULL)); //�������������(�����������Ӷ�����rand��ʹÿ�����е����������һ��)���������ָ:���״ε���rand�õ�1,�ڶ��ε�2,������3,��˴����������Ϊ1,2,3

	HideCursor();                         //���ع��

	system("mode con cols=112 lines=42"); //���ƴ��ڴ�С

	Frame ();                             //��ӡ��Ϸ������

	Initialize();                         //��ʼ����ȫ�ֱ���level��ֵ����1

	//    HANDLE h1 , h2 ;                      //����������

	for (;;)

	{

		if (interval[0]++ % speed == 0)   //�ٶȵ�����,����interval[0]Ϊa, �����Ϊ a % 2==0,a=a+1;

		{

			GameCheak();                  //��Ϸʤ�����

			BulletFly ( bullet );

			for (i = 0 ; i <= 3 ; i++)    //AI̹���ƶ�ѭ��

			{

				if (AI_tank[i].model == 2 && interval[i + 1]++ % 2 == 0) //�ĸ�̹���еĿ���̹�˵���ʹ�ü�����1,2,3,4

					MoveAITank( & AI_tank[i]);

				if (AI_tank[i].model != 2 && interval[i + 5]++ % 3 == 0) //�ĸ�̹���е�����̹�˵���ʹ�ü�����5,6,7,8

					MoveAITank( & AI_tank[i]);

			}

			for (i = 0; i <= 3; i++)                            //����AI̹�˲���

				if (AI_tank[i].alive == 0 && AI_tank[i].revive < 4 && interval[9]++ % 90 == 0) //һ���з�̹��ÿ��ֻ��4����

				{
					//���̹�˲�����ʱ,ÿ�ν����м��  1750 ms

					BuildAITank( &position, & AI_tank[i] );     //����AI̹�ˣ����

					break;                                      //ÿ��ѭ��ֻ����һ��̹��

				}

			for (i = 0; i <= 3; i++)

				if (AI_tank[i].alive)

					BuildAIBullet(&AI_tank[i]);                 //AIshoot�Դ�int��������CD,��ʹ��main�е�CD interval

			if (my_tank.alive && interval[10]++ % 2 == 0 )

				keyboard ();

			if (my_tank.alive == 0 && interval[11]++ % 30 == 0 && my_tank.revive < MAX_LIFE)

				BuildMyTank( &my_tank );

		}

		Sleep(5);

	}

	return 0;

}







/*//����Ķ��߳���ʱ����                   //x�������ӵ����䣬x������ȴʱ�䲻�ܺ���������һͬ���ã�������̫����
DWORD WINAPI InputX(LPVOID lpParameter)    //������ö��߳����У���ô��x����ȴʱ���ڳ������Sleep���������ͣ����
{                                          //��Ϊֻ��һ�������ı䣬���ұ����ı��Ⱥ�˳�����Զ��׼��ģ����Բ������û�����
    for(;;)
    {
        if(GetAsyncKeyState( 88 )& 0x8000) //88Ϊx����ֵ,������x����x�����ڿ�����״̬
        {
            key_x=1;                       // X���Ƿ����������롱�ı�����Ҳ���ӵ��Ƿ���Է���ı���
            Sleep(600);                    // ���߳�Sleep�У�x�Ͳ��ܱ�"����"�����߳�ÿ������һ���ӵ����䣬key_x�����
        }
        Sleep(10);
    }
    return 0;
}*/





void keyboard ()

{
	// kbhit()   getch()  �÷����õ��ǲ�����

	/*
	   ��������:�ú����ж��ڴ˺���������ʱ,ĳ�����Ǵ���UP״̬���Ǵ���DOWN״̬,��ǰ�ε���GetAsyncKeyState������,
	   �Ƿ񰴹��˼�.�������ֵ�����λ����λ,��ô�ü�����DOWN״̬;������λ����λ,��ô��ǰһ�ε��ô˺�����,�˼�������,
	   �����ʾ�ü�û������.
	   ����GetAsyncKeyState�� kbhit() + getch() ����,������˳��.   GetAsyncKeyState�ķ���ֵ��ʾ�������ݣ�
	   һ�������λbit��ֵ������������Ƿ񱻰��¡�һ�������λbit��ֵ,�����ϴε���GetAsyncKeyState��������Ƿ񱻰��¡�
	   &Ϊ�������&0x8000�����ж��������ֵ�ĸ�λ�ֽڡ����high-order bit��1,���ǰ���״̬�������ǵ���״̬��Ϊ0
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

	else if (GetAsyncKeyState( 0x1B ) & 0x8000) // Esc��

		exit(0);                                //�˳�������

	else if (GetAsyncKeyState( 0x20 ) & 0x8000) //�ո�

		Stop();

	else if (count++ % 7 == 0)        //������Ӽ�������Ϊ�˷�ֹ����ճ�����ܴﵽ΢��Ч��

	{

		if (speed > 1 && GetAsyncKeyState( 0x6B ) & 0x8000) // +��

		{

			speed--;

			GoToxy(102, 11);          //�ڸ���Ļ��ӡ����ǰ�ٶ�

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED);

			printf("%d ", 21 - speed); //����Ļ��ʾ���ٶ�Ϊ1~10

		}

		else if (speed < 20 && GetAsyncKeyState( 0x6D ) & 0x8000) // - ��

		{

			speed++;

			GoToxy(102, 11);          //�ڸ���Ļ��ӡ����ǰ�ٶ�

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED);

			printf("%d ", 21 - speed); //����Ļ��ʾ���ٶ�Ϊ1~10

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



void BuildAIBullet(Tank *tank)   //AI�ӵ�����(����)���ж�my_tank�Ķ�ȡ

{

	if (tank->CD == 15)

	{

		if (!(rand() % 11))  //��ȴ������������ÿ����Ϸ��������10��֮һ�Ŀ��ܷ����ӵ�

		{

			BuildBullet(*tank);

			tank->CD = 0;

		}

	}

	else

		tank->CD++;

	if (tank->CD >= 14)      //AIǿ�����֣�����ȴ����һ����Χ����ʹ��

	{

		if (tank->y == 38 )  //���̹���ڵײ�(���������)

		{

			if (tank->x < 20) //���ϼ����

			{

				if (tank->direction == RIGHT) //̹�˷�����

				{

					BuildBullet(*tank);     //�����ӵ�

					tank->CD = 0;

				}

			}

			else             //���ϼ��ұ�

				if (tank->direction == LEFT) //̹�˷�����

				{

					BuildBullet(*tank);     //�����ӵ�

					tank->CD = 0;

				}

		}

		else if (tank->x == my_tank.x + 1 || tank->x == my_tank.x || tank->x == my_tank.x - 1) //AI̹����������"�ڿ�"��׼�ҵ�̹��

		{

			if (tank->direction == DOWN && my_tank.y > tank->y || tank->direction == UP && my_tank.y < tank->y)

			{
				//����AI���²����ҵ�̹����AI̹���·�(��ֵ���������)����AI�����ҵ�̹����AI�Ϸ�

				int big = my_tank.y, smal = tank->y, i;

				if (my_tank.y < tank->y)

				{

					big = tank->y;

					smal = my_tank.y;

				}

				for (i = smal + 2; i <= big - 2; i++) //�ж�AI�ڿڵ�ֱ������̹�˼������ϰ�

					if (mapa[i][tank->x] != 0 || mapa[i][tank->x] != 5) //�����ϰ�

						break;

				if (i == big - 1)           //��i�ߵ�big-1˵�����ϰ�

				{

					BuildBullet(*tank);     //�����ӵ�

					tank->CD = 0;

				}

			}

		}

		else if (tank->y == my_tank.y + 1 || tank->y == my_tank.y || tank->y == my_tank.y - 1) //AI̹���ں�����"�ڿ�"��׼�ҵ�̹��

		{

			if (tank->direction == RIGHT && my_tank.x > tank->x || tank->direction == LEFT && my_tank.x < tank->x)

			{
				//����AI���Ҳ����ҵ�̹����AI̹���ҷ�(��ֵ���������)����AI�����ҵ�̹����AI��

				int big = my_tank.y, smal = tank->y, i;

				if (my_tank.x < tank->x)

				{

					big = tank->x;

					smal = my_tank.x;

				}

				for (i = smal + 2; i <= big - 2; i++) //�ж�AI�ڿڵ�ֱ������̹�˼������ϰ�

					if (mapa[tank->y][i] != 0 || mapa[tank->y][i] != 5) //�����ϰ�

						break;

				if (i == big - 1) //��i�ߵ�big-1˵�����ϰ�

				{

					BuildBullet(*tank);     //�����ӵ�

					tank->CD = 0;

				}

			}

		}

	}

}







void BuildBullet(Tank tank)  //�ӵ����䣨������,����ṹ��Tank,��������ı���ȫ�ֱ����ṹ��bullet

{
	//��ʵ�ַ�ʽΪ˳��ѭ�������ӵ���ÿ�ε��øı��bullet����Ԫ�ض���ͬ

	switch (tank.direction)  //��Ϊ�˷���,����bullet�������,bullet��Ϊȫ�ֱ���ʹ��

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

	bullet [bul_num].exist = 1;    //�ӵ�������,��ֵΪ1����ӵ�����

	bullet [bul_num].initial = 1;  //�ӵ����ڳ�����״̬

	bullet [bul_num].my = tank.my; //������ҵ�̹�˷�����ӵ�bullet.my=1������Ϊ0

	bul_num++;

	if (bul_num == BULLET_NUM)     //����ӵ����������20�ţ���ô��ͷ��ʼ���

		bul_num = 0;               //���ǵ���ͼ�ϲ�����ͬʱ����20���ӵ�����������Ԫ������20��

}





void BulletFly(Bullet bullet[BULLET_NUM]) //�ӵ��ƶ��ʹ��

{
	//����ȫ�ֱ���Bullet�ĸı�

	for (int i = 0; i < BULLET_NUM; i++)

	{

		if (bullet [i].exist)             //����ӵ�����

		{

			if (bullet [i].initial == 0)  //����ӵ����ǳ�������

			{

				if (mapa[bullet[i].y] [bullet[i].x] == 0 || mapa[bullet[i].y] [bullet[i].x] == 5) //����ӵ����굱ǰλ�����ϰ�

					ClearBullet( bullet[i].x, bullet[i].y, BulletCheak(bullet[i].x, bullet[i].y ));        //Ĩ���ӵ�ͼ��

				switch (bullet [i].direction)                                     //Ȼ���ӵ�����仯���ӵ��䵽��һ�����꣩

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

			int collide = BulletCheak ( bullet [i].x, bullet [i].y );    //�ж��ӵ���ǰλ�����,�ж��ӵ��Ƿ���ײ,�Ƿ�λ��ˮ���ϡ�

			if ( collide )                                               //�����⵽��ǰ�ӵ��������ϰ�(����ײ)�������ڵ���������ˮ���ϣ�

				PrintBullet( bullet[i].x, bullet[i].y, collide);         //���ӡ�ӵ���������ײ�򲻴�ӡ

			else

				BulletHit( & bullet [i] );     //������ײ��ִ���ӵ���ײ����

			if (bullet [i].initial)            //���ӵ�����������ѳ��������ȥ��

				bullet [i].initial = 0;

			for (int j = 0; j < BULLET_NUM ; j++) //�ӵ������ײ�ж�,�����ҷ��ӵ��͵з��ӵ���ײ��ɾ��,��Ϊ���з��ӵ�������

				if (bullet [j].exist && j != i && (bullet[i].my || bullet[j].my) && bullet[i].x == bullet[j].x && bullet[i].y == bullet[j].y)

				{
					//ͬ���������ҷ��ӵ������ܲ�����ײ

					bullet [j].exist = 0;

					bullet [i].exist = 0;

					ClearBullet( bullet[j].x, bullet[j].y, BulletCheak(bullet[j].x, bullet[j].y ));     //Ĩ��j�ӵ�ͼ��,�ӵ�iͼ���ѱ�Ĩ��

					break;

				}

		}

	}

}





void BulletHit(Bullet* bullet)  //����Tankȫ�ֱ������޸�,�ӵ������ײ���ڱ�����,�ӵ�����ײ����BulletShoot�м�Ⲣ����

{
	//��ÿ�δ��е�̹�˶���һ���������ܰ�����̹�˷��ڲ�������

	int x = bullet->x;          //�������Tankʹ��ȫ�ֱ���

	int y = bullet->y;          //���ﴫ���ֵ���ӵ�����,������ֵ����Ҫ�ı�

	int i;

	if (mapa[y][x] == 1 || mapa[y][x] == 2) //�ӵ�����ש��

	{

		if (bullet->direction == UP || bullet->direction == DOWN) //����ӵ��������

			for (i = -1 ; i <= 1 ; i++)

				if (mapa[y][x + i] == 1 || mapa[y][x + i] == 2) //����ӵ�����ש������Ϊש��,��ɾ��ש,������(һ��Ϊ̹�˻���������)�����

				{

					mapa[y][x + i] = 0; //ש����

					GoToxy(2 * x + 2 * i, y);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); //������ɫ

					printf("  ");

				}

		if (bullet->direction == LEFT || bullet->direction == RIGHT) //���ӵ��Ǻ����  (���ӵ�����ʵ��ͬ��)

			for (i = -1 ; i <= 1 ; i++)

				if (mapa[y + i][x] == 1 || mapa[y + i][x] == 2)

				{

					mapa[y + i][x] = 0;

					GoToxy(2 * x, y + i);

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED); //������ɫ

					printf("  ");

				}

		bullet->exist = 0;         //����ӵ��Ѿ���������

	}

	else if (mapa[y][x] == 4 || mapa[y][x] == 6 ) //�ӵ������߿���߲��ɴݻٷ���

		bullet->exist = 0;

	else if (bullet->my && mapa[y][x] >= 100 && mapa[y][x] < 104 ) //���ҵ��ӵ������˵з�̹��

	{

		int num = mapa[y][x] % 100; //map[y][x]%100 ��ͬ�� tank.num ����ͨ��mapֵ��ȡ��̹����Ϣ

		if (AI_tank[num].model == 3 && AI_tank[num].color == 2) //��Ϊfirm tank,��color==2����̹��Ϊ��ɫ,����û���ܵ��˺�

			AI_tank[num].color = 3;                      //���ɻ�ɫ��color=3Ϊ��ɫ

		else if (AI_tank[num].model == 3 && AI_tank[num].color == 3)

			AI_tank[num].color = 4;                      //4Ϊ��ɫ

		else                       //�������͵�̹�˻���firm tankΪ��ɫ�����

		{

			AI_tank[num].alive = 0;

			ClearTank(AI_tank[num].x, AI_tank[num].y);       //�����̹��

		}

		bullet->exist = 0;

		score += 100;

		GoToxy(102, 5);            //�ڸ���Ļ�ϴ�ӡ������

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		printf("%d ", score);

	}

	else if (mapa[y][x] == 200 && bullet->my == 0 ) //���з��ӵ������ҵ�̹��

	{

		my_tank.alive = 0;

		ClearTank(my_tank.x, my_tank.y);

		bullet->exist = 0;

		my_tank.revive++;      //�ҵ�̹�˸������+1(���ҵ�̹�˸������������ֵ�йء���������Լ�)

		score -= 100;          //��������

		GoToxy(102, 5);        //�ڸ���Ļ�ϴ�ӡ������

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		printf("%d   ", score);

		GoToxy(102, 7);        //�ڸ���Ļ��ӡ���ҵ�ʣ������ֵ

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

		printf("%d   ", MAX_LIFE - my_tank.revive);

	}

	//    else if(bullet->my==0 && map[y][x]>=100 && map[y][x]<104) //�з��ӵ����ез�̹��,�������������ӵ����з�ʽ,������ʱ����

	//        bullet->exist=0;

	else if (mapa[y][x] == 9)   //�ӵ�������(������˭���ӵ�)

	{

		bullet->exist = 0;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

		GoToxy(38, 37);
		printf("      ");

		GoToxy(38, 38);
		printf("����  ");

		GoToxy(38, 39);
		printf("������");

		GameOver(1);           //��Ϸ����,����1�����ϼұ���

	}

}





int BulletCheak (int x, int y) //�ж��ӵ���ǰλ�����,�ж��ӵ��Ƿ���ײ,�Ƿ�λ��ˮ���ϡ�

{
	//���ϰ�����0,���ϰ����ӵ��ڵ��淵��1���ӵ���ˮ���Ϸ���2

	if (mapa[y][x] == 0)

		return 1;

	else if (mapa[y][x] == 5)

		return 2;

	else

		return 0;

}





void PrintBullet (int x, int y, int T) //��ǰ����BulletCheak ��ֵ������ T

{

	if (T == 1)       //  T==1 ��ʾ�ӵ���ǰ������½����

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	else if (T == 2)  //  T==2 ��ʾ�ӵ���ǰ������ˮ����

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_BLUE);

	GoToxy(2 * x, y);

	printf("��");

}





void ClearBullet(int x, int y, int T) //��ǰ����BulletCheak ��ֵ������ T

{

	GoToxy(2 * x, y);

	if (T == 2)     //  T==2 ��ʾ�ӵ���ǰ������ˮ����

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

		printf("��");

	}

	else if (T == 1) //  T==1 ��ʾ�ӵ���ǰ������½����

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);

		printf("��");

	}

}





//positionΪ̹������λ��,-1Ϊ��λ��,0Ϊ�м�,1Ϊ��,2Ϊ�ҵ�̹��λ��

void BuildAITank(int* position, Tank* AI_tank)   //ִ��һ�θú���ֻ����һ��̹��

{
	//rand������ʽ��0<=rand()%(a+1)<=a  0+m<=rand()%(n-m+1)+m<=n

	//rand����ʵ��1��n��1<=rand()%(n)+1<=n

	if (AIPositionCheak(*position))       //����λ�����ϰ�,�����ɡ�position�������AIPositionCheak��������

	{

		AI_tank->x = 20 + 18 * (*position); //20 + 18 * position ��Ӧ��������λ�õ�x������

		AI_tank->y = 2;

		if (AI_tank->revive == level_info[level - 1].firm_tank_order) //̹�˳���(����)����==�ؿ���Ϣ(level_info)��firm tank�ĳ��ִ���

		{

			AI_tank->model = 3;           //3Ϊfirm tank��ģ��(���)

			AI_tank->color = 2;           //��ɫ����2Ϊ��ɫ�������������ColorChoose

		}

		else if (AI_tank->revive == level_info[level - 1].fast_tank_order) //ͬ��if��������fast_tank��

		{

			AI_tank->model = 2;

			AI_tank->color = rand() % 6 + 1; //������firm tank�������ɫ����ɫ����Ϊ1~6,�ֱ����ͬ��ɫ,�������ColorChoose

		}

		else      //��̹ͨ��

		{

			AI_tank->model = 1;

			AI_tank->color = rand() % 6 + 1; //������firm tank�������ɫ

		}

		AI_tank->alive = 1;       //̹�˱�Ϊ����

		AI_tank->direction = 2 ;  //������

		AI_tank->revive++;        //�������+1

		PrintTank(*AI_tank);

		(*position)++;

		remain_enemy--;

		GoToxy(102, 9);           //�ڸ���Ļ�ϴ�ӡʣ��̹����

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

		printf("%d ", remain_enemy);

		if (*position == 2)       //positionֻ��Ϊ0,1��-1������positionѭ������

			*position = -1;

		return ;                  //��������һ��̹�ˣ�������ú���

	}

}





int AIPositionCheak( int position )    //positionΪ̹������λ��2Ϊ�ҵ�̹��λ�ã�����ΪAIλ��-1Ϊ��λ��0Ϊ�м�λ�ã�1Ϊ��λ

{

	int    x, y;

	if (position == 2)                 //2Ϊ�ҵ�̹��λ�ã�������ʱ�ò���

		x = 15, y = 38;

	else

		y = 2, x = 20 + 18 * position ; //20 + 18 * position ��Ӧ��������λ�õ�x������

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

			if ( mapa[y + j - 1][x + i - 1] != 0) //��������ľŹ��������ϰ���

				return 0;              //�򷵻�0����ʾ������λ�����谭

	return 1;                          //��������1����ʾ������λ�����谭

}





void MoveAITank(Tank* AI_tank) //AIר�ú������ú�����ҪΪAI��ǿ

{

	if (AI_tank->alive)        //���̹�˻���

	{

		if (AI_tank->stop != 0) //̹���Ƿ�ֹͣ�˶����жϣ���stop������Ϊ0

		{

			AI_tank->stop--;   //���̹�˱��غ�ֹͣ�˶�

			return;

		}

		if ( !(rand() % 23) )  //22��֮1�ĸ���ִ�з�������

		{

			AI_tank->direction = rand() % 4 + 1;

			if ( rand() % 3 )  //�ڷ������ú���2��֮1�ĸ���ֹͣ�߶�3����ʱ��

			{

				AI_tank->stop = 2;

				return;

			}

		}

		ClearTank (AI_tank->x, AI_tank->y);

		if (TankCheak ( *AI_tank, AI_tank->direction))   //���ǰ�����ϰ�

			switch ( AI_tank->direction )

			{

				case UP   :
					AI_tank->y--;
					break;  //��ǰ��һ��

				case DOWN :
					AI_tank->y++;
					break;  //��ǰ��һ��

				case LEFT :
					AI_tank->x--;
					break;  //��ǰ��һ��

				case RIGHT:
					AI_tank->x++;
					break;  //��ǰ��һ��

			}

		else                     //ǰ�����ϰ�

		{

			if (!(rand() % 4))   //3��֮1�ĸ�����ת

			{

				AI_tank->direction = rand() % 4 + 1;

				AI_tank->stop = 2; //��ת֮��ֹͣ�߶�3����ʱ��

				PrintTank(*AI_tank);

				return;          //��continue����������Ĵ�ӡ����,�������ȴ�ӡ

			}

			else                 //����3��֮2�ļ���ѡ����ȷ�ķ���

			{

				int j;

				for (j = 1; j <= 4; j++)

					if (TankCheak ( *AI_tank, j ))  //ѭ���ж�̹�����������ϰ�,�˺�����ֵ1Ϊ��ͨ��

						break;

				if (j == 5)      //j==5˵����̹�����ܶ����ϰ���޷�ͨ��

				{

					PrintTank(*AI_tank);

					return;      //�����������whileѭ���Է�������

				}

				while (TankCheak ( *AI_tank, AI_tank->direction) == 0)  //���ǰ�������ϰ�

					AI_tank->direction = (rand() % 4 + 1);              //�򻻸����������

			}

		}

		PrintTank(*AI_tank);     //��ӡAI̹��

	}

}





void BuildMyTank (Tank* my_tank) //�����ҵ�̹��

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

	PrintTank (*my_tank) ;   //��ӡ�ҵ�̹��

}





void MoveMyTank(int turn )   //���ר�ú�����turnΪkeyboard�����������벻ͬ�����������Ĳ�ͬ��ֵ

{

	ClearTank(my_tank.x, my_tank.y);         //map �����С��ҵ�̹�ˡ���������������ڴ˺��������

	my_tank.direction = turn;                //����������ķ���ֵ�����ҵ�̹�˷���ֵ

	if (TankCheak ( my_tank, my_tank.direction ))  //����ʱ�ҵ�̹�˵�ǰ���������ϰ�

		switch (turn)

		{

			case UP   :
				my_tank.y--;
				break;  //��ǰ��һ��

			case DOWN :
				my_tank.y++;
				break;  //��ǰ��һ��

			case LEFT :
				my_tank.x--;
				break;  //��ǰ��һ��

			case RIGHT:
				my_tank.x++;
				break;  //��ǰ��һ��

		}                                        //��̹�˵�ǰ���������ϰ�����������仯ֱ�Ӵ�ӡ��ת���̹��

	PrintTank (my_tank);

}





bool TankCheak(Tank tank, int direction) //���̹��ǰ���ϰ�����,����Ϊ�����ꡣ��ֵ1Ϊ��ͨ��,��ֵ0Ϊ�赲(�˻�����)

{

	switch (direction)                   //direction����   1�ϣ�2�£�3��4��

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

			printf("���󣡣�");

			Sleep(5000);

			return 0;

	}

}





void ClearTank(int x, int y)  //���̹�˺������˻����ã�

{

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

		{
			//��̹��ռ�õĵ�ͼ�ϵľŸ�ȥ��

			mapa[y + j - 1][x + i - 1] = 0;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);

			GoToxy(2 * x + 2 * j - 2, y + i - 1);

			printf("  ");

		}

}





void PrintTank(Tank tank)     //��ӡ̹�ˣ��˻����ã� ���ڶ�ȡ��Tank�����϶�,�ʾͲ�������һһ������

{
	// tank.color������Ӧ��ͬ����ɫ,��Χ 1 ~ 6

	ColorChoose(tank.color);  //��ɫѡ����   ����һ��������װ���ַ�ָ��(��װ�ַ���)������ָ��(ָ��һά�����׵�ַ��ָ��)

	char *(*tankF)[4] = tank_figure[tank.model];  //����ά������ַ����ֵ������ָ�� model==0Ϊ�ҵ�̹��,4Ϊ����1̹��,8Ϊ����2,����

	for (int i = 0; i < 3; i++)

	{

		GoToxy((tank.x - 1) * 2, tank.y - 1 + i); //��̹�������������ߣ����������д�ӡ

		printf("%s", tankF[i][tank.direction - 1]); //��ӡ���ǵ�ַ����ַ���ַ���

		for (int j = 0; j < 3; j++)

			if (tank.my)      //��Ϊ�ҵ�̹��

				mapa[tank.y + j - 1][tank.x + i - 1] = 200; //��map�ϰ�"̹��"�Ÿ������������̹�˵Ĳ������з���ֵΪ100~103,�ҷ�Ϊ200

			else

				mapa[tank.y + j - 1][tank.x + i - 1] = 100 + tank.num; //��������ͨ��mapֵ��ȡ̹�˱��,��ȡ������BulletHit ����

	}

}





void HideCursor()  //���ع��

{
	//CONSOLE_CURSOR_INFO�ṹ���������̨������Ϣ,DWORD dwSize���ٷֱȺ�ȣ�1~100����BOOL bVisible����Ƿ�ɼ�

	CONSOLE_CURSOR_INFO cursor_info = {1, 0};

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //SetConsoleCursorInfo��������ָ���Ŀ���̨���Ĵ�С�Ϳɼ��ԡ�

}





void GoToxy(int x, int y) //����ƶ�������X��ʾ�����꣬Y��ʾ�����ꡣ

{

	COORD  coord;         //ʹ��ͷ�ļ��Դ�������ṹ

	coord.X = x;          //���ｫint����ֵ����short,�����������漰������ֵ�����ᳬ��short��Χ

	coord.Y = y;

	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE); //��ñ�׼������

	SetConsoleCursorPosition(a, coord);        //�Ա�׼����ľ��Ϊ�������ÿ���̨�������

}





void ColorChoose(int color)   //��ɫѡ����

{

	switch (color)

	{

		case 1:               //����ɫ(�ҵ�̹����ɫ)

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

			break;

		case 2:               //��ɫ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

			break;

		case 3:               //��ɫ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);

			break;

		case 4:               //��ɫ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

			break;

		case 5:               //��ɫ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

			break;

		case 6:               //��ɫ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

			break;

		case 7:               //����ɫ(����ɫ�������ɫ������ʶ�Ȳ��� ��̹����ɫ��ѡ�ô���ɫ),ֻ����������ɫ��˸��

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

			break;

	}

}





void Stop()    //��ͣ

{

	int color = 1, timing = 0;

	while (1)

	{

		if (timing++ % 30 == 0)

		{

			ColorChoose(color);   //��ɫѡ��

			GoToxy(100, 13);      //����Ļ��ӡ

			printf("��Ϸ��ͣ");

			GoToxy(88, 17);

			printf("���س����ص���Ϸ");

			GoToxy(88, 18);

			printf("�� Esc���˳���Ϸ");

			if (++color == 8)

				color = 1;

		}

		if (GetAsyncKeyState( 0xD ) & 0x8000)     //�س���

		{

			GoToxy(100, 13);      //����Ļ��ӡ

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

			printf("���ڽ���");   //���ǵ�ԭ������ʾ

			GoToxy(88, 17);

			printf("                     ");

			GoToxy(88, 18);

			printf("                     ");

			break;

		}

		else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc���˳�

			exit(0);

		Sleep(20);

	}

}





void ClearMainScreen()  //����Ļ������������ʹ��system("cls");�ٴ�ӡ�����һ��������ɿ������һ�еĴ������Ե�����д��������

{

	for (int i = 1; i < 40; i++)

	{

		GoToxy(2, i);

		printf("                                                                              ");

	}

}





void Frame ()     //��ӡ��Ϸ������

{
	//SetConsoleTextAttributeΪ�����ı���ɫ���ı�������ɫ����

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("  �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf("  �y�y�y�y�y�y�y�y�y�y�y�y�y \n");

	for (int i = 0; i < 14; i++)

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

		printf("��                                                                              ��");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

		printf(" |                          |\n");

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("��                                                                              ��");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf(" |�T�T�T�T�T�T�T�T�T�T�T�T�T|\n");

	for (int i = 0; i < 24; i++)

	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

		printf("��                                                                              ��");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

		printf(" |                          |\n");

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("  ������������������������������������������������������������������������������  ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);

	printf(" �i�i�i�i�i�i�i�i�i�i�i�i�i�i\n");

	SideScreen ();  //��ӡ����Ļ

}





void PrintMap()     // ��ӡ��ͼ(��ͼ�ȵ�ͼ�ϰ���)

{

	for (int j = 0; j < 41; j++)

		for (int i = 0; i < 41; i++)

			if (mapa[i][j] == 6)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN

				                        | FOREGROUND_RED | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE);

				GoToxy(2 * j, i);

				printf("��");

			}

			else if (mapa[i][j] == 2)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);

				GoToxy(2 * j, i);

				printf("��");

			}

			else if (mapa[i][j] == 1)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);

				GoToxy(2 * j, i);

				printf("��");

			}

			else if (mapa[i][j] == 5)

			{

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

				GoToxy(2 * j, i);

				printf("��");

			}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

	GoToxy(38, 37);
	printf("����");

	GoToxy(38, 38);
	printf("������");    //�����۵�ͼ��ô��,������λ�ò���,�Ҽҵ��ַ�����,��������������ʽ��ӡ

	GoToxy(38, 39);
	printf("������");    //��ֱ�Ӵ�ӡ(�Ҽҵ�mapֵ������޹�)

}





void GetMap()      //��ͼ��ź���

{
	//map���ֵ: ��λ����ֵΪ��ͼ���鲿�֣���λ����ֵΪ̹��

	int i, j;      //map���ֵ: 0Ϊ��ͨ��½�أ�1Ϊ��ש��2������5Ϊˮ��100Ϊ�з�̹�ˣ�200Ϊ�ҵ�̹�ˣ�

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

	PrintMap();         //��ӡ��ͼ

}





void GameOver(bool home)

{

	int timing = 0, color = 1;

	while (1)

	{

		if (timing++ % 30 == 0)    //��Ϸ����ԭ��Ϊ����ֵΪ0

		{

			ColorChoose(color);    //��ɫѡ��

			if (home)              //��Ϸ����ԭ��Ϊ�ϼұ���,����ӡһ��������ʾ���

			{

				GoToxy(37, 19);    //����Ļ���Ĵ�ӡ

				printf("�ϼұ���!");

			}

			GoToxy(37, 20);        //����Ļ���Ĵ�ӡ

			printf("��Ϸ����!");

			GoToxy(100, 13);       //����Ļ��ӡ

			printf("��Ϸ����");

			GoToxy(88, 17);

			printf("�밴�س������¿�ʼ!");

			GoToxy(88, 18);

			printf("�� Esc���˳���Ϸ!");

			if (++color == 8)

				color = 1;

		}

		if (GetAsyncKeyState( 0xD ) & 0x8000) //�س���

		{

			//            system("cls");       //����,�����������ٴδ�ӡ�����һ��������ɿ������һ�е�bug�����ѡ���Խ���������

			//            Frame ();            //���´�ӡ��Ϸ���

			score -= 500;        //����-500

			ClearMainScreen();   //�������������������ٴδ�ӡ���

			Initialize();        //�ӱ������¿�ʼ

			break;

		}

		else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc���˳�

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


				ColorChoose(color);   //��ɫѡ��

				GoToxy(37, 20);       //����Ļ���Ĵ�ӡ

				printf("��ϲ����!");

				GoToxy(100, 13);      //����Ļ��ӡ

				printf("�ȴ��¹�");

				GoToxy(87, 17);

				printf("�밴�س���������һ��!");

				GoToxy(88, 18);

				printf("�� Esc���˳���Ϸ!");

				if (++color == 8)

					color = 1;

			}

			if (GetAsyncKeyState( 0xD ) & 0x8000) //�س���

			{

				GoToxy(88, 17);       //Ĩ������Ļ�е���ʾ

				printf("                     ");

				GoToxy(88, 18);

				printf("                     ");

				ClearMainScreen();   //�������������������ٴδ�ӡ���

				Initialize();        //��ʼ������һ�ؿ�ʼ,level��++

				break;

			}

			else if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc���˳�

				exit(0);

			Sleep(20);

		}

	else   //level>8 ͨ��

		while (1)

		{

			if (timing++ % 5 == 0)

			{

				ColorChoose(color);

				GoToxy(33, 20);       //����Ļ���Ĵ�ӡ

				printf("��ϲͨ��ȫ���ؿ�!");

				GoToxy(100, 13);      //����Ļ��ӡ

				printf("��ͨȫ��");

				GoToxy(88, 17);

				printf("��ϲͨ��ȫ���ؿ�!");

				GoToxy(88, 19);

				printf("�� Esc���˳���Ϸ!");
				GoToxy(88, 20);
				printf("���ߣ�������");

				if (++color == 8)

					color = 1;

			}

			if (GetAsyncKeyState( 0x1B ) & 0x8000) //Esc���˳�

				exit(0);

			Sleep(10);

		}

}





void GameCheak()

{
	//ʣ�����Ϊ0����̹��ȫ�������

	if (remain_enemy <= 0 && !AI_tank[0].alive && !AI_tank[1].alive && !AI_tank[2].alive && !AI_tank[3].alive )

		NextLevel();        //������һ��

	if (my_tank.revive >= MAX_LIFE) //�ҵ�����ֵ(�������)ȫ������ MAX_LIFE

		GameOver(0);        //��Ϸ����������0�����ҵĸ�������ù�(����ֵΪ0)����Ϸ�����������жϣ���һ�����ϼұ���

}





void SideScreen ()  //����Ļ ��(84��,110ĩ,��˫�ַ�������108��ӡ���һ���֣���(11����ĩ,13������,39����ĩ��Ϊ������ô���38)

{
	// |         ��  d  ��         |   " |                          |\n"

	GoToxy(93, 2);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	printf("��     ��");

	GoToxy(92, 5);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("��  ����");

	GoToxy(92, 7);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("��  ����");

	GoToxy(86, 9);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	printf("ʣ��з�̹�ˣ�");

	GoToxy(86, 11);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("��ǰ��Ϸ�ٶȣ�  %d", 21 - speed);

	GoToxy(86, 13);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);

	printf("��ǰ��Ϸ״̬��");

	GoToxy(94, 19);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	GoToxy(94, 24);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);

	printf("��  ��");

	GoToxy(86, 27);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("�����  ��������  �ƶ�");

	GoToxy(93, 29);

	printf("x �� ���");

	GoToxy(89, 31);

	printf("+ - ������Ϸ�ٶ�");

	GoToxy(90, 33);

	printf("��Ϸ�ٶȷ�Χ1~20");

	GoToxy(90, 35);

	printf("�س��� ��ͣ��Ϸ");

	GoToxy(90, 37);

	printf("Esc��  �˳���Ϸ");

	GoToxy(90, 39);

	printf("���ߣ�������");

	/*    printf("��  ��");     //���ǵڶ�����ϸ˵������ʽ
	    GoToxy(86,21);
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	    printf("�����  ��������  �ƶ�");
	    GoToxy(93,23);
	    printf("x �� ���");
	    GoToxy(89,25);
	    printf("+ - ������Ϸ�ٶ�");
	    GoToxy(90,27);
	    printf("��Ϸ�ٶȷ�Χ1~20");
	    GoToxy(90,29);
	    printf("�س��� ��ͣ��Ϸ");
	    GoToxy(90,31);
	    printf("Esc��  �˳���Ϸ");
	    GoToxy(86,33);
	    printf("�з�̹��ȫ�����������");
	    GoToxy(87,34);
	    printf("����̹������ֵΪ0 ��");
	    GoToxy(86,35);
	    printf("���·����ϼұ�����ʧ��");
	    GoToxy(86,36);
	    printf("��̹�����̹���ӵ���ײ");
	    GoToxy(87,37);
	    printf("���������̹�˼��ӵ���");
	    GoToxy(86,38);
	    printf("ײ�������ҿɴ�����̹��");*/

}





void Initialize()      //��ʼ��

{

	remain_enemy = 16;

	my_tank.revive = 0; //�ҵ�̹�˸������Ϊ0

	position = 0;

	bul_num = 0;

	GetMap();

	BuildMyTank( &my_tank );

	for (int i = 0; i < 12; i++) //�ӵ���ʼ��

	{

		bullet [i].exist = 0;

		bullet [i].initial = 0;

	}

	for (int i = 0; i <= 3; i++)  //AI̹�˳�ʼ��

	{

		AI_tank [i].revive = 0;

		AI_tank [i].alive = 0; //��ʼ��̹��ȫ�ǲ����ģ�BuildAITank()�Ὠ�����½���������̹��

		AI_tank [i].stop = 0;

		AI_tank [i].num = i;

		AI_tank [i].my = 0;

		AI_tank [i].CD = 0;

	}

	GoToxy(97, 2);                       //�ڸ���Ļ�Ϲؿ���

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);

	printf("%d", level);

	GoToxy(102, 5);                      //�ڸ���Ļ�ϴ�ӡ����

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

	printf("%d   ", score);

	GoToxy(102, 7);                      //�ڸ���Ļ��ӡ�ҵ�ʣ������ֵ

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

	printf("%d", MAX_LIFE - my_tank.revive);

	GoToxy(102, 9);                      //�ڸ���Ļ�ϴ�ӡʣ��̹����

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	printf("%d ", remain_enemy);

	GoToxy(100, 13);                     //�ڸ���Ļ�ϴ�ӡ״̬

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);

	printf("������Ϸ");


}


int xyx_zjm() {
	Sleep(100);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                                ��Ϸ���� v1.5.7                              /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                                    1.����                                  /" << endl;
	Sleep(dhdd);
	cout << "/                                   2.̰����                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                   3.���ܿ�                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                  4.���ӽ���                                /" << endl;
	Sleep(dhdd);
	cout << "/                                   5.����ɱ                                 /" << endl;
	Sleep(dhdd);
	cout << "/                                  6.̹�˴�ս                                /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);
	cout << "/                             �����Ŵ�  404�˳�                          /" << endl;
	Sleep(dhdd);
	cout << "------------------------------------------------------------------------------" << endl;
	Sleep(dhdd);

	int x_qn = 0;
	cout << "С��Ϸ>"; //����

	cin >> x_qn;

	switch (x_qn) {
		case 1: //������
			while (1) {
				int num, cs = -999;
				srand((unsigned int)time (NULL));
				int sr;
				cout << "������Ƕ��٣���������Ϊ1��>";
				cin >> sr;
				num = rand() % sr + 1;
				for (int i = 0; cs != num; i++) { //��������

					cout << "�����>" << endl;
					cin >> cs;
					if (cs > num) {
						cout << "���ˣ�" << endl;
					}
					if (cs < num) {
						cout << "С�ˣ�" << endl;
					}
					if (cs > sr) {
						cout << "��̫�������ˣ��ⶼɶ���ְ�" << endl;
					}
				}
				cout << "�¶��ˣ�" << endl;
				Sleep(50);
				int zl = 0;
				cout << "Ҫ�˳��𣿣�1����/0�ˣ�" << endl; //�Ƿ����
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
			cout << "--------------------̰����---------------------" << endl;
			cout << "��ѡ���Ѷ�.����1-10������1����,1���,10������" << endl;
			cout << "Ȼ�������Ϸ����,�Է�������Ʒ���.ף����Ϸ���!" << endl;
			cout << "-----------------------------------------------" << endl;
			cout << "�������Ѷȼ���" ;
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
			/*** ����ȫ����ʼ���������߳���λ�ã����� ***/
			snake_length = 5;
			clock_t a, b;
			char ch;
			double hard_len;
			for (int i = 0; i <= 4; i++) {
				snake[i].x = 1;
				snake[i].y = 5 - i;
			}
			dir = 3;
			/*** �����ʼ��ͼ������ʳ�� ***/
			system("cls");
			hide();
			print_wall();
			print_food();
			print_snake();
			locate(m + 2, 0);
			cout << "���ڳ�����: ";
			/*** ��ʼ��Ϸ ***/
			while (1) {
				/*** �Ѷ��泤�����Ӷ���� ***/
				hard_len = (double)snake_length / (double) (m * n);
				/*** ����ʱ�䣬��λ��ms ***/
				a = clock();
				while (1) {
					b = clock();
					if (b - a >= (int)(400 - 30 * hard) * (1 - sqrt(hard_len))) break;
				}
				/*** ���ܼ���������������ң����Դ˸ı䷽�� ***/
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
				/*** ǰ�� ***/
				if (!go_ahead()) break;
				/*** ����������ʱ���� ***/
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
			cout << "��������" << endl;

			break;


	}

}

//����Ա��������Ӧ��ID��7��
int gly() {
	cout << "��ӭ��������Ա����ϵͳ��רΪ������Ա�͹���Աʹ��" << endl;
	Sleep(100);
	while (1) {
		cout << "���������Ĺ���Ա�˻�����(����˳�����404)��" << endl;
		int gl_s_password;
		cin >> gl_s_password;
		if (gl_s_password == 404) {
			return 0;
		} else {
			if (gl_s_password == gl_password) { //������ȷ
				break; //����ѭ�����й���Ա����
			} else {
				cout << "�������δ�ҵ��˹���Ա�����������롣" << endl;
			}
		}
	}
	Sleep(150);
	cout << "������ȷ���ѽ������Աϵͳ" << endl;
	while (1) { //����Ա��ϵͳ
		cout << "|=======================================wick DOS����Ա=====================================|" << endl;
		Sleep(sd);
		cout << "|                                   ����ԱϵͳΪ����Ա����                                 |" << endl;
		Sleep(sd);
		cout << "|                                      �汾��0.3.5����                                     |" << endl;
		Sleep(sd);
		cout << "|                              ��ӭ����Ա��������������,404�˳�                          |" << endl;
		Sleep(sd);
		cout << "|==========================================================================================|" << endl;
		Sleep(sd);
		cout << "|                                       �ر����г���1��                                  |" << endl;
		Sleep(sd);
		cout << "|                                      ��ϵͳ��Ϣ���ң�2��                                 |" << endl;
		Sleep(sd);
		cout << "|                                     ɾ����ǰ�û��ļ���3��                                |" << endl;
		Sleep(sd);
		cout << "|==========================================================================================|" << endl;
		Sleep(sd);

		cout << "��Ĺ���Ա���룺" << gl_password << endl;
		Sleep(sd);
		//����
		int f_gl;
		cout << endl << "wkC-guanli>>";
		cin >> f_gl;
		switch (f_gl) {
			case 404:  //�˳�����
				Sleep(200);
				cout << "���˳�" << endl;
				return 0;
			case 1: //ǿ���˳�ϵͳ
				Sleep(500);
				cout << "<wkC.quit>" << endl;
				Sleep(1255);
				exit(1); //�˳�
				break;
			case 2:
				//�û���Ϣ�Ҹ�
				cout << "���棡ϵͳ��Ϣ�ѻ��ң�" << endl;
				hy = "ϵͳ�ѱ����֣�����%^&*IKJ5H3?ad^&*IKIWE(ep4+", yhm = "hunluan,,364yiheorl^&I*O*(LP:O24", ah = "ahsdituyp;^&*()P{456";
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
				cout << "���棬�˲����ᵼ�������˺ų����޷��һأ��Ƿ�ȷ������1ȷ����0ȡ����" << endl; //��ʾ
				//�Ƿ�ȷ��
				int glys = 0;
				cin >> glys;
				if (glys == 1) {
					break;
				}
				Sleep(200);
				//�޸�
				ofstream flie(yhm + "\\Username.txt");
				flie << yhm + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n���ļ��ѱ�����Աɾ��";
				ofstream flie2(yhm + "\\Userage.txt");
				flie2 << nl + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n���ļ��ѱ�����Աɾ��";
				ofstream flie3(yhm + "\\Usermima.txt");
				flie3 << password + "78374972349jklduoflI&^O*:(P/'3'/4oytu6&%I*OL(P)#:oi4j5hoiuw7ol;\n���ļ��ѱ�����Աɾ��";
				break;
		}

	}


}

//����ΪwinkodeC�ײ�����

int dh() {
	//���ض���
	if (VIP == false) {
		system("cls");
		cout << "%0";
		system("cls");
		cout << "%1��";
		system("cls");
		cout << "%2����";
		system("cls");
		cout << "%3������";
		system("cls");
		cout << "%4��������";
		system("cls");
		cout << "%5����������";
		system("cls");
		cout << "%6������������";
		system("cls");
		cout << "%7��������������";
		system("cls");
		cout << "%8����������������";
		system("cls");
		cout << "%9������������������";
		system("cls");
		cout << "%10��������������������";
		system("cls");
		cout << "%11����������������������";
		system("cls");
		cout << "%12������������������������";
		system("cls");
		cout << "%13��������������������������";
		system("cls");
		cout << "%14����������������������������";
		system("cls");
		cout << "%15������������������������������";
		system("cls");
		cout << "%16��������������������������������";
		system("cls");
		cout << "%17����������������������������������";
		system("cls");
		cout << "%18������������������������������������";
		system("cls");
		cout << "%19��������������������������������������";
		system("cls");
		cout << "%20����������������������������������������";
		system("cls");
		cout << "%21������������������������������������������";
		system("cls");
		cout << "%22��������������������������������������������";
		system("cls");
		cout << "%23����������������������������������������������";
		system("cls");
		cout << "%24������������������������������������������������";
		system("cls");
		cout << "%25��������������������������������������������������";
		system("cls");
		cout << "%26����������������������������������������������������";
		system("cls");
		cout << "%27������������������������������������������������������";
		system("cls");
		cout << "%28��������������������������������������������������������";
		system("cls");
		cout << "%29����������������������������������������������������������";
		system("cls");
		cout << "%30������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%31��������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%32����������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%33������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%34��������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%35����������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%36������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%37��������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%38����������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%39������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%40��������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%41����������������������������������������������������������������������������������";
		Sleep(15);
		system("cls");
		cout << "%42������������������������������������������������������������������������������������";
		Sleep(25);
		system("cls");
		cout << "%43��������������������������������������������������������������������������������������";
		Sleep(75);
		system("cls");
		cout << "%44����������������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%45������������������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%46��������������������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%47����������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%48������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%49��������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%50����������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%51������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%52��������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%53����������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%54������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%55��������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%56����������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%57������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%58��������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%59����������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%60������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%61��������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%62����������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%63������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%64��������������������������������������������������������������������������������������������������������������������������������";
		Sleep(5);
		system("cls");
		cout << "%65����������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%66������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%67��������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%68����������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%69������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%70��������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%71����������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%72������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%73��������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(5);
		system("cls");
		cout << "%74����������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(5);
		system("cls");
		cout << "%75������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(5);
		system("cls");
		cout << "%76��������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%77����������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%78������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%79��������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(50);
		system("cls");
		cout << "%80����������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(300);
		system("cls");
		cout << "%81������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(10);
		system("cls");
		cout << "%82��������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%83����������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%84������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%85��������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%86����������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%87������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%88��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%89����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%90������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%91��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%92����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%93������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%94��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%95����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%96������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%97��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%98����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%99������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(0);
		system("cls");
		cout << "%100��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
		Sleep(300);

		//ռλ
		cout << endl;
		return 0;
	} else if (VIP == true) {
		cout << "VIPר�����ټ���..." << endl;
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


//������(main)
int zjm() {
	Sleep(1500);
	cout << endl << endl << endl;
	//GUI����

	cout << hy << endl << "��ǰ�û���" << nl << "���" << yhm << endl << "-------------------------------" << endl;
	Sleep(100);
	if (VIP == true) {
		cout << "��ӭ�����û�" + yhm + "����ϵͳ��" << endl << endl;
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
	cout << "|                                         �������1��                                      |" << endl;
	Sleep(sd);
	cout << "|                           xiaodao-BCG������ģ�ͣ�2��[���ڿ���]                         |" << endl;
	Sleep(sd);
	cout << "|                                        ϵͳ���ã�3��                                     |" << endl;
	Sleep(sd);
	cout << "|                                         ��ǩֽ��4��                                      |" << endl;
	Sleep(sd);
	cout << "|                                         С��Ϸ��5��                                      |" << endl;
	Sleep(sd);
	cout << "|                                          �նˣ�6��                                       |" << endl;
	Sleep(sd);
	cout << "|                                         ��������7��                                      |" << endl;
	Sleep(sd);
	cout << "|==========================================================================================|" << endl;
	Sleep(sd);
	cout << "|                      ����Ӧ�ö�Ӧ����(�˳�����404����������505,808����)                  |" << endl;
	Sleep(sd);
	cout << "|                      ��Ҳ��������202������ϵͳ��303ǿ�ƹػ�(����������)                  |" << endl;
	Sleep(sd);
	cout << "|==========================================================================================|" << endl;
	Sleep(sd);
	cout << "������룺" << password << endl;
	Sleep(sd);
	//����
	cout << "ע�⣺�벻Ҫ��������ֵ��ַ���������Ӧ�ñ�Ż�ָ���š�" << endl;
	Sleep(sd * 2);
	cout << endl << "wickDOS APP ID or instruct>>";
	return 0;
}


//���ö������<\>------------------------------------------------------------------------------------------------------------------------------------------

int zjm_sj() {
	int q = 0, d = sd - 5;

	Sleep(1500);
	cout << endl << endl << endl;
	//GUI����
	cout << "|--------------------------------------------����------------------------------------------|" << endl;
	Sleep(d);
	cout << "|                                           wickDOS                                        |" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                      ���� �汾0.6.9.02                                   /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                    ���������涯���ٶȣ�1��                               /" << endl;
	Sleep(d);
	cout << "/                                     ���ļ��ض����ٶȣ�2��                                /" << endl;
	Sleep(d);
	cout << "/                                      ���Ŀ�����ʾ�3��                                 /" << endl;
	Sleep(d);
	cout << "/                                    �鿴winkode������־��5��                              /" << endl;
	Sleep(d);
	cout << "/                                          �������ã�6��                                   /" << endl;
	Sleep(d);
	cout << "/                               �鿴winkode��childsoft�������7��                        /" << endl;
	Sleep(d);
	cout << "/                                          �����£�8��                                   /" << endl;
	Sleep(d);
	cout << "/                                          Ȩ��SVIP��9��                                   /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	cout << "/                                �������ݶ�Ӧ����(�˳�����404)                             /" << endl;
	Sleep(d);
	cout << "/                                                                                          /" << endl;
	Sleep(d);
	cout << "/------------------------------------------------------------------------------------------/" << endl;
	Sleep(d);
	//����
	cout << endl << "wkC-����>>";
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
			cout << "����ǿ���˳�����-�Ƿ�����" << endl;
			Sleep(285);
			cout << "--EOF--" << endl;
			Sleep(35);
			zjm();
			break;
		}
		if (o == 404) {
			Sleep(350);
			cout << "-���˳�����-" << endl;
			Sleep(200);
			break;
		}

		switch (o) {
			case 1:
				cout << "��������Ҫ��ֵ>>";
				cin >> sd;
				Sleep(500);
				cout << "-�������-" << endl;
				Sleep(295);
				break;
			case 2:
				cout << "��������Ҫ��ֵ>>";
				cin >> dhdd;
				Sleep(500);
				cout << "-�������-" << endl;
				Sleep(295);
				break;
			case 3:
				cout << "��������Ҫ��ֵ>>";
				cin >> hy;
				Sleep(500);
				cout << "-�������-" << endl;
				Sleep(295);
				break;
			case 5:
				Sleep(500);
				cout << "---------------------------------winkode������־---------------------------------" << endl;
				Sleep(35);
				cout << "1.sf.cpp                            -2023.11.26          һ���򵥵ĸ߾��ȼӷ�����" << endl;
				Sleep(35);
				cout << "2.�߾����㷨.cpp                    -2023.11.30          һ�����û�����ĸ߾��ȼӷ����������Ż�" << endl;
				Sleep(35);
				cout << "3.�߾����㷨v0.2.0.cpp              -2023.12.2           �Ż��û����棬��GUI�����ɲ鿴��������" << endl;
				Sleep(35);
				cout << "4.�߾����㷨v0.2.103.7a.cpp         -2023.12.3           ���ӿ�����ģʽ�Ϳɵ��ظ��Ի�����" << endl;
				Sleep(35);
				cout << "5.winkodeC_cs.cpp                   -2023.12.5           �ڸ߾��ȼӷ����������������ļ������Ӧ�ô�������ΪwinkodeC" << endl;
				Sleep(35);
				cout << "6.winkodeC_cs2.cpp                  -2023.12.6           ��ʼ��ĥwinkodeC,������๦�ܣ�����Alpha��" << endl;
				Sleep(35);
				cout << "7.winkodeC v2.5.01.cpp              -2023.12.8           ����beta���԰棬�����û����棬�޸�BUG" << endl;
				Sleep(35);
				cout << "8.winkodeC v3.0.1.2s.cpp            -2023.12.10          �޸�Bug������BCG���Ż�����" << endl;
				Sleep(35);
				cout << "9.winkodeC v3.0.15b.cpp             -2023.12.11          �޸���Ҫ����-��������" << endl;
				Sleep(35);
				cout << "10.winkodeC v3.1.67a.cpp           -2023.12.15           �Ż���Ӧ�ô���������ΪFind������������BCG������ں�" << endl;
				Sleep(35);
				cout << "11.winkodeC sasiki.cpp              -2023.12.18          ��һ����ʽ�濪�����ţ�������beta������ϣ��������ݰ������ã�Find��������\
				ʾ��͵ײ��ں��Ż�������Ч��" << endl;
				Sleep(35);
				cout << "12.winkodeC sasiki1.10.2.cpp        -2023.12.20          �������Ż�������������ƣ��޸����ã����ӵ�¼ϵͳ��ǿ�������ٶ�" << endl;
				Sleep(35);
				cout << "13.winkodeC sasiki1.10.9.cpp        -2023.12.24          �޸���֪���⣬����Find����" << endl;
				Sleep(35);
				cout << "14.winkodeC sasiki1.15.5.cpp        -2023.12.27          ��Ҫ����BCG������BCG_Findϵͳ�������汾����������BCG���µ�Ӧ�ó���(Ԥ��\
				��ΪwinkodeC2024)" << endl;
				Sleep(35);
				cout << "15.winkodeC sasiki1.17.2.cpp        -2023.12.29          ������һ��Ŀ����������˱�ǩ��������ϵͳ" << endl;
				Sleep(35);
				cout << "16.winkodeC sasiki1.19.1.cpp        -2024.1.3            ��������winkodeC,������С��Ϸ���ļ���ͻ�����Ӧ�ò㣬�����˿������Ż���\
				�������ݺ�ϵͳ����������Щ������2022.1.10����winkodeC sasiki5.0" << endl;
				Sleep(35);
				cout << "17.wickDOS 1.0.1.cpp                -2024.1.3            ��winkodeC sasiki1.19.1һ�������Ժ�������в�ͬ����Ҫ��������һ��DOSϵ\
				ͳ" << endl;
				Sleep(35);
				cout << "18.wickDOS 1.2.0(wickDOS-300).cpp   -2024.4.28           ��һ��wickDOS�ķ����棬�������նˣ�С��Ϸ�ȣ��Ż���ϵͳ��ʹ����winkodeC\
				���׷ֿ��������Ż�����Ȼ������ΪwickDOS.300" << endl;
				Sleep(35);
				cout << "19.wickDOS300.cpp                  -2024.7.3            �����˹���Աϵͳ�����Ҷ��ļ�ϵͳ����΢����300E�ġ�E������easier������ʹ\
				�ã�����������wickDOS������" << endl;
				Sleep(35);
				cout << "20.wickDOS300E.cpp                  -2024.7.4            ������VIPϵͳ���ӿ�����ٶȡ�" << endl;
				Sleep(35);
				cout << "21.wickDOS300-OUI.cpp               -2024.7.6            �Ż��˽��棬������UI���޸�VIPϵͳ�������ϵͳ���⡣" << endl;
				Sleep(35);
				cout << "21.wickDOS300-OUI.cpp               -2024.8.10           �޸��˳��������ļ��������⣬���ڸ������ˡ�" << endl;
				Sleep(35);
				Sleep(295);
				cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^��ǰ�汾" << endl;
				cout << "����������1���˳�>>";
				cin >> yy;
				if (yy == 1) {
					break;
				}

			case 6:
				Sleep(200);
				cout << "��Ҫ�ָ����루0�����ǹر����루1����";
				cin >> ma;
				Sleep(500);
				cout << "-���������-" << endl;
				Sleep(25);
				break;

			case 7:
				Sleep(100);
				cout << "------------childsoft��չ����------------" << endl;
				Sleep(20);
				cout << "1. 2018.6.30          �������� ������" << endl;
				cout << "2. 2021.8.22          С�� ��ʼ��������������ϵͳ��" << endl;
				cout << "3. 2023.8.27          ��һ��winkode(python)ԭʼʵ�֣�" << endl;
				cout << "4. 2023.9.18          childsoft ������" << endl;
				cout << "5. 2023.10.8          ��һ�����滯winkodeP��2.00ԭʼʵ�֣�" << endl;
				cout << "6. 2023.10.19         �����ƶ��˿�����winkodeWPԭʼʵ�֣�" << endl;
				cout << "7. 2023.11.3          ��һ��winkodeCԭʼʵ�֣���ζ��winkodeͻ����python��������" << endl;
				cout << "8. 2023.11.22         ��ȿ���winkodeC,��������sasiki������2024��3�½�����������" << endl;
				cout << "9. 2024.1.4           ����WKC��wickDOSϵͳԭʼʵ�֣�" << endl;
				cout << "10. 2024.1.24         WKC���ļ�����ϵͳ���û���¼ԭʼʵ�֣�" << endl;
				cout << "11. 2024.4.28         wickDOS�ĵ�һ���汾300������" << endl;
				cout << "12. 2024.7.3          wickDOS�ĵ�һ����Աϵͳԭʼʵ�֣�" << endl;
				Sleep(85);
				cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^���´���" << endl;
				cout << "winkode/wickDOSϵ��ϵͳ�������ܹĵؿ����°汾��" << endl;
				Sleep(200);
				int syy;
				cout << "���س��˳�";
				cin >> syy;

				break;
			case 8:
				Sleep(150);
				cout << "���ڼ���..." << endl;
				Sleep(5000);
				cout << "-���޸���-" << endl;
				Sleep(200);
				cout << "���и��£��뵽winkodeC�����鿴����" << endl;
				Sleep(100);
				break;
			case 9:
				Sleep(200);
				cout << "������Ϊ������VIP��SVIPȨ�潲�⣺" << endl;
				Sleep(dhdd);
				cout << "VIP���е�Ȩ�棺�����ͼ��ر�죬���õ���ҳ��" << endl;
				Sleep(50);
				int sf_v = 0;
				cout << "�Ƿ�����֧��VIP��(0/1)" << endl;
				cin >> sf_v;
				if (sf_v == 1) {
					cout << "���ڿ�ʼVIP��Ϣ¼��..." << endl;
					string V_ps;
					cout << "����������VIP���룺" << endl;
					cin >> V_ps;

					cout << "-[100%]�û��ļ�׼�����" << std::endl;

					ofstream flie(yhm + "\\VIP.txt");
					flie << V_ps;
				}

				break;

		}

	}
	return 0;
}

//ϵͳ���ã�APP ID��3��
int run_sj() {
	qnz();
	return 0;
}
//���ô���-����</>=========================================================================================================================================

//Find-�ļ�����ϵͳ
int yonghu() {
	//�û����ļ���
	string folder_path = yhm;
	string cmd = "mkdir " + folder_path;
	if (system(cmd.c_str()) == 0) {
		cout << "-[100%]�û��ļ�׼�����" << std::endl;
	} else {
		cout << "��������" << std::endl;
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
	cout << "���ڽ���ע�����..." << endl;
	Sleep(500);
	cout << "���������֣�";
	cin >> yhm;
	Sleep(300);
	cout << endl;
	cout << "�������������䣺";
	cin >> nl;
	cout << endl;
	Sleep(200);
	cout << "�������������룺����ǰ����Ϊ" << password << "��";
	cin >> password;
	Sleep(425);
	yonghu();
	cout << "�õģ�ע����ɣ��ѵ�¼��" << endl;
	return 0;
}

int dll() {
	try {
		Sleep(150);
		cout << endl;
		cout << "---����wickDOS.300��¼����---" << endl;
		string U_m = "";
		cout << "�����������û�����";
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

		cout << "-[100%]�û���Ϣ������" << endl;
		while (1) {
			cout << "���������룺";
			int pn = 0;
			cin >> pn;
			if (password == pn) {
				break;
			} else {
				cout << "�������������" << endl;

			}

		}
		string V_mm;
		string V_ms;
		cout << "����������VIP���룺��û��������0��" << endl;
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
				cout << "�õ�!" << endl;
				VIP = false;
				Sleep(100);
			}
		} else {
			cout << "�õ�" << endl;
			VIP = false;

		}

		input.close();
		input2.close();
		input3.close();
		cout << "-��¼�ɹ�-" << endl;
	} catch (exception variable) {
		cout << "δ�ҵ��û���������" << endl;
		Sleep(100);
		int sfdl = 1;
		cout << endl << "�Ƿ�����ע�᣿��1�� 0����";
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


int Find() {  //��.Find
	switch (gms) {
		case 0:
			cout << "			---��⵽ϵͳ�������ϣ���ǿ���˳�---" << endl;
			Sleep(1000);
			cout << "		       ---ע�⣬�벻Ҫ�������������ķ���---" << endl;
			Sleep(300);
			cout << "   :(  your PC is broken" << endl;
			Sleep(1000);
			lanping();
			exit(0);

		case 1:
			//�����
			jsq();
			break;
		case 2:
			//BCG
			bcg();
			break;
		case 3:
			//����
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
			zdh("�����˳�...");
			Sleep(1550);
			exit(0);
			break;
		case 505:
			zdh("��ӭʹ��wickDOS!����һ������ϵͳ��");
			break;
		case 808:
			run_sj();
			break;
		case 202:
			zdh("��������...");
			Sleep(200);

		default:
			//���������޷���ʶ��
			cout << endl << "������������������ -Error 0x0000005f-";
			break;
	}
}
//Find-�ļ�����������<\>


//��������
int run_z() {
	//Ч��
	int s_password = 0;
	while (true) {
		cout << endl << "���ڽ�����ҳ��";
		Sleep(75);
		if (ma == 1) {
			s_password = password;
		}

		int cs = 0;
		while (true) {
			cout << "���������룺" << endl;
			if (ma != 1) {
				cin >> s_password;
			}
			cs++;
			if (cs > 10) {
				Sleep(250);
				cout << "-=�������̫�࣬������ϵͳ=-" << endl;
				Sleep(300);
				run_z();
			}
			cout << endl;
			if (s_password == password) {
				Sleep(300);
				cout << "����";
				cout << "��֤�ɹ�" << endl;
				zjm();
				gms = 0;
				cin >> gms;
				Find();
				break;
			} else {
				cout << "��֤ʧ��" << endl;
			}
		}




		//������
		zjm();
		gms = 0;
		//����Ӧ��ID
		cin >> gms;
		//���붯��
		Sleep(350);
		dh();


		//����
		if (gms == 505) {
			cout << hy << endl;
		}

		//ǿ�ƹػ�
		if (gms == 303) {
			Sleep(500);
			cout << "<wkC.quit>" << endl;
			Sleep(1255);
			exit(1);
		}

		//����
		if (gms == 202) {
			Sleep(350);
			cout << "������..." << endl;
			Sleep(2000);
			run_z();
		}


		//�ػ�
		if (gms == 404) {
			cout << endl << "�����˳�..." << endl;
			Sleep(1550);
			exit(0);

		}

		if (gms == 808) {
			Sleep(500);
			cout << "-���ڽ�������������-" << endl;
			Sleep(650);
			cout << "��������������3��������ϵͳ����·��������" << endl;
			Sleep(155);

		}
		//������-Find
		Find();
		gms = 0;
	}
}

void kjdh() {
	system("cls");
	cout << "%0";
	system("cls");
	cout << "%1��";
	system("cls");
	cout << "%2����";
	system("cls");
	cout << "%3������";
	system("cls");
	cout << "%4��������";
	system("cls");
	cout << "%5����������";
	system("cls");
	cout << "%6������������";
	system("cls");
	cout << "%7��������������";
	system("cls");
	cout << "%8����������������";
	system("cls");
	cout << "%9������������������";
	system("cls");
	cout << "%10��������������������";
	system("cls");
	cout << "%11����������������������";
	system("cls");
	cout << "%12������������������������";
	system("cls");
	cout << "%13��������������������������";
	system("cls");
	cout << "%14����������������������������";
	system("cls");
	cout << "%15������������������������������";
	system("cls");
	cout << "%16��������������������������������";
	system("cls");
	cout << "%17����������������������������������";
	system("cls");
	cout << "%18������������������������������������";
	system("cls");
	cout << "%19��������������������������������������";
	system("cls");
	cout << "%20����������������������������������������";
	system("cls");
	cout << "%21������������������������������������������";
	system("cls");
	cout << "%22��������������������������������������������";
	system("cls");
	cout << "%23����������������������������������������������";
	system("cls");
	cout << "%24������������������������������������������������";
	system("cls");
	cout << "%25��������������������������������������������������";
	system("cls");
	cout << "%26����������������������������������������������������";
	system("cls");
	cout << "%27������������������������������������������������������";
	system("cls");
	cout << "%28��������������������������������������������������������";
	system("cls");
	cout << "%29����������������������������������������������������������";
	system("cls");
	cout << "%30������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%31��������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%32����������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%33������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%34��������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%35����������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%36������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%37��������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%38����������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%39������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%40��������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%41����������������������������������������������������������������������������������";
	Sleep(15);
	system("cls");
	cout << "%42������������������������������������������������������������������������������������";
	Sleep(25);
	system("cls");
	cout << "%43��������������������������������������������������������������������������������������";
	Sleep(75);
	system("cls");
	cout << "%44����������������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%45������������������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%46��������������������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%47����������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%48������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%49��������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%50����������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%51������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%52��������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%53����������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%54������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%55��������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%56����������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%57������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%58��������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%59����������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%60������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%61��������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%62����������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%63������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%64��������������������������������������������������������������������������������������������������������������������������������";
	Sleep(5);
	system("cls");
	cout << "%65����������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%66������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%67��������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%68����������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%69������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%70��������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%71����������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%72������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%73��������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(5);
	system("cls");
	cout << "%74����������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(5);
	system("cls");
	cout << "%75������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(5);
	system("cls");
	cout << "%76��������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%77����������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%78������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%79��������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(50);
	system("cls");
	cout << "%80����������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(300);
	system("cls");
	cout << "%81������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(10);
	system("cls");
	cout << "%82��������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%83����������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%84������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%85��������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%86����������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%87������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%88��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%89����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%90������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%91��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%92����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%93������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%94��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%95����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%96������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%97��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%98����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%99������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(0);
	system("cls");
	cout << "%100��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������";
	Sleep(300);
	system("cls");
	cout << "���ڿ���.";
	Sleep(200);
	system("cls");
	cout << "���ڿ���..";
	Sleep(200);
	system("cls");
	cout << "���ڿ���...";
	Sleep(200);
	system("cls");
	cout << "���ڿ���.";
	Sleep(200);
	system("cls");
	cout << "���ڿ���..";
	Sleep(200);
	system("cls");
	cout << "���ڿ���...";
	Sleep(200);
	system("cls");
	cout << "���ڿ���.";
	Sleep(200);
	system("cls");
	cout << "���ڿ���..";
	Sleep(200);
	system("cls");
	cout << "���ڿ���...";
	Sleep(200);
	system("cls");
	cout << "��" << endl;
	Sleep(50);
	system("cls");

	cout << "ӭ" << endl;
	Sleep(100);

	system("cls");
	cout << "��" << endl;
	Sleep(100);
	system("cls");

	cout << "��" << endl;
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

	cout << "��";
	Sleep(50);
	cout << "ӭ";
	Sleep(50);
	cout << "ʹ";
	Sleep(50);
	cout << "��";
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
	cout << "����.";
	Sleep(200);
	system("cls");
	cout << "����..";
	Sleep(200);
	system("cls");
	cout << "����...";
	Sleep(200);
	system("cls");
	cout << "����.";
	Sleep(200);
	system("cls");
	cout << "����..";
	Sleep(200);
	system("cls");
	cout << "����...";
	Sleep(200);
	system("cls");
	cout << "����.";
	Sleep(200);
	system("cls");
	cout << "����..";
	Sleep(200);
	system("cls");
	cout << "����...";
	Sleep(200);
	system("cls");

}




//�ײ����-�������ϵ���
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

	kjdh(); //����

	//��ʽ����-��¼
	dll();

	Sleep(650);
	dh();
	Sleep(200);
	//��.��ʽ����-
	run_z();

	//�˳�
	Sleep(800);
	zdh("����ע��...");
	Sleep(1200);
	zdh("��ӭ�´�ʹ��wickDOS��");
	Sleep(550);

	return 0;
}


//end.
