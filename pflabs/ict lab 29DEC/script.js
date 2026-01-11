

document.write("Hello, JavaScript!");
// var, let, const
let name = "chand", age = 19;
console.log("My name is " + name + " and I am " + age + " years old.");
let a = 10;
let b = 5;
console.log(a + b);
console.log(a - b);
console.log(a > 5 && b < 10);
// operators
let x = 15;
x = (100 + 50) * 2;
console.log(x);
// control structures
let marks = 75;
if (marks > 50) {
    console.log("Pass");
} else {
    console.log("Fail");
}
// loops
for (let i = 1; i <=5; i++) {
    console.log(i);
}
// functions
function add(a,b) {
    return a + b;
}
console.log(add(3,4));
// arrays
let arr = [10, 20, 30];
for (let i = 0; i < arr.lenght; i++) {
    console.log(arr[i]);
}