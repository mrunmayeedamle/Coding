function displayDate() {
    document.getElementById("dateBox").value = new Date().toLocaleDateString();
}

function calculateFactorial() {
    let n = parseInt(prompt("Enter a number to find its factorial:"));
    if (isNaN(n) || n < 0) {
        alert("Please enter a valid non-negative number.");
        return;
    }
    
    let fact = 1;
    for (let i = 1; i <= n; i++) {
        fact *= i;
    }

    alert(`Factorial of ${n} is: ${fact}`);
}

function generateMultiplicationTable() {
    let n = parseInt(prompt("Enter a number to generate its multiplication table:"));
    if (isNaN(n)) {
        alert("Please enter a valid number.");
        return;
    }

    let table = `Multiplication Table of ${n}:\n`;
    for (let i = 1; i <= 10; i++) {
        table += `${n} x ${i} = ${n * i}\n`;
    }

    alert(table);
}

function calculateSum() {
    let sum = 0;
    let num = parseInt(prompt("Enter a number:"));
    
    if (isNaN(num)) {
        alert("Please enter a valid number.");
        return;
    }

    sum += num;

    while (confirm("Do you want to add another number?")) {
        num = parseInt(prompt("Enter another number:"));
        
        if (isNaN(num)) {
            alert("Please enter a valid number.");
            return;
        }

        sum += num;
    }

    alert(`The total sum of entered numbers is: ${sum}`);
}