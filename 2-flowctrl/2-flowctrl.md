# Loops
1. Loop types
1-1. While loop
1-2. For loop
1-3. Do ... while loop
2. Nesting of loops
3. Infinite loop
----------------------------
## 1. Loop types
### 1-1. While loop
The syntax of **while** loop:
"""C++
while ( condition )
{
	statement(s)
}
"""
`While loop` checks whether the **condition** written in `()` is true or not. 
- If the condition is ***true***, the statements written in the body of the while loop i.e., inside the braces `{}` are executed.
- Then again the condition is checked, and if found true, again the statements in the body of the while loop are executed.
- This process continues until the condition becomes `false`.


### 1-2. For loop
Another type of loop is **for** loop.
"""C++
for(initialization; condition; propagation)
{
    statement(s)
}
"""

Example:
"""C++
#include <iostream>
int main(){
	using namespace std;
	int n;
	for( n = 1; n <= 10; n++ ){
		cout << n << endl;
	}
	return 0;
}
"""
`n = 1` - This step is used to **initialize** a **variable** and is executed *first and only once*. Hence, 'n' is assigned a value **1**.

`n <= 10`
  - This is a **condition** which is evaluated. If the condition is *true*, the statements written in the body of the loop are executed.
  - If it is false, the statement just after the for loop is executed.
  - This is similar to the condition we used in 'while' loop which was being checked again and again.

`n++` - This is executed after the code in the body of the for loop has been executed. In this example, the value of 'n' increases by 1 every time the code in the body of for loop executes
