#include <iostream>
#include <string>
using namespace std;

class compare {
private:
    string str1, str2;

public:
    void getData(string s1, string s2) {
        str1 = s1;
        str2 = s2;
    }

    void check_len() {
        int len1 = 0;
        int len2 = 0;
        int flag = 1;

       
        for (int i = 0; str1[i] != '\0'; i++) {
            len1++;
        }

        
        for (int i = 0; str2[i] != '\0'; i++) {
            len2++;
        }

        if (len1 != len2) {
            cout << "Both strings are different";
            return;
        }

  
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout << "Both strings are same";
        } else {
            cout << "Both strings are different";
        }
    }
};

int main() {
    compare c;

    string str1, str2;

    cout << "Enter  string  1: ";
    getline(cin, str1);
    cout<<"Enter string 2: ";
    getline(cin, str2);

    c.getData(str1, str2);
    c.check_len();

    return 0;
}