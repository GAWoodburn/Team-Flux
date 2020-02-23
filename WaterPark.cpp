#include "WaterPark.h"

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for the time function 
using namespace std;

WaterPark::WaterPark(int &leftOverMoney, bool &playerDeath) {
    // intro + a switch statment leading to the dialogue paths (A/B/C)
    mainChoices(decision1, decision2a, decision4a, decision6b, playerMoney, isPlayerDead);

    leftOverMoney = playerMoney; // used to pass the players money along to travel the rest of the park
    playerDeath = isPlayerDead; // used to pass the players status to the main menu 
}

    void WaterPark::introduction() { // The intro to the water park
        cout << " ********* Welcome to Alantis Adventure! *********\n\n";
        cout << "        Splish!\n"
            << "                             Splash!      \n\n"
            << " ====================================================\n";
    }

    // a switch statment leading to other decisions (A/B/C)
    void WaterPark::mainChoices(char& decision1, char& decision2a, char& decision4a, char& decision6b, int& playerMoney, bool &isPlayerDead) {

        bool endOfWaterPark = true; // flag to leave the water park

        introduction(); // The intro to the water park

        while (endOfWaterPark == true) {

            cout << " How would you like to proceed...?\n"
                << " Account Balance: " << playerMoney << "\n"
                << " A) The Lazy River Tour. ($10.00)\n"
                << " B) The Sea Storm Wave Pool. ($7.00)\n"
                << " C) The Poseidon Waterfall Drop Slide of Terror!. (FREE! Survive and win $5.00)\n"
                << " D) Go back to the main park.\n"
                << " (A/B/C/D): ";

            cin >> decision1; // The users first decision

            // checks the user's input
            while (decision1 != 'A' && decision1 != 'a' && decision1 != 'B' && decision1 != 'b' && decision1 != 'C' && decision1 != 'c' && decision1 != 'D' && decision1 != 'd') {
                cout << " Invalid input, please try again: ";
                cin >> decision1;
            }

            switch (decision1) {
            case 'A': // The Lazy River Tour, -$10.00
            case 'a':
                if (playerMoney < TEN) { // in case the player doesn't have enough money
                    cout << " ==================================================================\n";
                    cout << " Looks like you don't have enough money, please make another choice\n";
                    break;
                }
                cout << " Excellent choice, let's begin the tour!\n";
                pathA(decision2a, decision4a, playerMoney, endOfWaterPark); // Path "A" (The Lazy River Tour)
                break;
            case 'B': // The Sea Storm Wave Pool, -$7.00
            case 'b':
                if (playerMoney < SEVEN) { // in case the player doesn't have enough money
                    cout << " Looks like you don't have enough money, please make another choice\n";
                    break;
                }
                cout << " Ah there's nothing like the sea!  let's get to it then shall we!\n";
                pathB(decision6b, playerMoney); // Path "B" (The Sea Storm Wave Pool)
                break;
            case 'C': // The Posieden Waterfall Drop Slide of Terror!, +$5.00
            case 'c':
                cout << " Quite daring aren't we?  \n";
                pathC(playerMoney, endOfWaterPark); // Path "C" (The Posieden Waterfall Drop Slide of Terror!) a risk/reward scenario
                break;
            case 'D':
            case 'd':
                cout << " Back to the park it is!\n";
                endOfWaterPark = false; // returns to the park
                break;
            }
        }
    }

    void WaterPark::decisionATwo(char& decision2a, int& playerMoney) { // The original path "A" (The Lazy River Tour)

        playerMoney -= TEN; //  -$10.00
        cout << " ====================================================\n";

        cout << " You find yourself in very comfortable blue inner tube slowly floating around the park.\n"
            << " While the tour guide explains in detail about the history of the lost city you notice\n"
            << " something shiny in the bottom of the water but can't quite make out what it is.  Gold, Jewlery,\n"
            << " a quarter!?  The urge to figure out plagues your mind and without hesitation you roll out of your\n"
            << " inner tube and dive to the depths... \n\n"
            << "      *UNDERWATER BUBBLE NOISES*   \n"
            << "                                              *UNDERWATER BUBBLE NOISES*   \n"
            << "              *UNDERWATER BUBBLE NOISES*   \n\n"
            << " As you stretch and reach for your new-found goal you begin to realize this river's much deeper than\n"
            << " you originally anticipated, you wonder how much further could this possibly be?  Why does this coveted\n"
            << " prize elude you so...?\n\n"
            << " ... Then suddenly you notice something peculiar... the object, is moving...?\n"
            << " Not away from you but in a slow circle-type motion, confused and curious your hand makes its way to the\n"
            << " mysterious object, you're finally close enough to see that the spinning, shiny obsession is actually a button\n"
            << " with glowing lights around it attached to the river floor.\n\n"
            << " How would you like to proceed...\n"
            << " A) Press the button? you've come this far.\n" // decision "AA"
            << " B) You're running short on oxygen and decide to surface for air\n" // decision "AB"
            << " (A/B): ";
        cin >> decision2a;

        // checks the user's input
        while (decision2a != 'A' && decision2a != 'a' && decision2a != 'B' && decision2a != 'b') {
            cout << " Invalid input, please try again: ";
            cin >> decision2a;
        }
    }

    void WaterPark::decisionAThree() { // path "AA" (Press the button? you've come this far)
        cout << " ====================================================\n\n";

        cout << "              YOU PRESSED THE BUTTON!!!\n\n"
            << " You feel intense pressure around you and notice a row a small trap doors suddenly open along the\n"
            << " river floor, you're immediately yanked toward them and then realize...\n\n"
            << "               THE WATER... IS... DRAINING!\n\n"
            << " The grip of the current holds you at the bottom of the sea floor, you try to pull away to no avail.\n"
            << " You panic and release oxygen from your lungs, your heart is pounding as you stuggle to tear away from\n"
            << " the vent!  Your focus begins to blur... \n"
            << " ... With your hands stretched towards the heavens you feel something cool on your fingertips... WIND!?\n"
            << " The surface of the water is moving closer and closer, until it reaches your face and you loudly grasp\n"
            << " for air.  Trembling and embarrassed you look around to see if anyone noticed your near death, but no one\n"
            << " seems to, everyone around you is in an uproar with the staff about the sudden loss of water.  You look\n"
            << " back at the area where you're certain you found the mysterious button... but find nothing, only the concrete\n"
            << " pit empty of water.  You find a ladder and make your way out of the Lazy River greatful to be both alive and\n"
            << " somehow void of banishment from the waterpark.\n\n";
    }


    bool WaterPark::decisionAFour(char& decision4a) { // path "AB" (You're running short on oxygen and decide to surface for air)
        cout << " ====================================================\n\n";

        cout << " Though the button beckons your attention you ultimately decide it's not worth the risk and resurface for air.\n"
            << " You make your way back to the surface and into your inner tube, pondering on your decision, wondering about the\n"
            << " purpose of the button, why was it there?  You look back and can no longer see its glow.  You continue to make your\n"
            << " way through the river, listening to the detailed history of the lost city and admiring the immense size of this\n"
            << " waterpark.  Amazed by how much larger the park was than you expected, you notice the current of the river has\n"
            << " picked up.  You can't quite see over the tall fellow in front of you but you get the sense that something seems\n"
            << " wrong, your suspision is confirmed when you suddenly hear a horrific scream...\n\n"
            << "                     AAAAHHHHHHHHHHH!!!\n\n   "
            << " You hear more and more shrieks of terror and start to panic, the tall man ahead of you finally bobs out of the way\n"
            << " so you can see what's upriver... nothing!... no one is there!  You can clearly see now that the bridge has collapsed\n"
            << " creating a waterfall to certain death.  You quickly flip around tear through the water for the river border, your\n"
            << " hand barley grasps the concrete side when you feel something heavy around your ankle... it's the tall man who was in\n"
            << " front of you, holding on for dear life!  You feel your grip loosening, he's too heavy!!!\n"
            << " How do you proceed?\n" // ** instead of this being the player decision we might want to make this a choice that happens based at random **
            << " A) Kick him off!\n"
            << " B) Try to hold on a little longer.\n"
            << " (A/B): ";
        cin >> decision4a;

        // checks the user's input
        while (decision4a != 'A' && decision4a != 'a' && decision4a != 'B' && decision4a != 'b') {
            cout << " Invalid input, please try again: ";
            cin >> decision4a;
        }

        cout << " ====================================================\n\n";

        if (decision4a == 'A' || decision4a == 'a') { // path "ABA" (Kick him off!)
            cout << " You decide you must live, that there's no way to save both of you so kick the man off your ankle.  You watch his look\n"
                << " of terror and disbelief as he goes over the falls, then you hear something...\n\n"
                << "         CRACK!              \n  "
                << "                        CRUMBLE!\n\n"
                << " The concrete edge you held onto broke off and you fall to your death...\n\n"
                << " ===================== GAME OVER ======================\n"
                << " ======================================================\n\n";
            isPlayerDead = true; // the player has died

            return false; // GAME OVER
        }

        if (decision4a == 'B' || decision4a == 'b') { // path "ABB" (Try to hold on a little longer)
            cout << " You can't bring yourself to sacrifice someone else for your own life, so you hold onto the edge with all your might.\n"
                << " Then suddenly you hear something...\n\n"
                << "         CRACK!              \n  "
                << "                        CRUMBLE!\n\n"
                << " The concrete edge you held onto broke off, you think to yourself that this is it... when you feel a grip around your\n"
                << " wrist, you look up to see a lifeguard pulling you and the man around your ankle ashore with all her strength.\n"
                << " You hustle away from the edge of the disaster and help the other life guards with getting the remaining tour group\n"
                << " out of the water.  Once everyone is safe you make your way back to the entrance of the waterpark, shaken up a bit but\n"
                << " still alive, so you take a moment and sit on a bench to get your thoughts together when you notice something unusual...\n"
                << " Everyone is still going about their day as if nothing horrific just occured!  You look back at the line for the Lazy River\n"
                << " and notice a very casually laid sign that reads - THIS RIDE IS UNDER CONSTRUCTION ;).  To your surprise the waterpark\n"
                << " doesn't close and continues as if nothing happened.";

        }
        return true;
    }

    void WaterPark::decisionBOne(char& decision6, int& playerMoney) { // The original "B" path (The Sea Storm Wave Pool)

        playerMoney -= SEVEN; // -$7.00 

        cout << " ====================================================\n\n";

        cout << " You decide to go the Sea Storm Wave Pool, as you approach the atraction you notice it's surprisingly quite large\n"
            << " up close.  It's shaped like an hour glass on its side, the middle section being connected by a waterfall you can probably pass\n"
            << " under.  As you get closer the attendant asks you if you prefer to use an inner tube or go freestyle, and advices that anyone who\n"
            << " isn't confident in their swimming ability to use an inner tube for their saftey"
            << " How do you proceed...\n"
            << " A) Use an inner tube\n"
            << " B) Go freestyle\n"
            << " (A/B): ";

        cin >> decision6;

        // checks the user's input
        while (decision6 != 'A' && decision6 != 'a' && decision6 != 'B' && decision6 != 'b') {
            cout << " Invalid input, please try again: ";
            cin >> decision6;
        }
    }

    void WaterPark::decisionBTwo() { // path "BA" (Use an inner tube)

        cout << " ====================================================\n\n";

        cout << " You choose to use an inner tube, thinking to yourself that you'd rather be safe than sorry, you walk out into the water holding\n"
            << " the inner tube at chest height.  Once the water depth is at shoulder level you climb onto the inflatable raft ready to brave\n"
            << " the seas angry waves.  You then deceide to challenge yourself by successfully making it through the first side of the wave pool,\n"
            << " under the waterfall, and to the other end of the pool without falling out of the raft.  As you begin your journey you feel\n"
            << " the first wave pass by...\n\n"
            << "              WOOOSHHH\n\n"
            << " The waves feel more powerful than you anticipated, shaking the confidence in your original goal, but also causing you to focus\n"
            << " your strategy on keeping your balance.  The waves continue to push and pull your vessel as you make your way to the midway\n"
            << " waterfall.  The falling, heavy water slams into your body nearly capsizing the raft, but you made it through anyhow.  You look\n"
            << " back at the waterfall you made it through victoriously and notice something strange hanging on the inner wall, a rusty sign\n"
            << " dangling by a chain that reads...\n\n"
            << "                    CAUTION: NO SWIMMING\n"
            << "                       DRAINAGE AREA\n\n"
            << " You immediately look around and realize that you're the only one in the tunnel!  A red light next to the sign flickers on and\n"
            << " the water current begins pulling you in a couterclockwise spiral toward the middle.  You panic and frantically paddle away from\n"
            << " the vortex.  Thankfully a mixture of fear and adrenaline helped you make it out to the other side of the waterfall.  As you\n"
            << " make your way to your original goal you wonder what's next in your journey today...\n";

    }

    void WaterPark::decisionBThree() { // path "BB" (Go freestyle)

        cout << " ====================================================\n\n";

        cout << " You decide to go freestyle,  you feel confident in your swimming ability and figure this will be more adventurous.\n"
            << " You wade out further into the water feel the first wave...\n\n"
            << "                       WOOOSHHH\n\n"
            << " The wave hit harder than you expected but not enough to stop you from pushing forward.  You then decide to set up a\n"
            << " challenge for yourself, to see if you can make it all the way through the wave pool, under the waterfall in the middle,\n"
            << " and out the other side.  The water depth continues to climb as you get closer to the waterfall center so you make sure\n"
            << " to time your leaps between waves, one wrong calculationand you know you'll get swept under.  Finally you make it to the\n"
            << " waterfall, the weight of the heavy fall pushes you under for a moment, when you surface you're now on the other side of\n"
            << " the falls in a dark tunnel.  You look back at the waterfall you came through and notice something odd on the tunnel wall...\n"
            << " a dangling, rusty sign that reads...\n\n"
            << "                   CAUTION: NO SWIMMING\n"
            << "                       DRAINAGE AREA\n\n"
            << " You immediately look aroundand realize that you're the only one in the tunnel!   A red light next to the sign flickers on\n"
            << " and the water current begins pulling you in a clockwise spiral toward the middle.  You panic and frantically try to swim\n"
            << " away from the vortex, but the current is too strong, you're pulled completely under water.You meet the grate on the sea floor,\n"
            << " it's too wide to clog, your lungs begin trading oxygen for water... The light around you becomes dim...\n\n"
            << "              BUBBLE NOISE\n"
            << "                               BUBBLE NOISE\n\n"
            << "                        ...\n\n"
            << "                       SPLASH!!!!\n\n"
            << " You feel something cold on your face and begin to open your eyes.Squinting you see multiple faces above you, it's the life\n"
            << " guards!!  They explain how they found you floating in the wave pool near the shore, you tell them about the getting caught\n"
            << " in the DRAINAGE area.  They look at each other confused,  point to toward the waterfall and tell you that there's nothing but\n"
            << " a concrete wall behind there, the wave pools are completely separate from each other.  You immediately head toward the edge of\n"
            << " the pool in disbeliefand stick your hand through the waterfall... there's only a wall.  Confused and rattled you choose to move on.\n";

    }

    // The original "A" Path (The Lazy River Tour)
    void WaterPark::pathA(char& decision2a, char& decision4a, int& playerMoney, bool& endOfWaterPark) {

        decisionATwo(decision2a, playerMoney); // The original "A" Path (The Lazy River Tour), Leads to path "AA" or "AB"

        if (decision2a == 'A' || decision2a == 'a') { // The "AA" Path (Press the button? you've come this far)
            decisionAThree(); // Leads to original path "B" or "C"
        }
        if (decision2a == 'B' || decision2a == 'b') { // The "AB" Path (You're running short on oxygen and decide to surface for air)
            endOfWaterPark = decisionAFour(decision4a); // path "ABA" = GAME OVER, path "ABB" leads to original path "B" or "C"
        }

    }

    void WaterPark::pathB(char& decision6b, int& playerMoney) {

        decisionBOne(decision6b, playerMoney); // The original "B" path (The Sea Storm Wave Pool)

        if (decision6b == 'A' || decision6b == 'a') {
            decisionBTwo(); // path "BA" (Use an inner tube)
        }

        if (decision6b == 'B' || decision6b == 'b') {
            decisionBThree(); // path "BB" (Go freestyle)
        }
    }

    void WaterPark::pathC(int& playerMoney, bool& endOfWaterPark) { // The original "C" path (The Poseidon Waterfall Drop Slide of Terror!)

        playerMoney += FIVE; // +$5.00 

        cout << " ====================================================\n\n";

        cout << " You deciede to go to The Poseidon Waterfall Drop Slide of Terror!  You notice the slide is much steeper and taller then it looked\n"
            << " from the entrance of the park.   On the path leading to the attraction prerecorded warnings telling park-goers to turn back before\n"
            << " it's too late are heard through the scattered speakers.  As you approach the spiral, wooden staircase leading to the slide you\n"
            << " see several signs that reads...\n\n"
            << "               NOTICE:\n"
            << "     ALL PERSONS USING THE SLIDE\n"
            << "       DO SO AT THEIR OWN RISK.\n"
            << "   OWNER & MANAGER ARE NOT RESPONSIBLE\n"
            << "     FOR ANY ACCIDENTS OR INJURIES.\n\n"
            << " Shocked to see such a sign at a water park you start to turn back in fear, but instead you continue on, convincing yourself that\n"
            << " sign is just a part of the show.  As you head furtherand further up the staircase you see more safety signs preparing patrons on\n"
            << " how to properly lay on their backs with their arms crossed, explicitly telling them not to sit up or else they may fall out.\n"
            << " With butterflies in your stomach you finally make it to the top, you can easily see the entire park from here.  The attendant\n"
            << " paraphrases the safety posesand gives you the ok to go down the slide.  You lay on your back, arms crossed, and slowly ease\n"
            << " yourself to the edge.  You start to fall...\n\n"
            << "              AHHHHHHHHH!\n\n";

        unsigned seed = time(0); // getting the system time for rand()
        srand(seed);
        int dice = (rand() % (TEN - ONE + ONE)) + ONE; // to hold a random value between 1 - 10

        if (dice > FIVE) { // They have good luck (survive)

            cout << " (Rolling dice to determine your luck)\n"
                << "              .....\n"
                << " ====== Lucky You =======\n"
                << " Your whole body tenses, you freeze yourself into the safety position you saw on the sign while you fall down the\n"
                << " perpendicular slope.  Your feet carve a path through the water ahead of you and before you know it you're at the bottom.\n"
                << " You make your way out of the bottom of the slide, trembling but happy to be alive...\n";
        }

        else { // They have bad luck (die)

            cout << " (Rolling dice to determine your luck)\n"
                << "              .....\n"
                << " ====== Bad Luck! =======\n"
                << " Your heart races and you lean up and try to try to grab the bar at the top of the slide but you miss!! You land face down\n"
                << " causing you to bounce away from the slide, creating a small gap that grows as the slide steepens.  You're now free falling\n"
                << " completely seperate from the slide which is no longer in arms reach, you start to scream in terror but nothing comes out...\n"
                << " the ground is getting closer... and closer...\n"
                << " You fell to your death...\n\n"
                << " ===================== GAME OVER ======================\n"
                << " ======================================================\n\n";

            isPlayerDead = true; // the player has died

            endOfWaterPark = false; // GAME OVER
        }
    }

