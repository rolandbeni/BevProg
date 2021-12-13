#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n){
    for(int i = 0;i<n;++i){
        os << a[i] << endl;
        }
    }

int main(){
    //1
    int x = 7;
    int* p1 = &x;
    //2
    cout << "Feladat 1. " << endl;
    cout << p1 << " " << x << endl;
    //3
    int intS[7] = {1,2,4,8,16,32,64};
    int* p2 = intS;
    //4
    cout << endl;
    cout << "Feladat 4. " << endl;
    print_array(cout,p2,7);
    //5 
    int* p3 = p2;
    //6
    p1 = p2;
    //7
    p3 = p2;
    //8
    cout << endl;
    cout << "Feladat 8. " << endl;
    cout << "P1: " << p1 << endl;
    cout << "P2: " << p2 << endl;
    //9 valgrind szerint nem volt felszabadítatlan memoria terület
    //10
    cout << endl;
    int arrayFor10 [10] = {1,2,4,8,16,32,64,128,256,512};
    p1 = arrayFor10;
    //11 
    int arrayFor10v2 [10] = {10,20,40,80,160,320,1280,2560,5120};
    p2 = arrayFor10v2;
    //12
    for(int i = 0; i < 10; ++i){
        p1[i] = p2[i];
    }

    //13
    vector<int> v_tenInts{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_tenInts[0];
	vector<int> v_tenInts2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_tenInts2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

    return 0;
}
