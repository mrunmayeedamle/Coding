function displayCapital() {
    let country = document.getElementById("country").value;
    let capitalText = document.getElementById("capital");

    let capitals = {
        "India": "New Delhi",
        "USA": "Washington, D.C.",
        "France": "Paris",
        "Japan": "Tokyo",
        "Brazil": "Brasília"
    };

    if (country) {
        capitalText.textContent = `Capital: ${capitals[country]}`;
    } else {
        capitalText.textContent = "";
    }
}