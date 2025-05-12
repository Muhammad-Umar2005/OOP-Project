  Project Report:

Project Title:

Tic-Tac-Toe Game Implementation.

Group Members:

Name: Faique Mehmood

Student ID: 24K-0736

Name: Muhammad Umar Bin Zahid

Student Id: 24K-0989

Name: Ali Muhammad

Student Id: 24K-0753

Submission Date:

\[Date of Submission]

 1. Executive Summary:

 Overview:

This project aims to implement two versions of the classic Tic-Tac-Toe game in C++: one where two players compete against each other, and another where person competes with the computer. The project explores basic game development concepts, user input handling, graphical user interface and random number generation for the computer's moves. The goal was to create an engaging and interactive game that adheres to the traditional rules of Tic-Tac-Toe while providing a user-friendly experience.

Key Findings:

\* Successfully implemented a functional Tic-Tac-Toe game for both single-player (against the         

   Computer) and two player mode. 

\* Demonstrated the use of arrays, loops, and conditional statements in C++.

\* Implemented basic game logic to check for wins, draws, and valid moves.

\* To enhance the user experience, we plan to implement a graphical user interface using a library such as SFML. This will replace the current text-based interface with a more visually engaging and interactive design.

\* Ensured the game handles user inputs correctly and provides clear feedback.

2\. Introduction:

 Background:

Tic-Tac-Toe, also known as Noughts and Crosses, is a timeless two-player game where players take turns marking spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game. This project was undertaken to gain hands-on experience in game development using C++, a powerful and versatile programming language. By implementing this game, we aimed to understand fundamental programming concepts such as user input handling, game logic, and random number generation.

Project Objectives:

\* Develop a Tic-Tac-Toe game in C++ that can be played by one player against the computer.

\* Develop a Tic-Tac-Toe game in C++ that can be played by two players against each other.

\* Ensure the game handles user inputs correctly and checks for valid moves.

\* Display the game board and results clearly to the users.

\* Implement a simple AI for the computer player in the single-player mode.

3\. Project Description:

Scope:

The project includes:

\* A 3x3 game board displayed using a 5x5 character array for visual representation.

\* Functions to handle user inputs, check for wins, and display the game board.

\* Random move generation for the computer in the single-player mode.

\* Graphical user interface (GUI) implementation.

  Technical Overview:

\> \*\*Programming Language\*\*: C++.

\> \*\*Compiler\*\*: g++ (or any standard C++ compiler).

\> \*\*Development Environment\*\*: Any standard text editor or IDE (e.g., Visual Studio Code)

4\. Methodology:

Approach

\> \*\*Weekly Planning\*\*: Meetings to discuss progress and address any issues.

\> \*\*Division of Tasks\*\*: Each group member was assigned specific tasks such as implementing game logic, handling user inputs, and displaying the game board.

Roles and Responsibilities:

\*Faique Mehmood\* : Implemented the game logic, handled user inputs.

\*Muhammad Umar\* : Implemented the Graphical User Interface(GUI), and wrote Project report and Project proposal.

\*Ali Muhammad\* : Debugging code and fix the errors.

5\. Project Implementation:

Design and Structure:

The game consists of:

\- A 3x3 grid represented by a 2D array (\`Gboard\`).

\- A 5x5 grid for visual representation (\`board\`).

\- Functions to fill the board, display it, handle user inputs, and check for wins.

 Functionalities Developed:

\> \*\*Initialization\*\*: Sets up the game board.

\> \*\*Display\*\*: Prints the current state of the game board.

\> \*\*Input Handling\*\*: Takes user inputs for player moves and validates them.

\> \*\*Win Check\*\*: Checks for winning conditions after each move.

\> \*\*Computer Move\*\*: Generates random moves for the computer in single-player mode.

\> \*\*Graphical User Interface (GUI)\*\*: Implements a visual interface using a library like SFMl. This enhances the user experience by providing a more interactive and visually appealing game environment.

Challenges Faced:

Ensuring valid user inputs and handling edge cases.

 Implementing the random move generation for the computer.

Debugging and ensuring the game logic works correctly.

Transitioning from a text-based interface to a graphical one introduced new challenges, such as handling graphical elements, user interactions, and ensuring the GUI accurately reflects the game state.

 How We Overcame Challenges:

\*\*Validating User Inputs\*\*: We implemented a loop to continuously prompt the user for input until a valid move was entered. This ensured that the game would not proceed with an invalid move.

\*\*Random Move Generation\*\*: We used the \`rand()\` function from the C++ standard library to generate random moves for the computer. We seeded the random number generator with the current time to ensure different sequences of moves in each game.

\*\*Debugging\*\*: We used print statements and step-by-step debugging to identify and fix issues in the game logic. This helped us ensure that the game correctly checked for wins and draws.

 Integrating a Graphical User Interface (GUI): To address the challenges of implementing a GUI, we:

Chose a Suitable Library: We selected a well-documented library (e.g., SFML, SDL) that provided the necessary tools for creating a graphical interface.

Learned the Basics: We spent time learning the basics of the chosen library, including how to create windows, handle events, and draw graphics.

Testing and Iteration: We extensively tested the GUI to ensure it was user-friendly and bug-free. We iterated on the design based on feedback and identified areas for improvement.

6\. Results:

Project Outcomes:

Both single-player and two-player versions of the game were successfully implemented.

The game correctly handles user inputs, checks for valid moves, and displays the results.

The computer player in the single-player mode makes random moves, providing a basic level of challenge.

Implemented a GUI using SFML, which adds a visually appealing and interactive dimension to the game.

Screenshots and Illustrations:

\*\*Game Board Display\*\*:

\*\*Winning Condition\*\*:

Testing and Validation:

\*\*Testing\*\*: We tested the game with various inputs to ensure all functionalities work as expected. We played multiple games in both single-player and two-player modes to verify that the game logic was correct.

\*\*Validation\*\*: We validated the win conditions and draw scenarios by manually checking the game board after each move. We also ensured that the game correctly handled invalid inputs and prompted the user to re-enter their move.

\*\*GUI Testing\*\*: We conducted extensive testing of the graphical user interface (GUI) to ensure it was user-friendly and responsive.

 7. Conclusion:

 Summary of Findings:

The project successfully implemented a Tic-Tac-Toe game in C++ with both single-player and two-player modes. The game handles user inputs, checks for valid moves, and displays the game board and results accurately. The computer player in the single-player mode provides a basic level of challenge by making random moves.

Final Remarks:

\*\*Lessons Learned\*\*: 

This project provided valuable experience in implementing game logic and handling user inputs. We learned how to use arrays, loops, and conditional statements to create a functional game.

\*\*Future Improvements\*\*: 

Future improvements could include adding a more sophisticated AI for the computer player. We could also explore adding additional features such as a scoring system or the ability to play multiple rounds.
