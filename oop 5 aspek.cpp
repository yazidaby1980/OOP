#include <iostream>
#include <string>

using namespace std;
class bebek //class induk 1
{
	protected :
		int jb, jbp;
    public :
    	void rp1()
    	{
			cout<<"masukkan jumlah bebek : "; cin >> jb;
			cout<<"masukkan jumlah bebek yang dipotong : "; cin >> jbp;
		}
};

class alamat {  
    public:  
   string namaJalan, kota;    
     alamat(string namaJalan, string kota)    
    {    
        this->namaJalan = namaJalan;    
        this->kota = kota;
    }    
};

class ayam //class induk 2
{
	protected :
		int ja, jap;
    public :
    	void rp2()
    	{
			cout<<"masukkan jumlah ayam : "; cin>>ja;
			cout<<"masukkan jumlah ayam yang dipotong : "; cin >> jap;
		}
};
class hasil : public bebek, public ayam //inheritance, polymorphism
{
	private :
		alamat* almt; //aggregation
	int totalTernak, totalPotong;
	string namaJalan="JLN JETIS KULON", kota="Surabaya";
	public :
	
		void total()
		{
			totalTernak = (jb+ja);
			totalPotong = (jbp+jap);
			cout<<"jumlah ayam : "<<ja;
			cout<<endl;
			cout<<"jumlah ayam yang dipotong : "<<jap;
			cout<<endl;
			cout<<"alamat tempat potong ayam : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"jumlah bebek : "<<jb;
			cout<<endl;
			cout<<"jumlah bebek yang dipotong : "<<jbp;
			cout<<endl;
			cout<<"alamat tempat potong bebek : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"total ternak : "<<totalTernak<<endl;
			cout<<"total ternak yang dipotong : "<<totalPotong;
		}
	
};
int main()
{
	alamat a1= alamat("Jalan A","Kediri");
	hasil a;
	a.rp1();
	a.rp2();
	a.total();
	return 0;
}
