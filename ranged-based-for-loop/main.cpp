#include <iostream>
#include <vector>


using namespace std;

int main () {
    
   // int scores [] {10,20,30};
    
    // for (int score:scores)
       // cout << score << endl;
        
        
        
        
    // int scores [] {10,20,30};
    
   // for (auto score:scores)
     //   cout << score << endl;   ('auto' yazmak derleyicinin türü otomomatik bir şekilde bulmasını sağlıyor)
     
     
     
    vector <double> temperatures {23.1,24.5,36.6,43.2};
     double average_temp{};
     double total{};
     
      for (auto temp:temperatures)
         total +=temp;
         
         if (temperatures.size()!= 0)
             average_temp = total / temperatures.size();
             
             cout << "Average temperatures is :" << average_temp << endl;
        
    
    
    
    return 0;
}