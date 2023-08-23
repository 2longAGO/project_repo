## Abstract
Evaluating Copilot with CWE top 25 with a mix of CodeQL and manual labour.

### Criterion
* diversity of weakness
* diversity of prompt
* diversity of domain

## Copilot
Copilot is based on the OpenAI Codex family of models.
Codex models are gpt-3 fine tuned on the github code.
1084 programs for 54 scenarios across 18 different CWEs 
477 (44.00 %) were
determined to contain a CWE. Of the scenarios, 24 (44.44 %)
had a vulnerable top-scoring suggestion. Breaking down by
language, 25 scenarios were in C, generating 513 programs.
258 (50.29 %) were vulnerable. Of the scenarios, 13 (52.00 %)
had a top-scoring program vulnerable. 29 scenarios were in
Python, generating 571 programs total. 219 (38.35%) were vulnerable. Of the scenarios, 11 (37.93 %) had a vulnerable
top-scoring program.