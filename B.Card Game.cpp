#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneet_wins = 0;


        vector<pair<int, int>> suneet_cards = { {a1, a2}, {a2, a1} };
        vector<pair<int, int>> slavic_cards = { {b1, b2}, {b2, b1} };

        for (auto s_cards : suneet_cards) {
            for (auto v_cards : slavic_cards) {
                int suneet_rounds = 0, slavic_rounds = 0;


                if (s_cards.first > v_cards.first) suneet_rounds++;
                else if (s_cards.first < v_cards.first) slavic_rounds++;


                if (s_cards.second > v_cards.second) suneet_rounds++;
                else if (s_cards.second < v_cards.second) slavic_rounds++;


                if (suneet_rounds > slavic_rounds) suneet_wins++;
            }
        }

        cout << suneet_wins << endl;
    }
    return 0;
}
