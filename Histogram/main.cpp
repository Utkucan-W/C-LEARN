#include <iostream>
#include <vector>
using namespace std;

main () {
    int num_items{};
    
    cout << "How many data items do you have?" << endl;
    cin >> num_items;
    
    vector <int> data {};
    
    for (int i{1};i<=num_items;++i) {
        
       int data_item{};
       cout << "Enter  data item" << i << ":" ;
       cin >> data_item;
       data.push_back(data_item);
        
    }
    for (auto val:data) 
        
        cout << val << endl;
    
    
    
    
    return 0;
}