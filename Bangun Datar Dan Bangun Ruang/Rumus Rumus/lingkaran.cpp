#include <iostream>
#include <cmath>

using namespace std;


double luas_lingkaran(double a,double b){    
        double c = a*b*b;
              return c;                    
}
double mencari_r1(double d,double e){
      double f =sqrt(d/e);
      return f;
}
double keliling_lingkaran(double g,double h){
    double i = g*h;
    return i;
}
double mencari_r2(double j,double k){
  double l=j/(2*k);
  return l;
}


 void luaslingkaran(double a,double b){
   cout << "Masukan panjang Jari - jari lingkaran = ";
             cin >> b;
      cout << "jadi Luas lingkaran tersebut adalah = ";
   cout << luas_lingkaran(a,b) <<"cm^2" << endl;
}
 void mencarir1(double d,double e){
       cout << "Masukan luas lingkaran = ";
             cin >> d;
        cout << "jadi panjang Jari-Jari nya adalah = ";
     cout << mencari_r1(d,e) << "cm" << endl;
 }
 void kelilinglingkaran (double g,double h){
     cout << "Masukan panjang Diameter lingkaran = ";
             cin >> h;
       cout << "jadi keliling lingkaran tersebut adalah = ";
     cout << keliling_lingkaran (g,h) << "cm" << endl;
 }
void mencarir2(double j,double k){
    cout << "Masukan keliling lingkaran = ";
         cin >> j;
     cout << "jadi panjan jari-jari nya adalah = ";
   cout << mencari_r2(j,k) << "cm" << endl;
 }





int main(){
  //declaration variable
  float r,d,luas,keliling,phi;
  char rumus;
  
  phi = 3.14;
  
  cout << "A.Mencari Luas Lingkaran" <<endl;
  
  cout << "B.Mencari Jari-Jari Jika luas Diketahui " <<endl;
  
  cout << "C.Mencari keliling Lingkaran " <<endl;
  
  cout << "D.Mencari Jari-jari jika Keliling diketahui " <<endl;
  
  cout << "Masukan Rumus yg ingin Dijalankan = ";
  cin >> rumus;
    
   switch(rumus){
     
    //Luas lingkaran 
    
     case 'A':
       
           luaslingkaran(phi,r);
            break;
       
     
     //mencari r jika dik L
        
      case 'B':
        
            mencarir1(luas,phi);
               break;
           
      case 'C':
            kelilinglingkaran(phi,d);
             break;
           
      case 'D':
            mencarir2(keliling,phi);
             break;
            
          
       
   }
   cout << "progam telah selesai dijalan kan" << endl;
   
   cin.get();
    return 0;
    

}
