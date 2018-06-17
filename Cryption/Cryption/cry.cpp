#include <iostream>
using namespace std;
void Encryption(char *txt);
void Decryption(char *txt);
void main(){
	char text[30];
	int menu;
	do{
		cout<<"========================\n";
		cout<<"1.Encryption text\n";
		cout<<"2.Decryption text\n";
		cout<<"3.Exit\n";
		cout<<"========================\n";
		cout<<"Enter Menu";
		cin>>menu;
		switch(menu){
		case 1: Encryption(text);
				cout<<"Encryption = "<<text<<endl;
			break;
		case 2: Decryption(text);
				cout<<"Decryption = "<<text<<endl;
			break;
		case 3 : exit(0);
		}
	}while(menu!=3);
}
void Encryption(char *txt){
	cout<<"Enter text to Encryption : ";
	cin>>txt;
	for(int i=0;i<strlen(txt);i++){

		txt[i]=txt[i]+6;

		if(txt[i]<97&&txt[i]>90){
			txt[i]=64+(txt[i]-90);
		}
		else if(txt[i]>122){
			txt[i]=96+(txt[i]-122);
		}
	//printf("%c = %d \n",txt[i],txt[i]);
	}
	}
void Decryption(char *txt){

	cout<<"Enter text to Decryption : ";
	cin>>txt;
		for(int i=0;i<strlen(txt);i++){

			txt[i]=txt[i]-6;
			if(txt[i]<65){
				txt[i]=90-(64-txt[i]);
			}
			else if(txt[i]<97&&txt[i]>90){
				txt[i]=122-(96-txt[i]);
			}
		//printf("%c = %d \n",txt[i],txt[i]);
		}
}