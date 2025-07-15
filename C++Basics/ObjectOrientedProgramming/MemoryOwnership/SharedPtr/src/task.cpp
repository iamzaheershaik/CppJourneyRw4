#include <iostream>

#include "../include/chat.hpp"

int User::nextId = 0;
int User::nextChatId = 0;

void User::createNewChat(std::string name) {
    /* TODO */
}

void User::joinChatByInvite(const User& user) {
    /* TODO */
}

void User::leaveChat() {
    /* TODO */
}

int main() {
    User bob("Bob");
    User alice("Alice");
    bob.createNewChat("C++ discussion");
    alice.joinChatByInvite(bob);

    std::cout << "Bob is currently in the chat " << bob.getChat()->getName() << "\n";
    std::cout << "Alice is currently in the chat " << alice.getChat()->getName() << "\n";

    return 0;
}