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
	fstream file;ofstream fout("��r����{���ƥ�.txt",ios_base::app);
	ofstream f("�`��r.txt",ios_base::app);
	if(f && file&&fout){
		fl();
		cout<<"�i�J��r�s���Ҧ�!��J0�H��^"<<endl;
		string tmp ="\0";
		file.open("��r����{��.txt",ios_base::out|ios_base::app);
		
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
		cout<<"�L�k���T�ϥε{��"<<endl;
	}
}
 
void title(int right,int wrong){
	fl();
	cout<<"\t\t	�P�¨ϥΫa�઺�^��ǲ߭p�e"<<endl;
	cout<<"\t\t�ثe�w����"<<right<<"�D";
	cout<<"\t\t�ثe�w����"<<wrong<<"�D"<<endl;
	cout<<"\t\t	�Y�Q��^�п�J0"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl; 
}



void t(){
	fl();
	cout<<"��J1�A�}�Y�����Ҧ�����"<<endl;
	cout<<"��J2�A�ȶ}�Y������"<<endl;
	cout<<"��J3�A�S������"<<endl;
	cout<<"��J0�H�h�X"<<endl;
	int a;
	cin>>a;
	if(a==1){
		fstream file;
			file.open("��r����{��.txt",ios_base::in);
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
				file.open("��r����{��.txt",ios_base::out);
				int N=w.size();
				for(int i=0;i<N;i++){
					file<<w[i].eng<<" "<<w[i].chi<<'\n';
					//file<<w[i].eng<<" "<<w[i].chi<<<<" "<<w[x].p<<'\n';
				}
				file.close();
			}
			else{
				cout<<"�L�k���T�}�ҵ{��"<<endl;
			}
	}
	else if(a==2){
		fstream file;
		file.open("��r����{��.txt",ios_base::in);
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
			file.open("��r����{��.txt",ios_base::out);
			int N=w.size();
			for(int i=0;i<N;i++){
				file<<w[i].eng<<" "<<w[i].chi<<'\n';
			}
			file.close();
		}
		else{
			cout<<"�L�k���T�}�ҵ{��"<<endl;
		}
	}
	else if(a==3){
		fstream file;
		file.open("��r����{��.txt",ios_base::in);
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
			file.open("��r����{��.txt",ios_base::out);
			int N=w.size();
			for(int i=0;i<N;i++){
				file<<w[i].eng<<" "<<w[i].chi<<'\n';
			}
			file.close();
		}
		else{
			cout<<"�L�k���T�}�ҵ{��"<<endl;
		}
	}
	p();
}

void s(){
	ifstream fin("�`��r.txt");
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
		cout<<"�Y�Q�d�ݥثe�w�s������r�A�Ы�1"<<endl;
		cout<<"�Y�Q�j�M�Y�Ǥw�s������r�A�Ы�2"<<endl;
		cout<<"�Y�Q�h�X�A�Ы�0"<<endl;
		cin>>a;
		if(a==1){
			for(int i=0;i<w.size();i++){
				cout<<w[i].eng<<" "<<w[i].chi<<endl;
			}
			system("pause");
		}
		if(a==2){
			cout<<"�п�J�A�Q�d�ߪ��^��"<<endl;
			cout<<"�Y�Q�h�X�A�Ы�0"<<endl;
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
						cout<<"�䤣�즹��r"<<endl;
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
	cout<<"�p�G�T�w�n���s��r�X�{���v�A"<<endl;
	cout<<"�п�J�@�ӫD0�����n�A"<<endl;
	cout<<"n�N��۳o�ӳ�r�ܤַ|�X�{�X��"<<endl;
	cout<<"�Y�Q�h�X�A�h�п�J0"<<endl; 
	cin>>n;
	if(!n){
		p();
	}
	else{
		ifstream fin("�`��r.txt");
		ofstream fout("��r����{��.txt");
		if(fin&&fout){
			string eng;
			string chi;
			while(fin>>eng){
				if(eng=="\0"){
					cout<<"���s���\\!"<<endl;
					break;
				}
				fin>>chi;
				for(int i=0;i<n;i++){
					fout<<eng<<" "<<chi<<endl;
				}
			}
			
			//cout<<"���s���\!"<<endl;
			system("pause");
			p(); 
			fin.close();
			fout.close(); 
		}
		else{
			cout<<"���s����!"<<endl;
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
		//cout<<"�аݬO�_�b�a��q���W�ϥ�?"<<endl;
		int a;
		fl();
		cout<<"�A�n�A�P�¨ϥΫa�઺�^��ǲ߭p�e"<<endl;
		cout<<"�Y�Q�K�[��r�A�Ы�1"<<endl;
		cout<<"�Y�Q�i�����A�Ы�2"<<endl;
		cout<<"�Y�Q�d�߳�r�A�Ы�3"<<endl;
		cout<<"�Y�Q���s��r�X�{���v�A�Ы�4"<<endl; 
		cout<<"�Y�Q�h�X�A�Ы�0"<<endl;
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
