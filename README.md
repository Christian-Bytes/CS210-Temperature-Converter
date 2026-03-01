## What the Program Does

- Shows a menu with three options:  
  1. Convert Celsius to Fahrenheit  
  2. Convert Fahrenheit to Celsius  
  3. Exit  

- Asks for a temperature number when you pick 1 or 2.  
- Does the conversion using the standard formulas.  
- Shows the result with two decimal places.  
- If you type letters or something invalid, it tells you and asks again.  
- Keeps running until you pick exit, then says goodbye.

It starts at 00:00:00 like the clocks project but way simpler—no rollover logic, no fancy borders, just clean menu and calculations.

## How to Run It

1. Compile: `g++ TempConverter.cpp -o tempconv`  
2. Run: `./tempconv` (on Mac/Linux) or `tempconv.exe` (Windows)  
3. Follow the menu—type 1, 2, or 3.



##Reflection: 

**Summarize the project and what problem it was solving.**  
This program is a simple temperature converter with a menu. It solves the problem of quickly switching between Celsius and Fahrenheit for anyone who needs it, like in science class, cooking, or weather stuff. It keeps running until exit and checks for bad input so it doesn't crash like some programs do when you type the wrong thing.

**What did you do particularly well?**  
I kept main() really small by moving the menu and conversions into separate functions. Input validation works good—if you type letters or nothing it just asks again instead of breaking. Comments explain each part clearly so anyone (or future me) can read it easily. The code is modular like we learned in class.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**  
I could add a loop inside each conversion so you can do multiple without going back to the menu every time which would save keystrokes. Or make a class for Temperature later if I want to add Kelvin or more features without changing everything. Input could handle really big numbers better (like scientific notation), but for normal use it's fine and secure enough since it's just console math. These would make it more user friendly and easier to expand.

**Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**  
The input validation with `cin.fail()` and `cin.ignore()` was tricky at first—I kept forgetting to clear the bad input and it would loop forever. I looked back at zyBooks examples from earlier modules, checked Stack Overflow for "cin fail clear", and tested small pieces until it worked. Now I have those sites bookmarked plus the C++ reference docs. Also, the fixed/setprecision for nice output took a couple tries to get right.

**What skills from this project will be particularly transferable to other projects or course work?**  
Using functions to organize code, safe user input handling, while loops for menus, and basic math with doubles. These show up everywhere—like the clocks project menu, future assignments with user choices, or even Python/Java stuff later. Validation especially will help stop crashes in bigger programs.

**How did you make this program maintainable, readable, and adaptable?**  
I used clear variable names like `celsius` and `fahrenheit` instead of short stuff like `x`. Each job (menu, convert C→F, convert F→C) has its own function so if I change one thing it doesn't mess up the rest. Comments explain what each part does and why (like why we use 9.0/5.0 instead of 9/5). If I want to add Kelvin conversion later, I can make a new function and add a menu option.
