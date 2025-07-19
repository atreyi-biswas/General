# 📄 HTML Tags — Quick Reference Table

## ✅ Basic Structure & Metadata

| Tag           | Description                              |
|---------------|------------------------------------------|
| `<!DOCTYPE>`  | Declares document type                   |
| `<html>`      | Root of the HTML document                |
| `<head>`      | Metadata container                       |
| `<title>`     | Sets the browser tab title               |
| `<meta>`      | Metadata info like charset, viewport     |
| `<link>`      | Links external resources (e.g., CSS)     |
| `<style>`     | Internal CSS                             |
| `<script>`    | JavaScript code                          |
| `<body>`      | Main visible content                     |

---

## 📝 Text Content

| Tag           | Description                            |
|---------------|----------------------------------------|
| `<h1>`–`<h6>` | Headings (h1 = largest, h6 = smallest) |
| `<p>`         | Paragraph                              |
| `<br>`        | Line break                             |
| `<hr>`        | Horizontal rule                        |
| `<strong>`    | Bold text                              |
| `<em>`        | Italic text                            |
| `<mark>`      | Highlighted text                       |
| `<small>`     | Smaller text                           |
| `<del>`       | Deleted (strikethrough) text           |
| `<ins>`       | Inserted (underlined) text             |

---

## 📦 Grouping & Layout

| Tag       | Description               |
|-----------|---------------------------|
| `<div>`   | Block-level container     |
| `<span>`  | Inline container          |

---

## 🔗 Links & Media

| Tag        | Description                              |
|------------|------------------------------------------|
| `<a>`      | Anchor (hyperlink)                       |
| `<img>`    | Image                                    |
| `<audio>`  | Embed audio                              |
| `<video>`  | Embed video                              |
| `<source>` | Source for media (`<audio>` / `<video>`)|
| `<iframe>` | Embed another HTML page or content       |

---

## 📋 Lists

| Tag     | Description                         |
|---------|-------------------------------------|
| `<ul>`  | Unordered list                      |
| `<ol>`  | Ordered list                        |
| `<li>`  | List item                           |
| `<dl>`  | Description list                    |
| `<dt>`  | Term in description list            |
| `<dd>`  | Definition of term                  |

---

## 🧾 Tables

| Tag         | Description                        |
|-------------|------------------------------------|
| `<table>`   | Table element                      |
| `<tr>`      | Table row                          |
| `<th>`      | Table header cell                  |
| `<td>`      | Table data cell                    |
| `<caption>` | Table title                        |
| `<thead>`   | Table header group                 |
| `<tbody>`   | Table body group                   |
| `<tfoot>`   | Table footer group                 |
| `<col>`     | Defines column properties          |
| `<colgroup>`| Groups columns                     |

---

## 🧑‍💻 Forms

| Tag          | Description                         |
|--------------|-------------------------------------|
| `<form>`     | Form element                        |
| `<input>`    | Input field                         |
| `<label>`    | Label for form input                |
| `<textarea>` | Multi-line text input               |
| `<button>`   | Clickable button                    |
| `<select>`   | Dropdown list                       |
| `<option>`   | Option in dropdown                  |
| `<fieldset>` | Groups related inputs               |
| `<legend>`   | Title for a `<fieldset>`            |
| `<datalist>` | Input suggestions                   |
| `<output>`   | Displays result of a calculation    |

---

## 🧠 Semantic HTML5

| Tag           | Description                        |
|---------------|------------------------------------|
| `<header>`    | Page or section header             |
| `<nav>`       | Navigation links                   |
| `<main>`      | Main content area                  |
| `<section>`   | Thematic section of content        |
| `<article>`   | Independent, self-contained content|
| `<aside>`     | Sidebar or complementary info      |
| `<footer>`    | Footer section                     |
| `<figure>`    | Groups media like images or charts |
| `<figcaption>`| Caption for a `<figure>`           |
| `<summary>`   | Summary line for `<details>`       |
| `<details>`   | Expandable content section         |

---

## 🧩 Embedded & Scripting

| Tag         | Description                          |
|-------------|--------------------------------------|
| `<script>`  | JavaScript or link to JS file        |
| `<noscript>`| Fallback if JS is disabled           |
| `<canvas>`  | Draw graphics with JS                |
| `<svg>`     | Scalable vector graphics             |
| `<embed>`   | Embed external content               |
| `<object>`  | Embed object (media, PDF, etc.)      |
| `<param>`   | Parameters for `<object>`            |

---

## 🔤 Escaped HTML Characters

| Character | Escaped Code | Description |
|-----------|--------------|-------------|
| `<`       | `&lt;`        | Less than (left angle bracket) |
| `>`       | `&gt;`        | Greater than (right angle bracket) |
| `&`       | `&amp;`       | Ampersand |
| `"`       | `&quot;`      | Double quote |
| `'`       | `&apos;`      | Single quote |
| `/`       | `&#47;`       | Forward slash |
| `=`       | `&#61;`       | Equals sign |

---

## 🛠 Miscellaneous

| Tag        | Description                          |
|------------|--------------------------------------|
| `<base>`   | Base URL for all relative URLs       |
| `<title>`  | Page title in browser tab            |
| `<style>`  | Inline CSS styles                    |
| `<meta>`   | Metadata (charset, viewport, etc.)   |
| `<link>`   | Link external resources              |

---

## 📘 Extra Info Table

| Tag / Element | Purpose | Example |
|---------------|---------|---------|
| `<a>` | Creates a hyperlink | `<a href="https://example.com">Visit</a>` |
| `<hr>` | Draws a horizontal line | `<hr>` |
| `<pre> + escaped HTML` | Displays raw HTML/code as-is | `<pre>&lt;h1&gt;Title&lt;/h1&gt;</pre>` |
| `<div style="border-left:...">` | Draws a vertical line | `<div style="border-left: 2px solid black; height: 100px;"></div>` |
| `<div style="background-color:...">` | Custom horizontal/vertical line | `<div style="height: 2px; background: black;"></div>` |
| `<svg><line></line></svg>` | Custom line using SVG | `<svg><line x1="0" y1="0" x2="100" y2="0" style="stroke:black;stroke-width:2" /></svg>` |

---

📌 **Note**: 

> Most tags have **attributes** like `class`, `id`, `style`, `href`, `src`, etc., which give more power to the tags.<br>
> I regularly update this repository as I learn new tags, concepts, and best practices.


