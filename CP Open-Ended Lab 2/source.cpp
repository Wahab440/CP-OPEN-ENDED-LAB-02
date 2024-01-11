#include <iostream>
#include <string>
using namespace std;

void mergedArray(int a1[], int a2[], int a3[]);
void sortArray(int a3[]);
void commonElement(int a1[], int a2[]);
bool isPalindrome(const string& str);

int main() {
    const int size1 = 5;
    const int size2 = 7;
    const int merge_size= size1+size2;

    int arr1[size1], arr2[size2], merged[merge_size];

    cout << "\nEnter " << size1 << " elements for the first array: \n";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }
 
    cout << "\nEnter " << size2 << " elements for the second array: \n";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    mergedArray(arr1, arr2, merged);

    cout << "\nMerged Array: ";
    for (int i = 0; i < merge_size; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    sortArray(merged);

 
    cout << "\nMerged Array in Ascending Order: ";
    for (int i = 0; i < merge_size; ++i) {
        cout << merged[i] << " ";
    }

    commonElement(arr1, arr2);
    string sentence;
   
    cout << "\nEnter a sentence: \n";
    cin.ignore();
    getline(cin, sentence);

    bool isPal = isPalindrome(sentence);
    if (isPal) {
        cout << "The sentence is a palindrome.\n";
    }
    else {
        cout << "The sentence is not a palindrome.\n";
    }

    return 0;
}

void mergedArray(int a1[], int a2[], int a3[]) {
    for (int i = 0; i < 5; i++) {
        a3[i] = a1[i];
    }
    for (int i = 5; i < 12; i++) {
        a3[i] = a2[i - 5];
    }
}

void sortArray(int a3[]) {
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (a3[i] > a3[j]) {
                int temp = a3[i];
                a3[i] = a3[j];
                a3[j] = temp;
            }
        }
    }
}

void commonElement(int a1[], int a2[]) {
    cout << "\n\nCommon Elements: ";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (a1[i] == a2[j]) {
                cout << a1[i] << " ";
            }
        }
    }
    cout << endl;
}

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
