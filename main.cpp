//
//  main.cpp
//  toby_tomatoclock
//
//  Created by tobychen on 2017/1/15.
//  Copyright © 2017年 Boston University. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <string>
#include <unistd.h>
using namespace std;

int main(int argc, const char * argv[]) {
    time_t start_time, end_time;
    start_time = time(NULL);
    int flag = 0;
    char choice;
    string task;
    while ( (end_time = time(NULL)) ) {
        if ( end_time == start_time+5 ) {
            cout << "Time to rest~\nWhat did you do in the last 25 minutes?" << endl;
            getline(cin, task);
            start_time = end_time;
            if (start_time == end_time )
                cout << 1;
            if ( flag < 3 )
                sleep(1);
            else
                sleep (3);
            cout << "Ready to work for another round?\ny/n" << endl;
            cin >> choice;
            cin.ignore();
            if ( choice == 'y' ) {
                flag++;
            }
            else if ( choice == 'n' )
                break;
            }
    }
    return 0;
}
