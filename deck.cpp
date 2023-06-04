#include <iostream>
#include <vector>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
 * Draw 7: Get 7 cards from the deck.
 * Draw card: Get top card of deck.
 * Show remaining: Get cards that are not yet drawn and can still be in the deck.
 * 
 * User should be able to repeat drawing a card until prompted to exit the program
*/

class Deck
{
    string cards[52] = {
        "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS",
        "AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH",
        "AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC",
        "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD"
    };
    
    vector<string> deck;

public:
    string getCards() {
        return cards[52];
    }

    vector<string> getDeck()
    {
        return deck;
    }

    //DrawSeven() {

    // }

    // DrawCard() {

    // }

    // getRemainingCards() {

    //}

    void Shuffle()
    {
        srand(time(NULL));
        for (int i = 0; i < 52; i++)
        {
            int random = i + (rand() % (52 - i));
            //swap(cards[i], cards[random]);
            string temp = cards[i];
            cards[i] = cards[random];
            cards[random] = temp;
            deck.push_back(cards[i]);
        }
    }
};

int main()
{
    Deck d;
    d.Shuffle();

    return 0;
}