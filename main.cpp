#include <iostream>

/* BRANDON LAPOMERAY
 * This program reads in the number of times at bat,
 * and the number of hits for nine(9) players.
 * Then it calculates the batting average for each player
 *
 * Input  - Number of times at bat for nine(9) players, Number of hits for nine(9) players.
 * Output - The at bats, hits, and batting average of each player.
 */

using namespace std;

int main() {

    float playerAtBats;
    float playerHits;
    float playerBattingAverage;
    int playerNumber = 1;

    /* While loop that asks for the player's at bat count and hits. Then calculates their batting average  */
    while (playerNumber < 10) {

        /*Asks the user for the player's at bat count  */
        cout << "What is Player " <<  playerNumber << " at bat count?" << endl;
        cin >> playerAtBats;

        /*Asks the user for the player's hit count  */
        cout << "What is Player " <<  playerNumber << " Hit count?" << endl;
        cin >> playerHits;


        /* Output the player's at bat count and hit count */
        cout << "Player " <<  playerNumber << " at bat count is " << playerAtBats << endl;
        cout << "Player " <<  playerNumber << " hit count is " << playerHits << endl;


        /* Calculates and outputs the players batting average */
        playerBattingAverage = playerHits/playerAtBats;

            cout << "Player " << playerNumber << " batting average is " << playerBattingAverage << endl;
            cout << "\n";


        /*Changes the player's number*/
        playerNumber++;

    }



    return 0;
}
