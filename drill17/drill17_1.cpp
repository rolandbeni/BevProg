include "std_lib_facilities.h"

//4. Write a function print_array10(ostream& os, int* a) that prints out the
//values of a (assumed to have ten elements) to os.
void print_array10(ostream& os, int* a){
    for(int i = 0;i<10;++i){
        os << a[i] << endl;
    }
}
//7. Write a function print_array(ostream& os, int* a, int n) that prints out
//the values of a (assumed to have n elements) to os.
void print_array(ostream& os, int* a, int n){
    for(int i = 0;i<n;++i){
        os << a[i] << endl;
    }
}

//10.
int* DynamicArray(int n)
{
	int* a = new int[n];
	int counter = 100;
	for (int i = 0; i < n; ++i)
		a[i] = counter++;

	return a;
}
//10.
vector<int*> DynamicVector(int n){
    vector<int*> asd;
    int counter = 100;
    for(int i = 0; i < n; ++i)
        asd.push_back(new int {counter++});
    return asd;
}
//10.
void print_vector(vector<int*> vec){
    for(int i = 0; i < vec.size();++i){
        cout << *vec[i] << endl;
    }
}
//10.
void TorolVektor(vector<int*> vec){
    for(int i = 0;i<vec.size();++i){
        delete vec[i];
    }
}

int main(){
    //1. Allocate an array of ten ints on the free store using new.
    int* alloc = new int[10];
    //2. Print the values of the ten ints to cout.
    cout << "Feladat 2." << endl;
    for(int i = 0; i<10; ++i){
        cout << alloc[i] << endl;
    }
    //3. Deallocate the array (using delete[]).
    delete[] alloc;
    //4. Write a function print_array10(ostream& os, int* a) that prints out the
    //values of a (assumed to have ten elements) to os.
    cout << "Feladat 4." << endl;
    print_array10(cout, alloc);
    //5. Allocate an array of ten ints on the free store; initialize it with the values
    //100, 101, 102, etc.; and print out its values.
    cout << "Feladat 5." << endl;
    int* alloc2 = new int[10]{100,101,102,103,104,105,106,107,108,109};
    print_array10(cout, alloc2);
    delete[] alloc2;
    //6. Allocate an array of 11 ints on the free store; initialize it with the values
    //100, 101, 102, etc.; and print out its values.
    cout << "Feladat 6." << endl;
    int* alloc3 = new int[11]{100,101,102,103,104,105,106,107,108,109,110};
    print_array10(cout, alloc3);
    delete[] alloc3;
    //8. Allocate an array of 20 ints on the free store; initialize it with the values
    //100, 101, 102, etc.; and print out its values.
    cout << "Feladat 8." << endl;
    int* allocFor20 = DynamicArray(20);
    print_array(cout,allocFor20,20);
    delete[] allocFor20;
    //10. Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array()
    cout << "Feladat 10. - 10" << endl;
    vector<int*> vectorFor10 = DynamicVector(10);
    print_vector(vectorFor10);
    TorolVektor(vectorFor10);
    cout << "Feladat 10. - 11" << endl;
    vector<int*> vectorFor11 = DynamicVector(20);
    print_vector(vectorFor11);
    TorolVektor(vectorFor11);
    cout << "Feladat 10. - 20" << endl;
    vector<int*> vectorFor20 = DynamicVector(20);
    print_vector(vectorFor20);
    TorolVektor(vectorFor20);
    
    return 0;
}
