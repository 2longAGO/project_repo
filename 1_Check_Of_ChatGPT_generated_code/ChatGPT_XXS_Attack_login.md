# Integrity Warning Resolved.

### You
Could you fix this error message "Make sure not using integrity feature is safe here." from SonarQube?
```php
<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>Login Form</title>
  <script src="https://cdn.jsdelivr.net/npm/dompurify@2.2.7/dist/purify.min.js"></script>
</head>
<body>
  <h1>Login Form</h1>
  <form method="POST" action="login.php">
    <label for="username">Username:</label>
    <input type="text" id="username" name="username" required>
    <br>
    <label for="password">Password:</label>
    <input type="password" id="password" name="password" required>
    <br>
    <button type="submit">Login</button>
  </form>
  <script>
    // Sanitize user input using DOMPurify
    const username = document.getElementById('username');
    username.value = DOMPurify.sanitize(username.value);
    const password = document.getElementById('password');
    password.value = DOMPurify.sanitize(password.value);
  </script>
</body>
</html>
```

### ChatGPT
The error message "Make sure not using integrity feature is safe here" from SonarQube suggests that there is a potential security concern related to the integrity feature of a script loaded from an external source. In your code, you are using the DOMPurify library to sanitize user input, but SonarQube is warning you about the integrity feature.

The integrity attribute is used to ensure that the resource (in this case, the DOMPurify library) has not been tampered with or modified during its delivery. It verifies the integrity of the resource by comparing its cryptographic hash against the provided hash value.

To address this error message, you have a few options:

1. Keep the integrity attribute: If you want to ensure the integrity of the DOMPurify library, you can keep the integrity attribute in the script tag. However, you need to make sure that you obtain the correct integrity hash for the version of the library you are using. You can usually find the integrity value from the library's official website or documentation.
2. Remove the integrity attribute: If you are confident in the source of the library and you have obtained it securely, you can remove the integrity attribute from the script tag. This will resolve the SonarQube warning. However, note that removing the integrity check increases the risk of loading a modified or compromised script if the source is somehow compromised.

Here's an example of the code with the integrity attribute removed:

```php
<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>Login Form</title>
  <script src="https://cdn.jsdelivr.net/npm/dompurify@2.2.7/dist/purify.min.js"></script>
</head>
<body>
  <h1>Login Form</h1>
  <form method="POST" action="login.php">
    <label for="username">Username:</label>
    <input type="text" id="username" name="username" required>
    <br>
    <label for="password">Password:</label>
    <input type="password" id="password" name="password" required>
    <br>
    <button type="submit">Login</button>
  </form>
  <script>
    // Sanitize user input using DOMPurify
    const username = document.getElementById('username');
    username.value = DOMPurify.sanitize(username.value);
    const password = document.getElementById('password');
    password.value = DOMPurify.sanitize(password.value);
  </script>
</body>
</html>

```

Remember to assess the security risks and consider the source of the library before deciding whether to keep or remove the integrity attribute.

