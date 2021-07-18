//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,temp,t,size;
    string s;

    cin >> t;

    for (int i = 1;i <= t; i++) {
        cin >> size;
        cin >> n;

        deque <int> q;
        cout << "Case " <<i<< ":"<<endl;
        for (int i = 0; i < n; i++) {
            cin >> s;

            if(s == "pushLeft" || s == "pushRight") {
                cin >> temp;
                if(q.size() == size) {
                    cout << "The queue is full"<<endl;
                }

                else {
                    if(s == "pushLeft") {
                        cout << "Pushed in left: " << temp <<endl;
                        q.push_front(temp);
                    }


                    if(s == "pushRight") {
                        cout << "Pushed in right: " << temp<<endl;
                        q.push_back(temp);
                    }
                }

            }

            if(s == "popLeft" || s == "popRight") {
                if(q.size() == 0) {
                    cout << "The queue is empty"<<endl;
                }

                else {
                    if(s == "popLeft") {
                        cout << "Popped from left: " << q.front()<<endl;
                        q.pop_front();
                    }

                    if(s == "popRight") {
                        cout << "Popped from right: " << q.back() <<endl;
                        q.pop_back();
                    }

                }

            }


        }



    }

 return 0;
}
