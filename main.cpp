#include <iostream>
using namespace std;
// Design a virtual escape room where players solve puzzles and make decisions to escape. Use a text-based interface to describe the room and provide clues.

void start_announcement()
{
    cout << "Welcome dear player to this wonderful game named, Mystery in the making!!! Right now you're in a room with three doors, each one of 'em leading to a particular outcome!!! Choose wisely if you wanna win!!!" << endl;
}

void door_1(int answer_1, int answer_2, int answer_3)
{
    bool door_1=1;
    int max=0, N=100, S=0, P=1;
    cin >> door_1;
    if(door_1 == 1)
    {
        cout << "Oh no, you're in front of a crocodile pit!!! Your avatar must jump on each of the 3 polls if he wants to survive... In order to accomplish that answer the following questions correctly: " << endl;
        cout << "Question 1: Which is the maximum number of the following string" << endl;
        for(int i=0 ; i<9 ; i++)
        {
            cout << rand()%N <<" ";
            if(max<rand()%N)
            {
                max=rand()%N;
            }
        }
        cin >> answer_1;
        if(answer_1 == max)
        {
            cout << "Avatar jumped on the first poll" << endl;
        }
        if(answer_1 != max)
        {
            cout << "GAME OVER!!!" << endl;
        }
        cout << "Question 2: Calculate correctly the following sum:" << endl;
        for(int i=0 ; i<3 ; i++)
        {
            cout << rand()%N <<" ";
            if(i == 0)
            {
                cout << "+";
            }
            if(i == 1)
            {
                cout << "+";
            }
            if(i == 2)
            {
                cout << "=";
            }
            S += rand()%N;
        }
        cin >> answer_2;
        if(answer_2 == S)
        {
            cout << "Avatar jumped on the second poll" << endl;
        }
        if(answer_2 != S)
        {
            cout << "GAME OVER !!!" << endl;
        }
        cout << "Question 3: Calculate correctly the following product:" << endl;
        for(int i=0 ; i<3 ; i++)
        {
            cout << rand()%N <<" ";
            if(i == 0)
            {
                cout << "*";
            }
            if(i == 1)
            {
                cout << "*";
            }
            if(i == 2)
            {
                cout << "=";
            }
            P *= rand()%N;
        }
        cin >> answer_3;
        if(answer_3 == P)
        {
            cout << "Avatar jumped on the third poll" << endl;
             cout << "You've succesfully returned to the room!!!" << endl;
        }
        if(answer_3 != P)
        {
            cout << "GAME OVER !!!" << endl;
        }
    }
}
    void door_2(int n=80)
    {
        bool door_2=1;
        int N=100;
        cin >> door_2;
        cout << "Welcome to the infinity loop!!! In order to escape it and get back to the room you need to find a certain number in order to break it! GOOD LUCK!!!" << endl;
        if(door_2 == 1)
        {
            float inf=1.0 / 0.0;
            for(int i=0 ; i<inf ; i++)
            {
                cout << rand()%N;
                if(rand()%N == n)
                {
                    cout <<"Congratulations you escaped!!!";
                         break;
                }
            }
        }
    }
void door_3()
{
    cout << "Congratulations!!! You've escaped the Mystery Room!!! You're free!!!";
}
int main()
{
    int n, answer_1, answer_2, answer_3;
    start_announcement();
    door_1(answer_1, answer_2, answer_3);
    door_2(n);
    door_3();
}
