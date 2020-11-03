#include <bits/stdc++.h>
#include<Windows.h>
using namespace std;
int wr;int ri;
struct word{
		string eng;
		string chi;
};



bool cmp(word a,word b){
	if(a.eng<b.eng){
		return 1;
	}
	else if(a.eng>b.eng){
		return 0;
	}
	else{
		return a.chi<=b.chi;
	}
}

void p();

void fl(){
	system("cls");
}

void v(){
	fstream file;ofstream fout("單字測驗程式備份.txt",ios_base::app);
	ofstream f("總單字.txt",ios_base::app);
	if(f && file&&fout){
		fl();
		cout<<"進入單字存取模式!輸入0以返回"<<endl;
		string tmp ="\0";
		file.open("單字測驗程式.txt",ios_base::out|ios_base::app);
		
		while(cin>>tmp){
			if(tmp=="0"){
				break;
			}
			else{
				string chinese;
				cin>>chinese;
				
				fout<<tmp<<" "<<chinese<<"\n";
				fout<<tmp<<" "<<chinese<<"\n";
				fout<<tmp<<" "<<chinese<<"\n";
				file<<tmp<<" "<<chinese<<"\n";
				file<<tmp<<" "<<chinese<<"\n";
				file<<tmp<<" "<<chinese<<"\n";
				f<<tmp<<" "<<chinese<<"\n";
			}
		}
		file.close();f.close();fout.close();
		p();
	}
	else{
		cout<<"無法正確使用程式"<<endl;
	}
}
 
void title(int right,int wrong){
	fl();
	cout<<"\t\t	感謝使用冠丞的英文學習計畫"<<endl;
	cout<<"\t\t目前已答對"<<right<<"題";
	cout<<"\t\t目前已答錯"<<wrong<<"題"<<endl;
	cout<<"\t\t	若想返回請輸入0"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl; 
}



void t(){
	fl();
	cout<<"輸入1，開頭結尾皆有提示"<<endl;
	cout<<"輸入2，僅開頭有提示"<<endl;
	cout<<"輸入3，沒有提示"<<endl;
	cout<<"輸入0以退出"<<endl;
	int a;
	cin>>a;
	if(a==1){
		fstream file;
			file.open("單字測驗程式.txt",ios_base::in);
			if(file){
				srand(time(NULL));	
				string tmp="\0";
				vector<word> w;
				while(file>>tmp){
					if(tmp == "\0"){
						break;
					}
					else{
						word u;
						u.eng=tmp;
						file>>tmp;
						u.chi=tmp;
						w.push_back(u);
					}
			
				}
				file.close();
				while(1){
					int num=w.size();
					if(num==0){
						break;
					}
					title(ri,wr);
					int x=rand()%num;
					cout<<w[x].chi<<"("<<w[x].eng[0]<<","<<w[x].eng[w[x].eng.size()-1]<<") ";
					cin>>tmp;
					if(w[x].eng=="\0"){
						continue;
					}
					else{
						if(tmp=="0"){
							break;
						}
						else if(tmp!=w[x].eng){
							wr++;
							cout<<"Wrong!Correct answer is: "<<w[x].eng<<endl;
							system("PAUSE");
							//w[x].p++;
							word u=w[x];
							w.push_back(u);
						}
						else{
							ri++;
							cout<<"Correct!"<<endl;
							system("PAUSE");
							//w[x].p--;
							w.erase(w.begin()+x);
						}
					}
				}
				file.open("單字測驗程式.txt",ios_base::out);
				int N=w.size();
				for(int i=0;i<N;i++){
					file<<w[i].eng<<" "<<w[i].chi<<'\n';
					//file<<w[i].eng<<" "<<w[i].chi<<<<" "<<w[x].p<<'\n';
				}
				file.close();
			}
			else{
				cout<<"無法正確開啟程式"<<endl;
			}
	}
	else if(a==2){
		fstream file;
		file.open("單字測驗程式.txt",ios_base::in);
		if(file){
			srand(time(NULL));	
			string tmp="\0";
			vector<word> w;
			while(file>>tmp){
				if(tmp == "\0"){
					break;
				}
				else{
					word u;
					u.eng=tmp;
					file>>tmp;
					u.chi=tmp;
					w.push_back(u);
				}
			}
			file.close();
			while(1){
				int num=w.size();
				if(num==0){
					break;
				}
				title(ri,wr);
				int x=rand()%num;
				cout<<w[x].chi<<"("<<w[x].eng[0]<<") ";
				cin>>tmp;
				if(w[x].eng=="\0"){
					continue;
				}
				else{
					if(tmp=="0"){
						break;
					}
					else if(tmp!=w[x].eng){
						wr++;
						cout<<"Wrong!Correct answer is: "<<w[x].eng<<endl;
						system("PAUSE");
						word u=w[x];
						w.push_back(u);
					}
					else{
						ri++;
						cout<<"Correct!"<<endl;
						system("PAUSE");
						w.erase(w.begin()+x);
					}
				}
			}
			file.open("單字測驗程式.txt",ios_base::out);
			int N=w.size();
			for(int i=0;i<N;i++){
				file<<w[i].eng<<" "<<w[i].chi<<'\n';
			}
			file.close();
		}
		else{
			cout<<"無法正確開啟程式"<<endl;
		}
	}
	else if(a==3){
		fstream file;
		file.open("單字測驗程式.txt",ios_base::in);
		if(file){
			srand(time(NULL));	
			string tmp="\0";
			vector<word> w;
			while(file>>tmp){
				if(tmp == "\0"){
					break;
				}
				else{
					word u;
					u.eng=tmp;
					file>>tmp;
					u.chi=tmp;
					w.push_back(u);
				}	
			}
			file.close();
			while(1){
				int num=w.size();
				if(num==0){
					break;
				}
				title(ri,wr);
				int x=rand()%num;
				cout<<w[x].chi<<" ";
				cin>>tmp;
				if(w[x].eng=="\0"){
					continue;
				}
				else{
					if(tmp=="0"){
						break;
					}
					else if(tmp!=w[x].eng){
						wr++;
						cout<<"Wrong!Correct answer is: "<<w[x].eng<<endl;
						system("PAUSE");
						word u=w[x];
						w.push_back(u);
					}
					else{
						ri++;
						cout<<"Correct!"<<endl;
						system("PAUSE");
						w.erase(w.begin()+x);
					}
				}
			}
			file.open("單字測驗程式.txt",ios_base::out);
			int N=w.size();
			for(int i=0;i<N;i++){
				file<<w[i].eng<<" "<<w[i].chi<<'\n';
			}
			file.close();
		}
		else{
			cout<<"無法正確開啟程式"<<endl;
		}
	}
	p();
}

