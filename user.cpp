#include "user.h"
#include <iostream>

void User::addFriend(User * p)
{
    friendList.push_back(p);
}

void User::removeFriend(std::string user)
{
    //find the friend to remove
    int index = 0;
    for (User* p:friendList){

        if(p->userName == user){
            friendList.at(index) = nullptr;
            //std::cout <<"found 'em" <<std::endl;
            break;
        }else{
        index++;
        }
    }
    //shifts vector left, replacing the friend to be removed
    for(int i = index; i < friendList.size()-1; i++ ){
        friendList.at(i) = friendList.at(i+1);
    }
    //std::cout << "shifted, i think  " << friendList.at(0) << std::endl;
}

int User::numFriends()
{

    return friendList.size();
}

User *User::getFriendAt(int n)
{
    return friendList.at(n);
}
