//�����ˣ�����׿
//github��ҳ��https://github.com/TonyWu2333
//���˲��ͣ�www.t-on-y-best.xyz
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define MAX 999999

char temp[666];

string line[10000];

int collect_p[501];

void save_collect(){
	
	ofstream outfile;
	
	outfile.open("./data/collect");
	
	for(int i = 0; i <= 500; i++){
		
		outfile << collect_p[i] << endl;
		
	}
	
	outfile.close();
	
}

int main()
{
	
	ifstream fp;
	
	fp.open("readme.txt");
	
	int i = 1;
	
	while(fp.good()){
		
		fp.getline(temp,666);
		
		cout << temp << endl;
		
	}
	
	if(fp.eof()){
		
	}else if(fp.fail()){
	
		cout << "data mismatch";
	
	}else{
		
		cout << "other reason";
		
	}cout << endl;
	
	fp.close();
	
	fp.open("./data/problems");
	
	i = 1;
	
	while(fp.good()){
		
		fp.getline(temp,666);
		
		line[i++] = temp;
		
	}
	
	if(fp.eof()){
		
		cout << "����ȡ�ɹ�";
		
	}else if(fp.fail()){
	
		cout << "data mismatch";
	
	}else{
		
		cout << "other reason";
		
	}cout << endl << endl;
	
	fp.close();
	
	fp.open("./data/collect2");
	
	int j = 0;
	
	while(fp.good()){
		
		fp >> collect_p[j++];
		
	}
	
	if(fp.eof()){
		
		cout << "�ղ�����ȡ�ɹ�" ;
		
	}else if(fp.fail()){
	
		cout << "data mismatch";
	
	}else{
		
		cout << "other reason";
		
	}cout << endl << endl;
	
	fp.close();
	
	srand(time(0));
	
	int problem_num = i / 7;
	
	int ran;
	
	string ans;
	
	while(1){
		
		ran = rand() % problem_num;
		
		cout << line[ran*7+1] << endl << line[ran*7+2] << endl << line[ran*7+3] << endl << line[ran*7+4] << endl << line[ran*7+5] << endl;
		
		cout << "��Ĵ𰸣�";
		
		cin >> ans;
		
		if(ans == "exit") break; 
		
		cout << line[ran*7+6] << endl << endl;
		
		if(ans == "collect"){
			
			collect_p[ran] = 1;
			
			save_collect();
			
			cout << "���ղش���" << endl << endl;
			
		}
		
		if(ans == "reset"){
			
			for(int i = 0; i <= 500; i++) collect_p[i] = 0;
			
			save_collect();
			
			cout << "������" << endl << endl;
			
		}
		
		if(ans == "exam"){
			
			cout << "����ģʽ��ʼ" << endl << endl;
			
			for(int i = 0; i <= 500; i++){
				
				if(collect_p[i] == 1){
					
					ran = i; 
					
					cout << line[ran*7+1] << endl << line[ran*7+2] << endl << line[ran*7+3] << endl << line[ran*7+4] << endl << line[ran*7+5] << endl;
		
					cout << "��Ĵ𰸣�";
		
					cin >> ans;
		
					if(ans == "exit") break; 
		
					cout << line[ran*7+6] << endl << endl;
					
					if(ans == "pass"){
						
						collect_p[ran] = 0;
						
						save_collect();
						
					} 
					
				}
				
			}
			
			cout << "���Խ���" << endl << endl;
			
		}
		
	}

    return 0;
}











