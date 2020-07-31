#include <iostream>

using namespace std;

int menu();
int ascii_to_hex(char c);
int hex_to_int(char c);

int main(){

	int item;
	char str;
	do{
		item = menu();
		switch(item){
			case 1:
				cin>>str;
				ascii_to_hex(str);
				break;
			case 2:
				cin>>str;
				cout<<hex_to_int(str)<<endl;
				break;
			default:
				item = 0;
		}
	}while(item!=0);
}

int menu(){
	int a;
	cout<<"\nMenu:\n1. Ascii to hex.\n2. Hex to int.\n3. Exit.\n\n";
	cin>>a;
	return a;
}

int hex_to_int(char c){
        int first = c / 16 - 3;
        int second = c % 16;
        int result = first*10 + second;
        if(result > 9) result--;
        return result;
}

int ascii_to_hex(char c){
	cout<<hex<<(int)c<<endl;
	return 0;
}

