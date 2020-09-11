//This is where the preprocessor directive is coded
//preprocessor directive --- They are invoked by the compiler to process some programs before compilation

#include <iostream>
#include <ctime>
    //This is where our function is written
    //our function over here is used to  play our game and will not written data
    //void --- completely empty. "void spaces surround the tanks" 

    void playerintroduction(int difficulty)
    {
        
    std::cout << std::endl; 
    std::cout << "Solomon: Hello agent 47 my name is solomon and I am the director of the FBI";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: You have a task, which is to hack into the servers of Xiang lee";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: Xiang lee's servers have some contacts and other info of the world most wanted men and women";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: We have entrusted you with this special task as you have capabilities to hack like no one else and so please do it for us";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Agent 47: Okay Solomon, I will do it";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Agent 47: I will do it! I will as they were the ones who killed my family and my wife";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: We knew we could entrust you with this daunting task";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Bob: Does anyone where the coke is ?";
    std::cout << std::endl; 
    std::cout << std::endl;
    std::cout << "Solomon: Shut up bob, can't you see something dramatic is happening here";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Writer: Why did I even write this story :(";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Computer: Why did I compile this :(...";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Agent 47: Uhhhh so can I leave or should I stay...";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: Yes you can, go and show the world who you are";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Bob: Ah where is the chips ?";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Solomon: Shut upppppp!!!!!!!!!!";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Agent 47: I better leave now";
    std::cout << std::endl;
    std::cout << "Instructions: You need to enter the right codes to continue";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You are in Level "<< difficulty << " of server";
    std::cout << std::endl;
    

    }

    bool Playgame(int difficulty)
    { 

    playerintroduction(difficulty);

    //This is where the integer and values are coded - 53-64
    //Declaration statements ---  when a statement is being declared by something Ex: a = 4;

    const int CodeA = rand() % difficulty + difficulty;
    const int CodeB = rand() % difficulty + difficulty;
    const int CodeC = rand() % difficulty + difficulty;

    const int Codesum = CodeA + CodeB + CodeC;
    const int Codeproduct = CodeA * CodeB * CodeC;

    //Expression statement --- when a statement is being printed or is followed by a semicolon - 80-83
    //Instructions for the game --- triplex ex: press w to move forward

   std::cout << std::endl;
   std::cout << "+ There are three numbers in the code..." << std::endl;
   std::cout << "+ The codes add up to: " << Codesum << std::endl;
   std::cout << "+ The codes multiply to give: "<< Codeproduct << std::endl;

   // This is the ine of code where the users input will be saved
   // Std::cin >> example --- is the code which will save our 
   // code in the variable int example; , The std::cout <<
   // shows the number entered by the player ex:You have entered

   int GuessA,GuessB,GuessC;
   std::cin >> GuessA;
   std::cin >> GuessB;
   std::cin >> GuessC;

   int GuessSum = GuessA + GuessB + GuessC;
   int GuessProduct = GuessA * GuessB * GuessC;

   if (GuessSum == Codesum && GuessProduct == Codeproduct)
   {
       std::cout << "\nYou have succesfully hacked the server and have got a file, keep going agent";
       return true;
   }
   else
   {
       std::cout << "\nYou have entered the wrong code, carefull agent.try again!!!";
       return false;
   }

    }


    //This is where the main function is coded - 10
    //main function ---  The execution of all C++ programs begins with the main function,
    // regardless of where the function is actually located within the code.

    

int main()
{
    srand(time(NULL));
    int leveldifficulty = 1;
    
    int const maxdifficulty = 10;

    while(leveldifficulty <= maxdifficulty)
{
    bool bLevelcomplete = Playgame(leveldifficulty);
    std::cin.clear(); //clears any errors
    std::cin.ignore(); //discards buffers

    if (bLevelcomplete)
    {
        //increase level difficulty
        ++leveldifficulty; 
    }
    
} 

   //This is where the return 0 is coded and is also part of the main function
   //return 0 --- The main function is generally supposed to return a value and after it returns something it finishes execution. 
   //0 means success and returning a non-zero number means failure. 


    std::cout << std::endl;
    std::cout << "\n***You have got all the files agent, well done. Now get out of there***\n";
    return 0;
}
