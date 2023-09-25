#include <vector>
#include <string>
class User{


public:

const User* noone;
std::string getUserName(){return userName;}
std::string getEmail(){return email;}
void setEmail(std::string s){email = s;}
void setUserName(std::string s){userName = s;}

void addFriend(User*);
void removeFriend(std::string user);
int numFriends();
User* getFriendAt(int n);

User* getNooone(){
    User* Nooone = new User();
    Nooone->setUserName("nobody :(");
    return Nooone;
}

private:
std::string userName;
std::string email;
std::vector<User*> friendList;
};