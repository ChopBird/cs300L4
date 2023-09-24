#include <vector>
#include <string>
class User{


public:


std::string getUserName(){return userName;}
std::string getEmail(){return email;}
void setEmail(std::string s){email = s;}
void setUserName(std::string s){userName = s;}

void addFriend(User*);
void removeFriend(std::string user);
int numFriends();
User* getFriendAt(int n);

private:
std::string userName;
std::string email;
std::vector<User*> friendList;
};