void s(){
	ifstream fin("總單字.txt");
	vector<word> w;
	string tmp;int i=0;
	word u;
	while(fin>>tmp){
		if(tmp=="\0"){
			break;
		}
		else{
			u.eng=tmp;
			fin>>tmp;
			u.chi=tmp;
			w.push_back(u);
		}
	}
	sort(w.begin(),w.end(),cmp);
	int a;
	while(1){
		fl();
		cout<<"若想查看目前已存取的單字，請按1"<<endl;
		cout<<"若想搜尋某些已存取的單字，請按2"<<endl;
		cout<<"若想退出，請按0"<<endl;
		cin>>a;
		if(a==1){
			for(int i=0;i<w.size();i++){
				cout<<w[i].eng<<" "<<w[i].chi<<endl;
			}
			system("pause");
		}
		if(a==2){
			cout<<"請輸入你想查詢的英文"<<endl;
			cout<<"若想退出，請按0"<<endl;
			while(cin>>tmp){
				if(tmp=="0"){
					break;
				}
				else{
					bool b=1;
					for(int i=0;i<w.size();i++){
						if(tmp==w[i].eng){
							cout<<w[i].chi<<endl;
							b=0;
							break;
						}
					}
					if(b){
						cout<<"找不到此單字"<<endl;
					}
				}
			}
		}
		if(a==0){
			break;
		}	
	}
	fin.close();
	p();
}

void r(){
	int n;
	fl();
	cout<<"如果確定要重製單字出現機率，"<<endl;
	cout<<"請輸入一個非0的整數n，"<<endl;
	cout<<"n代表著這個單字至少會出現幾次"<<endl;
	cout<<"若想退出，則請輸入0"<<endl; 
	cin>>n;
	if(!n){
		p();
	}
	else{
		ifstream fin("總單字.txt");
		ofstream fout("單字測驗程式.txt");
		if(fin&&fout){
			string eng;
			string chi;
			while(fin>>eng){
				if(eng=="\0"){
					cout<<"重製成功\!"<<endl;
					break;
				}
				fin>>chi;
				for(int i=0;i<n;i++){
					fout<<eng<<" "<<chi<<endl;
				}
			}
			
			//cout<<"重製成功!"<<endl;
			system("pause");
			p(); 
			fin.close();
			fout.close(); 
		}
		else{
			cout<<"重製失敗!"<<endl;
			system("pause");
			p();
		}
	}
	
	
}

int main(){
	ri=0;wr=0;
	p();
	return 0;
}

void p(){
		//cout<<"請問是否在冠丞電腦上使用?"<<endl;
		int a;
		fl();
		cout<<"你好，感謝使用冠丞的英文學習計畫"<<endl;
		cout<<"若想添加單字，請按1"<<endl;
		cout<<"若想進行測驗，請按2"<<endl;
		cout<<"若想查詢單字，請按3"<<endl;
		cout<<"若想重製單字出現機率，請按4"<<endl; 
		cout<<"若想退出，請按0"<<endl;
		cin>>a;
		if(a==0){
			return;
		}
		else if (a==1){
			v();
		}
		else if(a==2){
			t();
		}
		else if(a==3){
			s();
		}
		else if(a==4){
			r();
		}
	}
