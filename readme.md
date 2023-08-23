# Folder Timeline and contents

## Check of  ChatGPT genereated code

In this folder, the code in these files has been ran through SonarQube and CppCheck to find vulnerabilities and fix them with the help of ChatGPT. The code used comes from the research paper "How Secure is Code Generated by ChatGPT?" by Rapha ël Khoury, Anderson R. Avila, Jacob Brunelle, Baba Mamadou Camara.

## Only Considerations

This folder contains the files that resulted from asking chatGPT to generate the safety considerations for a programs that match the description of the code generated for the research paper "How Secure is Code Generated by ChatGPT?" by Rapha ël Khoury, Anderson R. Avila, Jacob Brunelle, Baba Mamadou Camara.

## Generating code with considerations

This folder contains the files that resulted from asking chatGPT to generate code from the considerations of the previous task.

## Test vulnerability verifications

This folder contains the files that resulted from asking chatGPT to generate code from the safety considerations obtained in the previous task. The goal being to see if the quality of the code genereated is better than the original from which the considerations are derived.

## Respected considerations

Checking how many of the considerations are respected by the code returned by ChatGPT. Each file contains a check-list.

    [x] Respected
    [~] Uncertain
    [ ] Not respected

## Revisions

This folder contains clarifications and extra observations about the data obtained thus far.

### Unit tests

This folder contains the results of asking ChatGPT to generate for the code generated in the previous task.

## Only Considerations_ 

This is a revisit of the considerations initially given by ChatGPT to figure out how many considerations are missing when compared to the OWASP and SEI CERT.

## Vulnerability detection Cpp

In this folder, ChatGPT is used to detect the vulnerabilities in given C++ code. 

## False positive test

In this folder, ChatGPT is used to detect known vulnerabilities in code the comes from CVEFixes. 