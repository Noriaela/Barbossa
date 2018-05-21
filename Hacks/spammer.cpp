#include "spammer.h"

vector<string> spamMessage = { // Add messages here
    "Barbossa(Warlauke Edit)",
    "Have Fun! ^_^",
    "ViKiNG coded this but Warlauke edited it",
};

void DoSpammer() {
    if (!pEngine->IsInGame())
        return;
    if (!vars.misc.spammer)
        return;
    static int i;
    i++;
    if(i % 10 == 5) {
        string message = "say ";
        message += spamMessage[rand() % spamMessage.size()];
        pEngine->ExecuteClientCmd(message.c_str());
    }
    if(i > 1000)
        i = 0;
}