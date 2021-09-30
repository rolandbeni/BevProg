# include "std_lib_facilities.h"

int main(){
	cout<< "Enter your first name, your friend's name, and your friend's sex and age \n";
	string first_name;
	string friend_name;
	int friend_sex=0;
	int friend_age=0;
	cin >> first_name;
	cin >> friend_name;
	cin>> friend_sex;
	cin>>friend_age;
	cout<< "Dear "<<first_name<<", \n";
	cout <<"How are you?\n";
	cout << "I am fine.\n";
	cout <<"I miss you.\n";
	cout<< "Have you seen "<<friend_name<<" lately \n";
	if (friend_sex== 1)
		cout << "If you see "<<friend_name<< " please ask him to call me\n";
	if (friend_sex== 2)
		cout << "If you see "<<friend_name<< " please ask her to call me\n";
	cout<< "I hear you just had a birthday and you are " <<friend_age<<	" years old.\n";
	if (friend_age <=0 or friend_age >=110)
		error("You are kidding!");
	if (friend_age>12)
		cout <<"Next year you will be "<< friend_age+1<<"\n";
	else if (friend_age==17)
		cout <<"Next year you will be able to vote\n";
	else if (friend_age>70)
		cout <<"I hope you are enjoying retirement\n";
	cout<< "Yours sincerely\n";
	cout<<first_name;
	
	return 0;
}
