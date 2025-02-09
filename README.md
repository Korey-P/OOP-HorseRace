# Horse Race - Object-Oriented Version

This is an object-oriented version of the horse race game. Instead of using just functions, we now have **two classes**:  
- `Horse` → Handles moving forward.  
- `Race` → Handles running the race, printing the track, and checking for winners.    

 Lines That Might Be Confusing
 `if (rand() % 2 == 1) { position++; }` (in Horse.cpp)
- This line is **flipping a virtual coin** (random number `0` or `1`).
- If it's `1` (heads), the horse **moves forward**.
- If it's `0` (tails), the horse **stays in place**.

 `srand(time(0));` (in Race.cpp)**
- Makes sure the random numbers are different each time you run the game.
- Without this, the horses would move the same way every time.

 `cin.get();` (in Race::start())**
- This pauses the game so the user can press Enter before continuing.
- If this wasn’t here, the game would run instantly without stopping.


