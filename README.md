# Hello-C
<h4>Summary :</h4>
This is my hands-on practice and understanding of the concepts of the C programming language.

<h4>Languages Used</h4>
<table>
  <tr>
    <td><img alt="medium" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"></td>
  </tr>
</table>

<h4>Integrated Development Environment:</h4>
<table>
  <tr>
<td><img alt="medium" src="https://img.shields.io/badge/Emacs-%237F5AB6.svg?&style=for-the-badge&logo=gnu-emacs&logoColor=white"></td>
  </tr>
</table>

<h4>Files: </h4>

* [arrays.c - A short summary of arrays and useful commands to access files.](./arrays.c)
* [avg_fix.c - A program to calculate the average based on user input.](./avg_fix.c)
* [computingfactorial.c - A program to calculate the factorial of numbers between 1 and 10.](./computingfactorial.c)
* [expression.c - A program to illustrate the various operators in C.](./expression.c)
* [factorial.c - A program to calculate the factorial of numbers between 1 and 5](./factorial.c)
* [hello.c - Hello World!](./hello.c)
* [io_demo.c - A program to display formatted output based on user input](./io_demo.c)
* [simplesort.c - A program to display sorted numbers based on user input.](./simplesort.c)
* [logicaloperators.c - A program to display operators that are used to perform logical operations on given expressions.](./logicaloperators.c)
* [boolean.c - Interesting conditions using boolean operators](./boolean.c)
* [specialoperators.c - Some of the special operators that the C programming language offers.](./specialoperators.c)
* [bitwise.c - Bit wise operations are performed and output is displayed in decimal format.](./bitwise.c)
* [ternaryoperator.c - Conditional operators return one value if condition is true and returns another value is condition is false.](./ternaryoperator.c)

<br>

<h4>Increment & Decrement Operators in C: </h4>
<br>

| Operator                          | Description                                                        | Result    |
| ----------------------------------| -------------------------------------------------------------------| ----------|
| `Pre increment operator (++i)`    | `value of i is incremented before assigning it to the variable i`  | 1 2 3 4   |
| `Post increment operator (i++)`   | `value of i is incremented after assigning it to the variable i);` | 1 2 3 4 5 |
| `Pre decrement operator (–i)`     | `value of i is decremented before assigning it to the variable i`  | 9 8 7 6   |
| `Post decrement operator (i–)`    | `value of i is decremented after assigning it to variable i`       | 9 8 7 6 5 |

<br>

<h4>Assignment Operators: </h4>
<br>

| Operator | Description                       | Example      |
| ---------|-----------------------------------| -------------| 
| `=`      | `10 is assigned to variable sum`  | `sum = 10;`  |
| `+=`     | `This is same as sum = sum + 10`  | `sum += 10;` |
| `-=`     | `This is same as sum = sum – 10`  | `sum -= 10;` |
| `*=`     | `This is same as sum = sum * 10`  | `sum *= 10;` |
| `/=`     | `This is same as sum = sum / 10`  | `sum /= 10;` |
| `%=`     | `This is same as sum = sum % 10`  | `sum %= 10`  |
| `&=`     | `This is same as sum = sum & 10`  | `sum&=10;`   |
| `^=`     | `This is same as sum = sum ^ 10`  | `sum ^= 10;` |

<br>

<h4>Important :</h4>

* **C takes portability seriously and actually bothers to tell you what values and ranges are guaranteed to be safe.**
* **The bitwise operators encourage you to think about the number of bits in a variable too, because they give direct access to the bits, 
which you manipulate one by one or in groups.**
* **A character variable will probably take less storage than an int and will most likely be used for character manipulation.**
* **It's still an integer type though, and can be used for arithmetic**

<br>
<h4>C – Bit wise Operators: </h4>
<br>

<img src="https://github.com/iamnotnato/Hello-C/blob/master/Truth-table-2.png" width="600">
<br>

*Consider x=40 and y=80. Binary form of these values are given below.*

<br> 

 *x = 00101000*
 *y=  01010000*

<br>

*All bit wise operations for x and y are given below.*
 * x&y = 00000000 (binary) = 0 (decimal)
 * x|y = 01111000 (binary) = 120 (decimal)
 * ~x = 11111111111111111111111111 11111111111111111111111111111111010111 = -41 (decimal)
 * x^y = 01111000 (binary) = 120 (decimal)
 * x << 1 = 01010000 (binary) = 80 (decimal)
 * x >> 1 = 00010100 (binary) = 20 (decimal)

<br>

*NOTE:*
 * Bit wise NOT : Value of 40 in binary is 00000000000000000000000000000000 00000000000000000010100000000000. 
 * So, all 0’s are converted into 1’s in bit wise NOT operation.
 
 * Bit wise left shift and right shift : In left shift operation “x << 1 “, 1 means that the bits will be left shifted by one place. 
 * If we use it as “x << 2 “,  then, it means that the bits will be left shifted by 2 places.
