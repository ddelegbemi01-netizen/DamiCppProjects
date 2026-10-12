# C++ Dungeon - Learning Notes

## What I've done so far

I'm building a small RPG game in C++ to improve my understanding of classes, objects and object-oriented programming.

### 1. Creating the Player

I created a Player class with two variables: health and attackPower.

I made both variables private so other parts of the program can't change them directly. Instead, I use functions to access the player's stats and change their health.

This is called encapsulation.

### 2. Setting the starting stats

I used a constructor to give the player 100 health and 10 attack power when they are created.

The constructor runs when I create a new player. I used an initializer list to set the starting values when the object is created.

### 3. Getting the player's stats

I created two getter functions: getHealth() and getAttackPower().

These let me read the player's private variables without accessing them directly.

I also added const to the end of both functions because they only read information and don't change the player object.

### 4. Taking damage

### Code snippet

This is the function I wrote in `Player.cpp` to handle damage:

```cpp
void Player::takeDamage(int damage)
{
    health -= damage;

    if (health < 0)
    {
        health = 0;
    }
}
```

The function subtracts the damage from the player's current health. The `if` statement checks whether the health has dropped below zero and sets it to zero if it has.

For example, if the player has 75 health and takes 150 damage, their health becomes zero instead of a negative number.
I created a takeDamage() function to reduce the player's health when they take damage.

The function subtracts the damage from the player's current health. I added an if statement to stop the health from dropping below zero.

### 5. Testing the code

I tested the function with two different amounts of damage.

Test 1:
- Starting health: 100
- Damage: 25
- Result: 75 health

Test 2:
- Starting health: 75
- Damage: 150
- Result: 0 health

Both tests worked as expected.

### 6. What I've learned

So far, I've learned how to create a class, use a constructor, keep variables private and use getter functions to read their values.

I've also learned how to make a function change an object's state and test whether it behaves correctly.

I'm starting to understand why it's useful to keep related data and functions inside classes instead of putting everything in main().

### 7. What's next?

I still need to handle negative damage. At the moment, passing -20 to takeDamage() would increase the player's health instead of reducing it.

My next step is to fix that, then create an enemy class and start building the combat system.

I'm learning C++ by building the game one feature at a time, testing what I write and understanding why it works.
