#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 
int main()
{
    const int N = 5;
    int map[N][N]={};
    int x, y;
    // srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        x = rand() % N;
        y = rand() % N;
        map[x][y] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    
    while (true)
    {
        cout << "Enter target coordinate: " << endl;
        cin >> x;
        cin >> y;

        if (map[x][y] == 1)
        {
            cout << "Hit!" << endl;
            map[x][y] = 0;
            bool ship_detected = false;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (map[x][y] == 1)
                    {
                        ship_detected = true;
                    }
                }   
            }
            
            if (ship_detected == false)
            {
                cout << "You win!" << endl;
                break;
            }
        }
        else
        {
            cout << "Miss!" << endl;
        }
    }
    
    return 0;
}