#include <iostream> 
#include <string>

using namespace std;


int main() {
    string arr_one[] = {"hemetoaklandrialtofullertonmarcolongchinofresnovallejoclovissimithousand"};
    string arr_two[] = {"clovis", "vallejo", "rialto", "marco"};

    string* list;
    list = &arr_one[0];

    cout << list << endl;

    for(int i = 0; i < (sizeof(arr_two) / sizeof(string)); i++){
        void FindSubstring(string word_one, string word_two);
        FindSubstring(arr_one[0], arr_two[i]);
    }


    return 0;
}


void FindSubstring(string word_one, string word_two) {
    cout << word_one.find(word_two) << " ";
}