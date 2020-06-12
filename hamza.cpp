#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

int main() {
    string a;
    int sen = 0;
    int wor = 0;
    int le = 0;
    float s, l;

    cout << "text: "
    getline(cin, a);
    for (int x = 0; x < a.length(); x++) {
        char r = 'A';
        for (char t = 'a'; t <= 'z'; t++) {
            if (a[x] == t || a[x] == r) {
                le++;


            }
            r++;
        }
        if (a[x] == '.' || a[x] == '!' || a[x] == '?') {
            sen++;
        }
        else if (a[x] == ' ') {
            wor++;
        }
    }
    s = (100 * sen) / (wor + 1);
    l = (100 * le) / (wor + 1);
    float grade = 0.0588 * l - 0.296 * s - 15.8;
    int grade_2 = grade;
    float one = abs(grade - grade_2);
    float two = abs(grade - (grade_2 + 1));

    if (grade < 1) {
        cout << "Before Grade 1" << endl;
    }
    else if (grade > 16) {
        cout << "Grade 16+" << endl;
    }
    else {
        if (one > two) {
            cout << "Grade " << grade_2 + 1 << endl;
        }
        else {
            cout << "Grade " << grade_2 << endl;
        }

    }
    cout << wor+1 << endl;





}




