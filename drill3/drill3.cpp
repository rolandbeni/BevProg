# include "std_lib_facilities.h"

int main(){
	vector<double>v;
	double meter;
	string unit="";
	string a;
	//string b;
	//double ma;
	//double mi;
	double mma;
	double mmi;
	
	int i=1;
	while(true){
        cin>>a;
        if(a=="|") break;
        cin>>unit;
        
        
        if (unit=="cm"){
        cout<<a<<unit<<"=="<<stod(a)*0.01<<"m "<<"=="<<stod(a)/2.54<<"in\n";
        meter=stod(a)*0.01;
        }
        else if (unit=="m"){
        cout<<a<<unit<<"=="<<stod(a)*100<<"cm "<<"=="<<stod(a)*100/2.54<<"in\n";
        meter=stod(a);
        }
        else if (unit=="in"){
        cout<<a<<unit<<"=="<<stod(a)*2.54<<"cm "<<"=="<<stod(a)*254<<"m\n";
        meter=stod(a)*254;
        }
        else if (unit=="ft"){
        cout<<a<<unit<<"=="<<stod(a)*12<<"in "<<"=="<<stod(a)*12*2.54<<"cm\n";
        meter=stod(a)*12*2.54*0.01;
        }
        else if (unit==" "){
        cout<<"Illegal"<<endl;
        }
        else {
        cout<<"Illegal"<<endl;
        }
        v.push_back(meter);
        
        if (i==1){
        
        mma=meter;
        
        mmi=meter;
        //ma=stod(a);
        //mi=stod(a);
        }
        
        
        
        
        
        
        if (meter<mmi){
        mmi=meter;
        cout<<"Smallest number so far: "<<mmi<<"m"<<endl;        
        } 
        if (meter>mma){
        mma=meter;
        cout<<"Largest number so far: "<<mma<<"m"<<endl;
        }
        
        
        
        //if (stod(a)<mi){
        //mi=stod(a);
        //cout<<"Smallest number so far: "<<mi<<endl;        
        //} 
        //if (stod(a)>ma){
        //ma=stod(a);
        //cout<<"Largest number so far: "<<ma<<endl;
        //}
        i++;
        cout<<"The sum of the values: "<<mmi+mma<<"m"<<endl;
        sort(v.begin(), v.end());
        for(int x=0; x<v.size(); x++){
        cout<<v[x]<<endl;
        }
        
        
        
        
        }
        
        //cin >> b;
        //if(b=="|") break;

        //if(stod(a)==stod(b)) cout<<"The numbers are equal: "<<a<<"=="<<b<<endl;
	
	//else if (stod(a) >stod(b)){
	//cout<<"Smaller: "<<b<<"	"<<"Larger: "<<a<<endl; 
	//	if (0.0 <stod(a)-stod(b) and stod(a)-stod(b)<0.01) cout<<"The two numbers are almost equal"<<endl;
	//}
	//else{ cout<<"Smaller: "<<a<<"	"<<"Larger: "<<b<<endl; 
	//	if (0.0 <stod(b)-stod(a) and stod(b)-stod(a)<0.01) cout<<"The two numbers are almost equal"<<endl;
	//}
	//}
	return 0;
}
