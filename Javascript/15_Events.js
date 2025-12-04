// Click Event
const btn = document.getElementById("myBtn");
btn.addEventListener("click", () => {
    alert("Button was clicked!");
});

// Mouseover Event
const box = document.getElementById("box");
box.addEventListener("mouseover", () => {
    box.style.backgroundColor = "lightgreen";
});

// Keypress Event
document.addEventListener("keydown", (e) => {
    console.log("Key pressed:", e.key);
});

// Input Event
const nameInput = document.getElementById("name");
nameInput.addEventListener("input", () => {
    console.log("Current input:", nameInput.value);
});
