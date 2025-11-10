# 🎨 CSS Tags & Short Notes

A concise and structured summary of CSS syntax, selectors, properties, and layout techniques — perfect for revision or quick reference.

---

## 🧠 1. CSS Syntax
```css
selector {
  property: value;
}
```
- **selector** → selects HTML element(s)  
- **property** → defines the style (e.g., color, font-size)  
- **value** → sets how that property behaves  

Example:
```css
p {
  color: blue;
  font-size: 16px;
}
```

---

## 🏷️ 2. CSS Selectors

| Selector | Example | Description |
|-----------|----------|-------------|
| **Element Selector** | `p {}` | Targets all `<p>` tags |
| **ID Selector** | `#title {}` | Targets element with `id="title"` |
| **Class Selector** | `.btn {}` | Targets elements with `class="btn"` |
| **Universal Selector** | `* {}` | Targets all elements |
| **Group Selector** | `h1, h2, h3 {}` | Targets multiple elements |
| **Descendant Selector** | `div p {}` | Targets `<p>` inside `<div>` |
| **Child Selector** | `div > p {}` | Targets immediate child `<p>` |
| **Adjacent Sibling** | `h1 + p {}` | Targets `<p>` immediately after `<h1>` |
| **Attribute Selector** | `input[type="text"] {}` | Targets based on attribute |
| **Pseudo-class** | `a:hover {}` | Style during a state (hover, focus, etc.) |
| **Pseudo-element** | `p::first-letter {}` | Targets part of an element |

---

## 🎨 3. Text Formatting

| Property | Description | Example |
|-----------|--------------|----------|
| `color` | Text color | `color: red;` |
| `font-size` | Size of text | `font-size: 20px;` |
| `font-family` | Font style | `font-family: Arial, sans-serif;` |
| `font-weight` | Boldness | `font-weight: bold;` |
| `text-align` | Alignment | `text-align: center;` |
| `text-decoration` | Underline, none, etc. | `text-decoration: underline;` |
| `text-transform` | Uppercase, lowercase | `text-transform: uppercase;` |
| `letter-spacing` | Space between letters | `letter-spacing: 2px;` |
| `line-height` | Space between lines | `line-height: 1.5;` |

---

## 📦 4. Box Model Properties

| Property | Description | Example |
|-----------|--------------|----------|
| `width`, `height` | Element size | `width: 200px;` |
| `padding` | Space inside border | `padding: 10px;` |
| `margin` | Space outside border | `margin: 20px;` |
| `border` | Line around element | `border: 2px solid black;` |
| `box-sizing` | Includes padding & border | `box-sizing: border-box;` |

---

## 🧭 5. Backgrounds

| Property | Description | Example |
|-----------|--------------|----------|
| `background-color` | Background color | `background-color: lightblue;` |
| `background-image` | Set image | `background-image: url('img.jpg');` |
| `background-size` | Cover, contain | `background-size: cover;` |
| `background-repeat` | Repeat or not | `background-repeat: no-repeat;` |
| `background-position` | Position of image | `background-position: center;` |

---

## 📐 6. Layout & Display

| Property | Description | Example |
|-----------|--------------|----------|
| `display` | Type of element box | `display: flex;` |
| `position` | Positioning method | `position: absolute;` |
| `top`, `left`, `right`, `bottom` | Offset position | `top: 10px;` |
| `float` | Float element | `float: left;` |
| `clear` | Prevent float overlap | `clear: both;` |
| `overflow` | Scroll or hide overflow | `overflow: auto;` |
| `z-index` | Layer order | `z-index: 2;` |

---

## 🧩 7. Flexbox (Modern Layout)

| Property | Description | Example |
|-----------|--------------|----------|
| `display: flex;` | Enables flex container | — |
| `flex-direction` | Row or column layout | `flex-direction: row;` |
| `justify-content` | Horizontal alignment | `justify-content: center;` |
| `align-items` | Vertical alignment | `align-items: center;` |
| `flex-wrap` | Wrap items | `flex-wrap: wrap;` |
| `gap` | Space between items | `gap: 10px;` |

---

## 🕸️ 8. Grid Layout

| Property | Description | Example |
|-----------|--------------|----------|
| `display: grid;` | Enables grid container | — |
| `grid-template-columns` | Define columns | `grid-template-columns: 1fr 2fr;` |
| `grid-template-rows` | Define rows | `grid-template-rows: 100px auto;` |
| `gap` | Gap between grid items | `gap: 10px;` |
| `justify-items` | Align horizontally | `justify-items: center;` |
| `align-items` | Align vertically | `align-items: start;` |

---

## 🌈 9. Colors & Opacity

| Property | Description | Example |
|-----------|--------------|----------|
| `color` | Text color | `color: #ff0000;` |
| `background-color` | Element background | `background-color: rgba(0,0,0,0.5);` |
| `opacity` | Transparency | `opacity: 0.8;` |

---

## ⚙️ 10. Transitions & Animations

| Property | Description | Example |
|-----------|--------------|----------|
| `transition` | Smooth change | `transition: 0.3s;` |
| `transform` | Rotate, scale, move | `transform: rotate(45deg);` |
| `@keyframes` | Define animation steps | `@keyframes move { from {left:0;} to {left:100px;} }` |
| `animation` | Apply animation | `animation: move 2s infinite;` |

---

## 📱 11. Responsive Design

| Property | Description | Example |
|-----------|--------------|----------|
| `@media` | For different screen sizes | 
```css
@media (max-width: 600px) {
  body {
    font-size: 14px;
  }
}
```

---

## 🪄 12. Other Useful Properties

| Property | Description | Example |
|-----------|--------------|----------|
| `cursor` | Mouse pointer type | `cursor: pointer;` |
| `visibility` | Show/Hide element | `visibility: hidden;` |
| `overflow` | Scrollbars control | `overflow: scroll;` |
| `clip-path` | Shape masking | `clip-path: circle(50%);` |
| `filter` | Visual effects | `filter: blur(5px);` |

---

💡 **Tip:** Use external CSS (`style.css`) for better structure and reusability.
