#include "Player.h"

void Player::ListParts() const
{
    for (size_t i = 0; i < parts.size(); i++)
    {
        if (parts[i] == parts.back())
        {
            cout << parts[i];
        }
        else
        {
            cout << parts[i] << " - ";
        }
    }
    cout << "\n\n";
}