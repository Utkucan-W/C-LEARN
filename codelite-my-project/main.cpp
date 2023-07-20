#include <iostream>
using namespace std;

int cleaning_room {0};
int room_perflee {0};


main () {
 cout << "Temizlik sirketimize hos geldiniz."<<endl;
 cout << "Lutfen kac oda temizletmek istediginizi belirtiniz.";
 cin >> cleaning_room;
 cout << "Temizletmek istediginiz oda sayisi budur:"<< cleaning_room<<endl;
 
 cout << "Oda basina ucret bilgilerini giriyoruz:"<<endl;
 cin >> room_perflee;
 cout << "Oda basina ucretimiz budur:"<< room_perflee;
 
 int total_bounty = cleaning_room * room_perflee;
cout << "Toplam ucret budur:" << total_bounty;
 
 

 



 
    
    
    
    
    
    return 0;
}