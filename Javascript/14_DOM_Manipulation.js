// Selecting Elements
const title = document.getElementById("title");
const items = document.querySelectorAll(".item");

// Modify Text
title.textContent = "Updated Heading";
title.innerHTML = "<em>Styled Heading</em>";

// Modify Styles
title.style.color = "blue";
title.style.fontSize = "28px";

// Create New Element
const newPara = document.createElement("p");
newPara.textContent = "This is a new paragraph.";
document.body.appendChild(newPara);

// Remove Element
// newPara.remove();

// Change Attribute
title.setAttribute("data-info", "example");

// DOM Navigation
console.log(title.parentElement);
console.log(title.children);

// Simple DOM Update Function
function changeColor() {
    title.style.color = "purple";
}
