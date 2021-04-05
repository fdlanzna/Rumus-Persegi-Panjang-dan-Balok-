#include <iostream>

using namespace std ;

int main()
{
  
  float l,p,t,hasil;
  char rumus;
 
    
    
    cout<< "PILILAH RUMUS UNTUK MENYELESAIKAN OPRASI INI"<<endl;
    
    cout<<"A.Rumus Luas Persegi Panjang"<<endl;
    
    cout<<"B.Rumus Keliling Persegi Panjang"<<endl;
    
    cout<<"C.Rumus Volume Balok"<<endl;
    
    cout<<"D.Rumus Luas permukaan Balok"<<endl;
    
    cout<<"Masukan Rumus yg Ingin digunakan = "<<rumus;
    cin>>rumus;
    
    
   
    
    switch(rumus)
 {
    //rumus luas Persegi Panjang
   case 'A':
     cout << "Masukan Nilai Panjang = ";
       cin >> p ;
     cout <<"Masukan Nilai Lebar = ";
      cin >>l;
          hasil=p*l;
            cout  <<"jadi luas persegi panjang itu adalah"<<endl;
            cout <<p<<"x"<<l<<"="<<hasil<<"cm^2"<<endl;
              break;
     //Rumus keliling 
   case 'B':
      cout << "Masukan Nilai Panjang = ";
       cin >> p ;
      cout <<"Masukan Nilai Lebar = ";
       cin >>l;
          hasil=2*(p+l);
          cout  <<"jadi Keliling persegi panjang itu adalah"<<endl;
          cout << "2x("<<p<<"+"<<l<<")="<<hasil<<"cm"<<endl;
        break;
        //Volumu Balok
   case 'C':
      cout << "Masukan Nilai Panjang = ";
       cin >> p ;
      cout <<"Masukan Nilai Lebar = ";
       cin >>l;
      cout <<"Masukan Nilai tinggi =";
       cin >> t;
          hasil=p*l*t;
          cout  <<"jadi Volume Balok  itu adalah"<<endl;
          cout <<p<<"x"<<l<<"x"<<t<<"="<<hasil<<"cm^3"<<endl;
         break;
       //Luas permukaan Balok
  case 'D':
    cout << "Masukan Nilai Panjang = ";
      cin >> p ;
    cout <<"Masukan Nilai Lebar = ";
      cin >>l;
    cout <<"Masukan Nilai tinggi = ";
      cin>>t;
        hasil=2*(p*l+p*t+l*t);
          cout  <<"jadi Luas Permukaan balok Tersebut adalah"<<endl;
          cout << "2x("<<p<<"x"<<l<<"+"<<p<<"x"<<t<<"+"<<l<<"x"<<t<<")="<<hasil<<"cm^2"<<endl;
        break;
 }
         
 
  
 
  
  
    
    
    cout <<"progam telah selesai dijalankan"<<endl;
    return 0;
    
  
    
    
    
    
    
    
    
    
    
    
    
}
