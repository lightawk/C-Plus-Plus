#include <Player.h>

Player::Player() {}
Player::Player(const Player& player) {

}
Player::Player(const std::string& name, int points, int dommages) {

}

//~Player() {}

bool Player::isDead() {
    return m_HitPoints <= 0;
}
void Player::attaquer(Player& autre) {
    autre.m_HitPoints -= m_Damages;
}

// Avec "GetName() const" on indique au compilateur de ne pas modifier l'état de l'objet
const std::string& Player::GetName() const {
    return m_Name;
}
int Player::GetHitPoints() const {
    return m_HitPoints;
}
int Player::GetDommages() const {
    return m_Damages;
}
void Player::setDamages(int damages) {
    if(damages < 0) {
        this->m_Damages = damages;
    }
}