document.addEventListener("DOMContentLoaded", function () {
    document.getElementById("signupForm").addEventListener("submit", function (event) {
        event.preventDefault(); 

        let firstName = document.getElementById("firstName").value.trim();
        let lastName = document.getElementById("lastName").value.trim();
        let mobile = document.getElementById("mobile").value.trim();
        let email = document.getElementById("email").value.trim();
        let password = document.getElementById("password").value.trim();
        let confirmPassword = document.getElementById("confirmPassword").value.trim();
        let address = document.getElementById("address").value.trim();

        if (firstName.length < 6 || !/^[A-Za-z]+$/.test(firstName)) {
            alert("First Name must be at least 6 characters and contain only alphabets.");
            return;
        }

        if (lastName === "") {
            alert("Last Name cannot be empty.");
            return;
        }

        if (!/^\d{10}$/.test(mobile)) {
            alert("Mobile Number must be exactly 10 digits.");
            return;
        }

        if (!/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/.test(email)) {
            alert("Enter a valid email (e.g., name@domain.com).");
            return;
        }

        if (password.length < 6) {
            alert("Password must be at least 6 characters long.");
            return;
        }

        if (password !== confirmPassword) {
            alert("Passwords do not match.");
            return;
        }

        if (address === "") {
            alert("Address cannot be empty.");
            return;
        }

        alert("Registration successful! Redirecting to login page...");
        window.location.href = "login.html"; 
    });
});