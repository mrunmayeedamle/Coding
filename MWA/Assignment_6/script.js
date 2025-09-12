function numberToWords(num) {
    const ones = [
        '', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine',
        'Ten', 'Eleven', 'Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen',
        'Seventeen', 'Eighteen', 'Nineteen'
    ];
    const tens = [
        '', '', 'Twenty', 'Thirty', 'Forty', 'Fifty', 'Sixty', 'Seventy', 'Eighty', 'Ninety'
    ];

    if (num === 0) return "Zero";

    let words = '';
    if (num < 20) {
        words = ones[num];
    } else if (num < 100) {
        words = tens[Math.floor(num / 10)] + (num % 10 ? ' ' + ones[num % 10] : '');
    } else {
        words = ones[Math.floor(num / 100)] + ' Hundred' + (num % 100 ? ' and ' + numberToWords(num % 100) : '');
    }

    return words;
}

// Validate input and handle form submission
document.getElementById("numberForm").addEventListener("submit", function (e) {
    e.preventDefault();

    const numberInput = document.getElementById("numberInput").value;
    const output = document.getElementById("output");

    // Check if the input is a valid number and within the range 0-999
    const number = parseInt(numberInput);

    if (isNaN(number) || number < 0 || number > 999) {
        output.textContent = "Please enter a valid number between 0 and 999.";
    } else {
        output.textContent = numberToWords(number);
    }
});