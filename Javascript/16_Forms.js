// Form Handling
const form = document.getElementById("myForm");

form.addEventListener("submit", (e) => {
    e.preventDefault(); // Stop page refresh

    const username = document.getElementById("username").value;
    const email = document.getElementById("email").value;

    // Basic Validation
    if (username === "" || email === "") {
        alert("All fields are required!");
        return;
    }

    // Simple email check
    if (!email.includes("@")) {
        alert("Enter a valid email!");
        return;
    }

    alert(`Form Submitted!\nUsername: ${username}\nEmail: ${email}`);
});
