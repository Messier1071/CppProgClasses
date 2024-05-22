#include <iostream>
#include <string>
using namespace std;

class cards
{
private:
protected:
    string m_recipient;

public:
    virtual void showMessage() = 0;
};

class christmasscard : cards
{
private:
    /* data */
public:
    christmasscard(string recipient)
    {
        m_recipient = recipient;
    };
    ~christmasscard(){};

    void showMessage()
    {
        cout << "merry christmass[" << m_recipient << "] !" << endl;
    }
};

class birthdayCard : cards
{
private:
    /* data */
public:
    birthdayCard(string recipient)
    {
        m_recipient = recipient;
    };
    ~birthdayCard(){};

    void showMessage()
    {
        cout << "happy birthday:[" << m_recipient << "] !" << endl;
    }
};

class valentineCard : cards
{
private:
    /* data */
public:
    valentineCard()
    {
        m_recipient = "insert name here";
    };
    valentineCard(string recipient)
    {
        m_recipient = recipient;
    };

    ~valentineCard(){};

    void showMessage()
    {
        cout << "Love you :[" << m_recipient << "] !" << endl;
    }
};
