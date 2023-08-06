/* Vector <int> test_score {45,67,75}; 
test_score.push_back(80);     ======> 45 67 75 (80) sonuna (80) değerini ekledik.
test_score.push_back(90);     ======> 45 67 75 80 (90) sonuna (90) değerini ekleriz.
*/
#include <iostream> 
#include <vector>
using namespace std;

main () {
    vector <int> test_scores {100,98,89};
cout << "Test scores using arrays syntax:" << endl;

cout << test_scores[0] << endl;
cout << test_scores[1] << endl;
cout << test_scores[2] << endl;

cout << "Test score using vector syntax:" << endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;

cout << "\nThere are" << test_scores.size() << "\nscores in the vector" << endl;

cout << "Enter the new test scores." << endl;
cin >> test_scores.at(0);
cin >> test_scores.at(1);
cin >> test_scores.at(2);  

cout << "Updated test scores:" <<endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;

cout << "Enter a test score to add to the vector.";

int score_to_add {0};
cin >> score_to_add;
 test_scores.push_back(score_to_add);
 
 cout << "Enter one more test score to  add to  the vector.";
 
 cin >> score_to_add;
 test_scores.push_back(score_to_add);
 
 cout << "Test scores are now:"<<endl;
 
 cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
   cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
     cout << test_scores.at(4) << endl;
     
     cout << "There are now" << test_scores.size() << "scores in the vector." << endl;
     
     //Exampleof a  2D vector.
     vector <vector<int>> movie_ratings      // movie_ratings {}; şeklinde de gösterilebilir.
     {
         {1,2,3,4},
         {1,2,4,4},
         {1,3,4,5}
         
     };
     
     cout << "Here are the movie rating reviewer #1 using array sytnax:" << endl;
     
     cout << movie_ratings[0][0] << endl;
     cout << movie_ratings[0][1] << endl;
     cout << movie_ratings[0][2] << endl;
     cout << movie_ratings[0][3] << endl;
     
     cout << "Here are the movie rating reviewer $1 using vector syntax:" << endl;
     
     cout << movie_ratings.at(0).at(1) << endl;
     cout << movie_ratings.at(0).at(2) << endl;
     cout << movie_ratings.at(0).at(3) << endl;
     cout << movie_ratings.at(0).at(4) << endl;
     
         
         
         
         
         
         
      return 0;   
         
     }
     
  
 
 
 
    
    
    
    
    
    

