# C++ Login Form

This is a simple C++ program that implements a basic login form with sign-up and password recovery functionality.

## Features

1. **Login**: Allows existing users to log in using their username, email, and password.
2. **Sign-up**: Enables new users to create an account by providing a username, email, and password.
3. **Forgot Password**: Helps users recover their password by providing their username and email.

## How to Use

1. Compile the C++ code using a C++ compiler.
2. Run the compiled executable.
3. Choose from the following options:
   - 1: Login
   - 2: Sign-up
   - 3: Forgot Password
   - 4: Exit

## Implementation Details

- The program uses a class named `temp` to encapsulate the login form functionality.
- User data is stored in a file named `loginData.txt` in the format: `username*email*password`.
- File I/O operations are used to read and write user data.

## Functions

1. `signUP()`: Handles new user registration.
2. `login()`: Manages the user login process.
3. `forgot()`: Helps users recover forgotten passwords.
