# TEST PLAN
## High Level Test Plan :

| ID | Description | Expected Input | Expected Output | Actual Output | Type of Test |
| ---- | ------------------- | ---- | --- | --- | ----- |
| HR01 | Player should be able to select the cities | User's choice a character | SUCCESS | SUCCESS | Scenario Based |
| HR02 | Player should be able to select the bombs | User's choice a character | SUCCESS | SUCCESS | Scenario Based |
| HR03 | Player should be able to match the bombs | User's choice a character | SUCCESS | SUCCESS | Technical Based |

## Low Level Test Plan :

| ID | Description |	Expected Input | Expected Output | Actual Output | Type of Test |
| ---- | ------------------- | ---- | --- | --- | ----- |
| LR01 | Player should have a choice to select bombs | User's choice a character | SUCCESS | SUCCESS | Technical Based |
| LR02 | Data should not be lost in case of faliure | Users Choice | SUCCESS | SUCCESS | Scenario Based |

## Usage of Unit Testing-Frameworks

* Unity Test Framework (UTF) enables Unity users to test their code in both Edit Mode and Play Mode, and also on target platforms such as Standalone, Android, iOS, etc.
* UTF uses a Unity integration of NUnit library, which is an open-source unit testing library for .Net languages.
* It is possible to extend the Unity Test Framework (UTF) in many ways, for custom workflows for your projects and for other packages to build on top of UTF.

## Best Practices

  - [x] Checked all the possibilities of output
  - [x] Mentioned all the inputs for better understanding
  - [x] Presented in tabular form for easy understanding
  - [x] Both High level and low level Test plans are shown
