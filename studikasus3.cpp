#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    char n[25];
    int total=0, total_pembelian=0;
    float jml_total, disc, bayar;

    cout << "=============================================="<<endl;
    cout << "  Selamat Datang di Rumah Makan Sedap Mangan  "<<endl;
    cout << "        Jalan kenangan 11, Yogyakarta         "<<endl;
    cout << "=============================================="<<endl;
    cout << "Menu  : "<<endl;
    cout << "Kode        Nama Makanan        Harga "<<endl;
    cout << " 1          Ayam Geprek         Rp. 21.000,00"<<endl;
    cout << " 2          Ayam Goreng         Rp. 17.000,00"<<endl;
    cout << " 3          Udang Goreng        Rp. 19.000,00"<<endl;
    cout << " 4          Cumi Goreng         Rp. 20.000,00"<<endl;
    cout << " 5          Ayam Bakar          Rp. 25.000,00"<<endl;
    cout << "---------------------------------------"<<endl;

    do{
    cout << "\nMenu: "<<endl;
    cout << "1. Masukkan nama makanan\n"<<endl;
    cout << "2. EXIT\n"<<endl;
    cout << "Masukkan pilihanmu : "; cin >> a;
    cin.ignore();
  

    
    if(a==1)
    {
       
        cout<< "Masukkan jenis makanan : ", cin.getline(n,25);
        cout<< "Masukkan harga : ", cin>>b;
        cout<< "Masukkan jumlah  : ", cin>>c;
        cout<< "Masukkan jarak : ", cin>>d;
        total = b*c;
        if(d<3)
        {
           total_pembelian= total+15000;
           if((total>25000) && (total<50000) )
           {
               jml_total = total_pembelian - 3000;
           }
           else if((total>50000) && (total<150000))
           {
               disc = total_pembelian * 0.15;
               jml_total = total_pembelian - disc - 5000;
           }
           else if(total>150000)
           {
               disc = total_pembelian * 0.35; 
               jml_total = total_pembelian - disc - 8000;
           }
        }
        if(d>3)
        {
                total_pembelian= total+25000;
                if((total>25000) && (total<50000))
                {
                jml_total = total_pembelian - 5000;
                }
                else if((total>50000) && (total<150000))
                {
                disc = total_pembelian * 0.15;
                jml_total = total_pembelian - disc - 5000;
                }
                else if(total>150000)
                {
                disc = total_pembelian * 0.35;
                jml_total = total_pembelian - disc - 8000;
                }
            } 
        
    }
    else if (a==2)
    {
        cout << "KELUAR"<<endl;
    }
    }while(a==1);


    cout << "============================================================="<<endl;
    cout << "Jenis Makanan\t\t\tQTY\t\tHarga\tTotal\n";
    cout << "============================================================="<<endl;
    cout <<  n <<"\t\t\t"<<  c <<"\t\t"<< b <<"\t" << total <<endl;
    cout << "============================================================="<<endl;
    cout << "Jumlah Bayar : Rp."<<jml_total<<endl;
    cout << "Bayar        : Rp.",cin>>bayar;
    cout << "Kembalian    : Rp."<<(bayar-jml_total)<<endl;
    cout << "\n                       TERIMA KASIH                        "<<endl;

    return 0;
}
 
