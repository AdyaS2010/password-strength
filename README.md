# Password Validator

## Description
This project is a password validator written in C. It checks if a password contains at least one lowercase letter, one uppercase letter, one number, and one symbol. Additionally, the program uses the *ctype library* to iterate through the password string and validate its contents! 

## Features
- Validate a password to ensure it contains:
  - At least one lowercase letter
  - At least one uppercase letter
  - At least one number
  - At least one symbol
- Provide feedback on whether the password is valid or not

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/password-strength.git
   ```
2. Navigate to the project directory:
   ```bash
   cd password
   ```
3. Compile the code:
   ```bash
   make password
   ```

## Usage
1. Run the application:
   ```bash
   ./password
   ```
2. Enter your password when prompted.
3. The program will check the password and display whether it is valid or not.

## Example
```bash
$ ./password
Enter your password: P@ssw0rd
Your password is valid!
```

## Contributing
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request.

## License
This project is not licensed under any License currently.

