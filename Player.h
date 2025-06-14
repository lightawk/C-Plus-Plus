#include <iostream>
#include <string>

class Player {

public:
    Player();
    Player(const Player& player);
    Player(const std::string& name, int points, int dommages);

    ~Player();

    bool isDead();
    void attaquer(Player& autre);

    const std::string& GetName() const;
    int GetHitPoints() const;
    int GetDommages() const;

    void setDamages(int damages);

private:
    std::string m_Name;
    int m_HitPoints;
    int m_Damages;
};