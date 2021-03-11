#include <iostream>
#include <ctime>

using namespace std;

/*
    Fill an array of length 10 by uniq random values
*/

int main()
{
    srand(time(NULL));

    const size_t ARRAY_LENGTH = 10;
    const int VALUE_THRESH = 20;

    int arr[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++){
        bool goodNumber;
        do{
            goodNumber = true;
            int newNumber = rand() % VALUE_THRESH;
            for (int j = 0; j < i; j++){
                if (arr[j] == newNumber){
                    goodNumber = false;
                    break;
                }
            }
            if (goodNumber){
                arr [i] = newNumber;
            }
        }while(!goodNumber);
        
    }

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}