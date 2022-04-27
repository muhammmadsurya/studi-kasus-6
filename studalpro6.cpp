#include <iostream>
using namespace std;

class dosen{
	public :
		void input();
		void proses();
		void output();
	private :
		int i,n, data[40],maksimum,minimum,jum;
		float rata;
		string nama,matkul;
};

void dosen::input(){
	cout<<"Masukan nama bapak/ibu : "; getline(cin,nama);
	cout<<"Masukan Mata Kuliah : "; getline(cin,matkul);
	cout<<"Masukan banyaknya data : "; cin>>n;
}

void dosen::proses(){
	for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum = jum + data[i];
        }
    rata=jum/n;
    
	maksimum = data[0];
	for(i = 0; i < n; i++) {
    	if (data[i] > maksimum)  {
			maksimum = data[i];
    	}
	}
	
	minimum = data[0];
	for(i = 0; i < n; i++) {
		if (data[i] < minimum)  {
			minimum = data[i];
    	}
	}
}

void dosen::output(){
	cout << "Nilai Rata-rata = " << rata << endl;
	cout << "Nilai maksimum adalah " << maksimum << endl;
	cout << "Nilai minimum adalah " << minimum << endl;
}

int main(){
	dosen x;
	x.input();
	x.proses();
	x.output();
	return 0;
}
