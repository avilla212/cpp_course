#include <array>
#include <iomanip>
#include <iostream>   
using namespace std;

                                  
template <typename T, size_t size>                                    
void proj6_4(array<T, size>&);                                      

int main() {
   const size_t arraySize{10}; // size of array
   array<int, arraySize> data{34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

   cout << "Unsorted array:\n";

   // output original array
   for (size_t i{0}; i < arraySize; ++i) {
      cout << setw(4) << data[i];
   }

   proj6_4(data); 

   cout << "\nSorted array:\n";


   for (size_t i{0}; i < arraySize; ++i) {
      cout << setw(4) << data[i];
   }

   cout << endl;
} 


template <typename T, size_t size>                                    
void proj6_4(array<T, size>& items) {                           

   for (size_t next{1}; next < items.size(); ++next) {                
      T insert{items[next]};     
      size_t moveIndex{next};   

      while ((moveIndex > 0) && (items[moveIndex - 1] > insert)) {

         items[moveIndex] = items[moveIndex - 1];                   
         --moveIndex;                                                   
      }                                                 
      items[moveIndex] = insert;  
   }                                                      
} 