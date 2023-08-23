## CVE-2011-3211

**Bug:** 
        Shell command function is unsafe.
        Commit: fixed security bugs with unescaped input to the shell.

### Bugged 
    The vulnerability is mentioned as well as the exact solution used to resolve it. That solution was giving popen a list of strings instead of a formatted string.

### Fixed
    ChatGPT still has an issue with the use of popen as it can be replaced with the cryptography library.

## CVE-2011-4312

**Bug:** 
        The comment text needs to be sanitized with the escape function.

        Commit: Due to the way that comments were loaded in, it was possible to
        terminate a script and inject a new one while loading the diff viewer.
        This isn't believed to have been a problem in the wild, but is certainly
        an important one to fix.

### Bugged 
    The vulnerability is not found or mentioned, but other unrelated and generic ones do.

### Fixed
    The vulnerability is not found or mentioned, but other unrelated and generic ones do.

## CVE-2013-4563

**Bug:** 
        icount has no value value.
        Commit: fix headroom calculation in udp6_ufo_fragment.

### Bugged 
    No vulnerabilities were found and a bunch of unrelated concerns about the the structs in the function.

### Fixed
    Vulnerabilities were found for the fixed version, but they are very generic.

## CVE-2013-10013

**Bug:** 
        The way the query is processed allows for sql injection
        Commit: Prevent SQL-injection

### Bugged 
    The main vulnerability was found and a code snippet rectifying the issue was provided.

### Fixed
    The vulnerability mentioned in the feedback for the bugged version appears again, but is presented as more of something to be cautious of then a definitive problem with the provided code snippet unlike in the reply with the bugged version.

### Comparison

#### Bugged 
SQL Injection vulnerability:
The code uses a dynamic query constructed from the query variable without proper validation or sanitization. This leaves the code vulnerable to SQL injection attacks. Instead of directly using the query variable, it should use prepared statements and bind the variables securely.

#### Fixed 
SQL Injection vulnerability: The code appears to use parameterized queries, which is a good practice to prevent SQL injection. However, it's crucial to validate and sanitize the input data (args) before using it in the SQL query to ensure no malicious SQL code can be injected.

## CVE-2014-8130

**Bug:** 
        Lack of check for the desired allocation size given

### Bugged 
    The vulnerability isn't found, but it does bring up worthwhile considerations.
### Fixed
    Input validation is mentioned now that there is code to check it. It brings up the lack of check for negative integers.

## CVE-2014-125060 

**Bug:** 
        Lack of validation of the sessionIdString received
        Commit: Fixed Login Exploit

### Bugged 
    The vulnerability is vaguely alluded to.

### Fixed
    The same comment is given even after the fix as chatGPT probably just sees this function as an http callback function and nothing else.

As usual the length of the code snippet seems to affect it's ability to be precise in it's response (182 lines of code werw given to chatGPT)

## CVE-2015-4003

**Bug:** 
        Possible division by zero
        Commit: ozwpan: divide-by-zero leading to panic
        A network supplied parameter was not checked before division, leading to
        a divide-by-zero. 

### Bugged 
    The vulnerability is not found or mentioned, but other unrelated and generic ones do.

### Fixed
    It doesn't appear, but again other unrelated and generic ones do.

## CVE-2017-15951

**Bug:** 
        Possible division by zero
        Commit: ozwpan: divide-by-zero leading to panic
        A network supplied parameter was not checked before division, leading to
        a divide-by-zero. 

### Bugged
    The vulnerability is not found or mentioned, but other unrelated and generic ones do.

### Fixed
    The vulnerability is not found or mentioned, but other unrelated and generic ones do. It actually returned more possible vulnerabilities than the bugged version.

## CVE-2018-8788

**Bug:** 
        Lack of check on the parameters of the function
        Commit: ozwpan: divide-by-zero leading to panic
        A network supplied parameter was not checked before division, leading to
        a divide-by-zero. 

### Bugged 
    Input validation is mentioned with nothing specific to the given snippet.

### Fixed
    Input validation is mentioned about the different pointers contained in the conntext struct that aren't checked.
    The code only check if the struct isn't null.

## CVE-2020-28196

**Bug:** 
        
        Commit: Add recursion limit for ASN.1 indefinite lengths

### Bugged 
    Recursion Safety is mentioned. 

### Fixed
    The vulnerability isn't brought up again. This is interesting as the code didn't change the fix to the recursion issue is actually found in the get_tag function which is used by thes function checked.

## Comment 
    Even when the get_tag function no extra insights are uncovered and the Recursion Safety cosiderations actually dissapears 