
#include<bits/stdc++.h>
#define ll long long
using namespace std;
time_t now;
char* date_time;
class t_and_d
{
    public :
        t_and_d(char* date_time) {
            cout << "Current time and date stored" << endl;
        }
        void display_time() {
            cout << "The current time is " << date_time << endl;
        }
};

int main()
{


    now = time(0);

    date_time = ctime(&now);

    t_and_d TIME_NOW(date_time);

    TIME_NOW.display_time();

    return 0;

}
